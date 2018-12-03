#pragma once

struct iSoundImpl
{
	///
	virtual bool Init() = 0;
	
	///
	virtual void Shutdown() = 0;
	
	///
	virtual void Update(float afTimeStep) = 0;
};