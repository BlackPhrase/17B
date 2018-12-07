/// @file

#pragma once

struct iSoundEmitter;

struct iSoundWorld
{
	///
	virtual void Update(float afTimeStep) = 0;
	
	///
	//virtual void PlaySound(const char *asSample, tVec3f avPosition) = 0;
	
	///
	virtual iSoundEmitter *CreateEmitter() = 0;
	
	///
	virtual void DestroyEmitter(iSoundEmitter *apEmitter) = 0;
	
	///
	//virtual void SetListenerPos(const float *avPos) = 0;
	
	///
	//virtual const float *GetListenerPos() const = 0;
};