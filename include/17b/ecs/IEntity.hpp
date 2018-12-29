#pragma once

#include "IEntityComponent.hpp"

struct iEntity
{
	virtual void Update() = 0;
	
	virtual iEntity *GetParent() const = 0;
	
	virtual void AddChild(iEntity &apChild) = 0;
	virtual void RemoveChild(const iEntity &apChild) = 0;
	
	virtual iEntity *GetChild(int anID) const = 0;
	
	virtual void SetName(const char *asName) = 0;
	virtual const char *GetName() const = 0;
	
	virtual int GetID() const = 0;
	
	virtual void AddComponent(iEntityComponent &apComponent) = 0;
	virtual void RemoveComponent(const iEntityComponent &apComponent) = 0;
	
	virtual iEntityComponent *GetComponentByType(iEntityComponent::Type aeType) const = 0;
	
	template<typename T>
	T *GetComponent() const {return static_cast<T*>(GetComponentByType(T::Type()));}
};