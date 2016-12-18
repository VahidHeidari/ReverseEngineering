#ifndef SYNC_H_
#define SYNC_H_

namespace Sync
{

class Futex
{
public: __thiscall Sync::Futex::Futex(void)
public: __thiscall Sync::Futex::~Futex(void)
public: class Sync::Futex & __thiscall Sync::Futex::operator=(class Sync::Futex const &)
public: bool __thiscall Sync::Futex::try_lock(unsigned int)
public: void __thiscall Sync::Futex::lock(void)
public: void __thiscall Sync::Futex::unlock(void)
};

class Thread
{
public: __thiscall Sync::Thread::Thread(void)
public: __thiscall Sync::Thread::~Thread(void)
public: bool __thiscall Sync::Thread::isRunning(void)const 
public: bool __thiscall Sync::Thread::wait(int)
public: void __thiscall Sync::Thread::start(struct Sync::Thread::Task *)
public: void __thiscall Sync::Thread::stop(void)
};

class Counter
{
public: long __thiscall Sync::Counter::operator++(void)
public: long __thiscall Sync::Counter::operator--(void)
};

}		/// namespace Sync

#endif

