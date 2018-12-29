#include <cstdlib>
#include <cstdio>

#include "ecs/IEntity.hpp"
#include "ecs/Entity.hpp"
#include "ecs/ISoundComponent.hpp"
#include "ecs/SoundComponent.hpp"

int main(int argc, char **argv)
{
	iEntity *pEntity = new cEntity();
	iSoundComponent *pComponent = new cSoundComponent(nullptr);
	
	pEntity->AddComponent(*pComponent);
	
	auto pSoundComponent = pEntity->GetComponent<iSoundComponent>();
	
	if(pSoundComponent)
		printf("Works!\n");
	
	delete pComponent;
	pComponent = nullptr;
	
	delete pEntity;
	pEntity = nullptr;
	
	std::getchar();
	
	return EXIT_SUCCESS;
};