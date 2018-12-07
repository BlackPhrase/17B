#pragma once

#include <list>

#include "IPhysicsWorld.hpp"

using tPhysicsBodyList = std::list<iPhysicsBody*>;

class cPhysicsWorld : public iPhysicsWorld
{
public:
	void Update(float afTimeStep) override;
	
	void SetGravity(const float *avGravity) override;
	const float *GetGravity() const override;
	
	iPhysicsBody *CreateBody() override;
	void DestroyBody(iPhysicsBody *apBody) override;
private:
	void Simulate(float afTimeStep);
	
	tPhysicsBodyList mlstBodies;
	
	float *mvGravity;
};