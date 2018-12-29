#pragma once

#include "ecs/IEntityComponent.hpp"

class cEntityComponent : public iEntityComponent
{
public:
	cEntityComponent(Type aeType) : meType(aeType){}
	
	Type GetType() const override {return meType;}
private:
	Type meType{iEntityComponent::Invalid};
};