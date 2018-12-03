#include "Sound.hpp"
#include "ISoundImpl.hpp"
#include "ISoundWorld.hpp"

bool cSound::Init()
{
	return mpImpl->Init();
};

void cSound::Shutdown()
{
	mpImpl->Shutdown();
};

void cSound::Update(float afTimeStep)
{
	mpImpl->Update(afTimeStep);
	
	if(mpActiveWorld)
		mpActiveWorld->Update(afTimeStep);
};

iSoundWorld *cSound::CreateWorld()
{
	auto pWorld{new CSoundWorld()};
	mlstWorlds.push_back(pWorld);
	return pWorld;
};

void cSound::DestroyWorld(iSoundWorld *apWorld)
{
	if(!apWorld)
		return;
	
	std::remove(mlstWorlds, apWorld);
};