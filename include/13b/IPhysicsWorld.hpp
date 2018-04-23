/// @file
/// @brief physics world interface

#pragma once

struct iPhysicsBody;

struct iPhysicsWorld
{
	///
	virtual iPhysicsBody *CreateBody() = 0;
	
	///
	virtual void DestroyBody(iPhysicsBody *apBody) = 0;
};