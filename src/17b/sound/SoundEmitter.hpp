#pragma once

#include "ISoundEmitter.hpp"

class cSoundEmitter final : public iSoundEmitter
{
public:
	void Emit(const SoundParams &apParams) override;
private:
};