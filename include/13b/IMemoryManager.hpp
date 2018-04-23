/// @file
/// @brief memory manager interface

#pragma once

#include <cstdstring>

struct iMemoryManager
{
	///
	virtual void *Alloc(size_t anSize) = 0;
	
	///
	virtual void Free(void *apData) = 0;
};