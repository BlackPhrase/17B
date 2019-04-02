/// @file
/// @brief root interface

#pragma once

struct iRootEnv;
struct iRotor;

struct iRoot
{
	///
	virtual bool Init(iRootEnv &aEnv) = 0;
	
	///
	virtual bool AttachRotor(iRotor &aRotor) = 0;
	
	///
	virtual void DetachRotot(iRotor &aRotor) = 0;
	
	///
	virtual void AddJob(iJob &aJob) = 0;
	
	///
	virtual void Spin() = 0;
};