/// @file

#pragma once

struct iSoundEmitter
{
	struct SoundParams
	{
		const char *msSample{""};
		float mfVolume{1.0f};
	};
	
	///
	virtual void Emit(const SoundParams &apParams) = 0;
};