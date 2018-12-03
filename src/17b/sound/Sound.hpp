#pragma once

#include <list>

#include "ISound.hpp"

using tSoundWorldList = std::list<iSoundWorld*>;

struct iSoundImpl;

class cSound : public iSound
{
public:
	bool Init() override;
	void Shutdown() override;
	
	void Update(float afTimeStep) override;
	
	iSoundWorld *CreateWorld() override;
	void DestroyWorld(iSoundWorld *apWorld) override;
	
	void SetActiveWorld(iSoundWorld *apWorld) override {mpActiveWorld = apWorld;}
	iSoundWorld *GetActiveWorld() const override {return mpActiveWorld;}
private:
	tSoundWorldList mlstWorlds;
	
	iSoundImpl *mpImpl{nullptr};
	iSoundWorld *mpActiveWorld{nullptr};
};