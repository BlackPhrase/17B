#include "PhysicsWorld.hpp"

void cPhysicsWorld::Update(float afTimeStep)
{
	Simulate(afTimeStep);
};

void cPhysicsWorld::SetGravity(const float *avGravity)
{
	mvGravity = avGravity;
	
	for(auto It : mlstBodies)
		It->SetGravity(mvGravity);
};

const float *cPhysicsWorld::GetGravity() const
{
	return mvGravity;
};

iPhysicsBody *cPhysicsWorld::CreateBody()
{
	auto pBody{new cPhysicsBody()};
	mlstBodies.push_back(pBody);
	return pBody;
};

void cPhysicsWorld::DestroyBody(iPhysicsBody *apBody)
{
	if(!apBody)
		return;
	
	std::remove(mlstBodies, apBody);
};

void cPhysicsWorld::Simulate(float afTimeStep)
{
	for(auto It : mlstBodies)
		It->Update(afTimeStep);
};