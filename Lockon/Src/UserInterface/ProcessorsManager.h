#ifndef PROCESSORSMANAGER_H_
#define PROCESSORSMANAGER_H_

class ProcessorsManager
{
public: __thiscall ProcessorsManager::ProcessorsManager(class ProcessorsManager const &)
public: __thiscall ProcessorsManager::ProcessorsManager(void)
public: virtual __thiscall ProcessorsManager::~ProcessorsManager(void)
public: class ProcessorsManager & __thiscall ProcessorsManager::operator=(class ProcessorsManager const &)
public: class EagleDynamics::Common::Identifier __thiscall ProcessorsManager::getIdentifierToOpen(void)
public: class Processor * __thiscall ProcessorsManager::add(class Processor *)
public: class Processor * __thiscall ProcessorsManager::find(class EagleDynamics::Common::Identifier const &)
public: class Processor * __thiscall ProcessorsManager::open(class EagleDynamics::Common::Identifier const &)
public: virtual bool __thiscall ProcessorsManager::process(void)
public: void __thiscall ProcessorsManager::add(class ProcessorsManager::Listener *)
public: void __thiscall ProcessorsManager::close(class EagleDynamics::Common::Identifier const &)
public: void __thiscall ProcessorsManager::close(class Processor *)
public: void __thiscall ProcessorsManager::remove(class ProcessorsManager::Listener *)
public: void __thiscall ProcessorsManager::setIdentifierToOpen(class EagleDynamics::Common::Identifier)
public: void __thiscall ProcessorsManager::show(class EagleDynamics::Common::Identifier const &,bool)
private: void __thiscall ProcessorsManager::shutdown(class ATL::CComPtr<class Processor>)
private: void __thiscall ProcessorsManager::startup(class ATL::CComPtr<class Processor>)
const ProcessorsManager::`vftable'{for `EagleDynamics::Common::FactoryManager'}
const ProcessorsManager::`vftable'{for `System'}
};

class ProcessorsManager * globalProcessorsManager

#endif
