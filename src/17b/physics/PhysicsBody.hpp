#pragma once

#include "IPhysicsBody.hpp"

class cPhysicsBody final : public iPhysicsBody
{
public:
	void Update(float afTimeStep) override;
	
	void SetPosition(const float *avPosititon) override;
	const float *GetPosition() const override;
	
	void SetGravity(const float *avGravity) override;
	const float *GetGravity() const override;
private:
	float *mvPosition;
	float *mvGravity;
};