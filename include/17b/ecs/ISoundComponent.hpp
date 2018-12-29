#pragma once

#include "iEntityComponent.hpp"

struct iSoundComponent : public iEntityComponent
{
	virtual bool Validate(){return true;}
	
	Type GetType() const override final {return Type::Sound;}
	
	static Type Type(){return Type::Sound;}
};