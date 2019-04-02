/// @file
/// @brief rotor interface

#pragma once

struct iRootEnv;

struct iRotor
{
	///
	virtual bool Init(iRootEnv &apEnv) = 0;
	
	///
	virtual void Shutdown() = 0;
	
	///
	virtual void Spin() = 0;
};