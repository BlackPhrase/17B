#pragma once

#include "ecs/ISoundComponent.hpp"

struct iSoundEmitter;

class cSoundComponent : public iSoundComponent
{
public:
	cSoundComponent(iSoundEmitter *apEmitter) : mpEmitter(apEmitter){}
	
	void Update() override;
private:
	iSoundEmitter *mpEmitter{nullptr};
};