#include <algorithm>

#include "Entity.hpp"

void cEntity::Update()
{
	for(auto It : mlstComponents)
		It->Update();
	
	for(auto It : mlstChildren)
		It->Update();
};

void cEntity::AddChild(/*const*/ iEntity &apChild)
{
	mlstChildren.push_back(std::addressof(apChild));
};

void cEntity::RemoveChild(const iEntity &apChild)
{
	mlstChildren.erase(std::remove(mlstChildren.begin(), mlstChildren.end(), std::addressof(apChild)));
};

iEntity *cEntity::GetChild(int anID) const
{
	// TODO
	return nullptr;
};

void cEntity::AddComponent(/*const*/ iEntityComponent &apComponent)
{
	mlstComponents.push_back(std::addressof(apComponent));
};

void cEntity::RemoveComponent(const iEntityComponent &apComponent)
{
	mlstComponents.erase(std::remove(mlstComponents.begin(), mlstComponents.end(), std::addressof(apComponent)));
};

iEntityComponent *cEntity::GetComponentByType(iEntityComponent::Type aeType) const
{
	for(auto It : mlstComponents)
		if(It->GetType() == aeType)
			return It;
	
	return nullptr;
};