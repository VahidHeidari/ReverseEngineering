#ifndef IWWORLD_H_
#define IWWORLD_H_

class IwWorld
{
public: __thiscall IwWorld::IwWorld(class IwWorld const &)
public: __thiscall IwWorld::IwWorld(void)
public: virtual __thiscall IwWorld::~IwWorld(void)
public: class IwWorld & __thiscall IwWorld::operator=(class IwWorld const &)
public: bool __thiscall IwWorld::netIsRunning(void)const 
public: bool __thiscall IwWorld::netIsServer(void)const 
public: unsigned long __thiscall IwWorld::netLocalID(void)const 
public: unsigned long __thiscall IwWorld::netServerID(void)const 
public: void __thiscall IwWorld::netSend(unsigned long,class Mail::Message const &)
const IwWorld::`vftable'
};

class IwWorld * globalWorld

#endif

