/// @file

#pragma once

struct iSoundWorld
{
	///
	//virtual void Update(float afTimeStep) = 0;
	
	///
	virtual void PlaySound(const char *asSample, tVec3f avPosition) = 0;
};