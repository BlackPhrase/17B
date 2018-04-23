/// @file
/// @brief root interface

#pragma once

struct iRootEnv;

struct iRoot
{
	///
	virtual bool Init(iRootEnv &apEnv) = 0;
};