#ifndef DISTANCEKILLERMANAGER_H_
#define DISTANCEKILLERMANAGER_H_

class DistanceKillerManager
{
public: __thiscall DistanceKillerManager::DistanceKillerManager(class DistanceKillerManager const &)
public: __thiscall DistanceKillerManager::DistanceKillerManager(float)
public: __thiscall DistanceKillerManager::~DistanceKillerManager(void)
public: class DistanceKillerManager & __thiscall DistanceKillerManager::operator=(class DistanceKillerManager const &)
public: void __thiscall DistanceKillerManager::SetThreshold(float)
public: void __thiscall DistanceKillerManager::Update(class Vector3 const &)
private: void __thiscall DistanceKillerManager::Register(class DistanceKiller *)
private: void __thiscall DistanceKillerManager::Unregister(class DistanceKiller *)
};

#endif

