#ifndef USERINPUTSYSTEM_H_
#define USERINPUTSYSTEM_H_

class UserInputSystem
{
public: __thiscall UserInputSystem::UserInputSystem(class UserInputSystem const &)
public: __thiscall UserInputSystem::UserInputSystem(void)
public: virtual __thiscall UserInputSystem::~UserInputSystem(void)
public: class UserInputSystem & __thiscall UserInputSystem::operator=(class UserInputSystem const &)
public: virtual int __thiscall UserInputSystem::Init(void)
public: virtual int __thiscall UserInputSystem::Reinitialize(void)
public: virtual void __thiscall UserInputSystem::Finish(void)
public: virtual void __thiscall UserInputSystem::Process(void)
public: virtual void __thiscall UserInputSystem::getActiveZone(unsigned long *,unsigned long *,unsigned long *,unsigned long *)
public: virtual void __thiscall UserInputSystem::setActiveZone(unsigned long,unsigned long,unsigned long,unsigned long)
public: virtual void __thiscall UserInputSystem::setModeFullScreen(bool)
const UserInputSystem::`vftable'
};

#endif

