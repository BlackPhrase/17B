#pragma once

#include <list>

#include "ISoundWorld.hpp"

using tSoundEmitterList = std::list<iSoundEmitter*>;

class cSoundWorld final : public iSoundWorld
{
public:
	void Update(float afTimeStep) override;
	
	iSoundEmitter *CreateEmitter() override;
	void DestroyEmitter(iSoundEmitter *apEmitter) override;
	
	//void SetEmitterActive(iSoundEmitter *apEmitter, bool abActive) override;
	//bool IsEmitterActive(iSoundEmitter *apEmitter) override;
private:
	tSoundEmitterList mlstEmitters;
	//tSoundEmitterList mlstActiveEmitters;
};