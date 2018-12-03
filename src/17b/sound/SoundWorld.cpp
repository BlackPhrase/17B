#include "SoundWorld.hpp"
#include "SoundEmitter.hpp"

void cSoundWorld::Update(float afTimeStep)
{
	//for(auto It : mlstEmitters)
		//It->Update(afTimeStep);
};

iSoundEmitter *cSoundWorld::CreateEmitter()
{
	auto pEmitter{new cSoundEmitter()};
	mlstEmitters.push_back(pEmitter);
	return pEmitter;
};

void cSoundWorld::DestroyWorld(iSoundEmitter *apEmitter)
{
	if(!apEmitter)
		return;
	
	std::remove(mlstEmitters, apEmitter);
};