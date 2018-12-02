/// @file
/// @brief root environment interface

#pragma once

struct iMemoryManager;
struct iGraphics;
struct iSound;
struct iInput;
struct iPhysics;
struct iNetwork;

struct iRootEnv
{
	///
	virtual iMemoryManager *GetMemoryManager() const = 0;
	
	///
	virtual iGraphics *GetGraphics() const = 0;
	
	///
	virtual iSound *GetSound() const = 0;
	
	///
	virtual iInput *GetInput() const = 0;
	
	///
	virtual iPhysics *GetPhysics() const = 0;
	
	///
	virtual iNetwork *GetNetwork() const = 0;
};