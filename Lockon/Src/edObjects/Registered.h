#ifndef REGISTERED_H_
#define REGISTERED_H_

class Registered
{
public: __thiscall Registered::Registered(class Registered const &)
public: __thiscall Registered::Registered(unsigned long)
public: virtual __thiscall Registered::~Registered(void)
public: class Registered & __thiscall Registered::operator=(class Registered const &)
public: int __thiscall Registered::netHost(void)const 
public: unsigned long __thiscall Registered::ID(void)const 
public: unsigned long __thiscall Registered::viType(void)const 
public: virtual bool __thiscall Registered::ForceID(unsigned long,unsigned long)
public: virtual void __thiscall Registered::serialize(class EagleDynamics::Common::Serializer &)
public: virtual void __thiscall Registered::viSetType(unsigned long)
protected: virtual bool __thiscall Registered::Register(void)
protected: virtual bool __thiscall Registered::Unregister(void)
public: void __thiscall Registered::`default constructor closure'(void)
const Registered::`vftable'
};

#endif

