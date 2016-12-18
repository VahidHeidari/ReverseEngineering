#ifndef LISTTARGETMANAGER_H_
#define LISTTARGETMANAGER_H_

class ListTargetManager
{
public: __thiscall ListTargetManager::ListTargetManager(class ListTargetManager const &)
public: __thiscall ListTargetManager::ListTargetManager(void)
public: virtual __thiscall ListTargetManager::~ListTargetManager(void)
public: class ListTargetManager & __thiscall ListTargetManager::operator=(class ListTargetManager const &)
public: virtual bool __thiscall ListTargetManager::checkPresenceObjectInList(unsigned long)
public: virtual void __thiscall ListTargetManager::addTarget(unsigned long)
public: virtual void __thiscall ListTargetManager::initializeTargetManager(void)
public: virtual void __thiscall ListTargetManager::removeTarget(unsigned long)
public: virtual void __thiscall ListTargetManager::serialize(class EagleDynamics::Common::Serializer &)
public: virtual void __thiscall ListTargetManager::uninitializeTargetManager(void)
const ListTargetManager::`vftable'
};

#endif

