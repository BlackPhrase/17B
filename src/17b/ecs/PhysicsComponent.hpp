#pragma once

#include "ecs/IPhysicsComponent.hpp"

struct iPhysicsBody;

class cPhysicsComponent : public iPhysicsComponent
{
public:
	cPhysicsComponent(iPhysicsBody *apBody) : mpBody(apBody){}
	
	void Update() override;
private:
	iPhysicsBody *mpBody{nullptr};
};