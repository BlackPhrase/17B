#pragma once

#include <list>
#include <functional>

#include "ecs/IEntity.hpp"

using tEntityList = std::list<iEntity*>;
using tEntityComponentList = std::list<iEntityComponent*>;

class cEntity : public iEntity
{
public:
	void Update() override;
	
	iEntity *GetParent() const override {return mpParent;}
	
	void AddChild(iEntity &apChild) override;
	void RemoveChild(const iEntity &apChild) override;
	
	iEntity *GetChild(int anID) const override;
	
	void SetName(const char *asName) override {msName = asName;}
	const char *GetName() const override {return msName;}
	
	int GetID() const override {return mnID;}
	
	void AddComponent(iEntityComponent &apComponent) override;
	void RemoveComponent(const iEntityComponent &apComponent) override;
	
	iEntityComponent *GetComponentByType(iEntityComponent::Type aeType) const override;
private:
	tEntityComponentList mlstComponents;
	tEntityList mlstChildren;
	
	iEntity *mpParent{nullptr};
	
	const char *msName{""};
	int mnID{0};
};