#ifndef WOFREEFALL_H_
#define WOFREEFALL_H_

class woFreeFall
{
public: __thiscall woFreeFall::woFreeFall(class woFreeFall const &)
public: __thiscall woFreeFall::woFreeFall(void)
public: virtual __thiscall woFreeFall::~woFreeFall(void)
public: class woFreeFall & __thiscall woFreeFall::operator=(class woFreeFall const &)
public: static unsigned long __cdecl woFreeFall::Create(unsigned long,class cPosition,class wsType,int)
public: virtual class HeapVector<struct Graphics::DynamicParam> const & __thiscall woFreeFall::GetDrawArguments(void)
public: virtual class cPosition & __thiscall woFreeFall::Position(double)
public: virtual int __thiscall woFreeFall::Class(void)
public: virtual struct gBox const & __thiscall woFreeFall::LocalBox(double)
public: virtual void __thiscall woFreeFall::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall woFreeFall::resetActivityPointer(void)
public: void __thiscall woFreeFall::setFreeFall(unsigned long,class cPosition &,class wsType)
private: void __thiscall woFreeFall::Init(void)
private: void __thiscall woFreeFall::SetShape(class wsType)
private: void __thiscall woFreeFall::SpaceRegister(double)
private: void __thiscall woFreeFall::Status_Quo(double)
const woFreeFall::`vftable'{for `Evoker<class wListener,class Link<class wListener> >'}
const woFreeFall::`vftable'{for `Graphics::ModelInstance'}
const woFreeFall::`vftable'{for `IwNetObject'}
const woFreeFall::`vftable'{for `Suicide'}
const woFreeFall::`vftable'{for `viMovingObject'}
const woFreeFall::`vftable'{for `viObject'}
const woFreeFall::`vftable'{for `wVulnerable'}
};

#endif

