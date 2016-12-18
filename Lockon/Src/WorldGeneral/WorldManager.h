#ifndef WORLDMANAGER_H_
#define WORLDMANAGER_H_

class WorldManager
{
public: __thiscall WorldManager::WorldManager(class WorldManager const &)
public: __thiscall WorldManager::WorldManager(void)
public: virtual __thiscall WorldManager::~WorldManager(void)
public: class WorldManager & __thiscall WorldManager::operator=(class WorldManager const &)
public: class cPointerTemplate<class MovingObject> __thiscall WorldManager::Get_woPointer(unsigned long)
public: class cPointerTemplate<class MovingObject> __thiscall WorldManager::HumanPtr(void)
public: unsigned long __thiscall WorldManager::GetNearestAirdrome(class cPosition &,float &)
public: unsigned long __thiscall WorldManager::ID_OF_Human(void)
public: virtual void __thiscall WorldManager::create(class EagleDynamics::Common::Identifier const &,class EagleDynamics::Common::Identifiable * *)
public: virtual void __thiscall WorldManager::notifyBirth(class wObject *)
public: virtual void __thiscall WorldManager::notifyDeath(class wObject *)
public: virtual void __thiscall WorldManager::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall WorldManager::ResetHuman(class cPointerTemplate<class MovingObject>)
public: void __thiscall WorldManager::SetHuman(class cPointerTemplate<class MovingObject>)
const WorldManager::`vftable'{for `EagleDynamics::Common::FakeUnknown<class EagleDynamics::Common::FactoryManager>'}
const WorldManager::`vftable'{for `Evoker<class wListener,class Link<class wListener> >'}
const WorldManager::`vftable'{for `Suicide'}
const WorldManager::`vftable'{for `System'}
};

class WorldManager * globalWorldManager

#endif

