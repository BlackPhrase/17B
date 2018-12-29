#pragma once

#include "iEntityComponent.hpp"

struct iPhysicsComponent : public iEntityComponent
{
	Type GetType() const override final {return Type::Physics;}
};