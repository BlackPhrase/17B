#pragma once

struct iEntityComponent
{
	enum class Type
	{
		Invalid = -1,
		Physics,
		Sound
	};
	
	virtual void Update() = 0;
	
	virtual Type GetType() const = 0;
};