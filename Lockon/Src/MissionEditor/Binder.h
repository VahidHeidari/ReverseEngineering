#ifndef BINDER_H_
#define BINDER_H_

class Binder
{
public: __thiscall Binder::Binder(class Binder const &)
public: __thiscall Binder::Binder(void)
public: virtual __thiscall Binder::~Binder(void)
public: class Binder & __thiscall Binder::operator=(class Binder const &)
public: virtual void __thiscall Binder::add(class EagleDynamics::Common::Identifier const &)
public: virtual void __thiscall Binder::add(class Processor const *)
public: virtual void __thiscall Binder::clear(void)
public: virtual void __thiscall Binder::close(void)
public: virtual void __thiscall Binder::onClose(class Processor *)
public: virtual void __thiscall Binder::onOpen(class Processor *)
public: virtual void __thiscall Binder::open(void)
public: virtual void __thiscall Binder::remove(class EagleDynamics::Common::Identifier const &)
public: virtual void __thiscall Binder::remove(class Processor const *)
protected: virtual bool __thiscall Binder::createProcessorsFactory(void)
protected: virtual bool __thiscall Binder::removeProcessorsFactory(void)
const Binder::`vftable'{for `ProcessorsHistoryManager'}
const Binder::`vftable'{for `ProcessorsManager::Listener'}
};

#endif

