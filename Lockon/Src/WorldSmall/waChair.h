#ifndef WACHAIR_H_
#define WACHAIR_H_

class waChair
{
public: __thiscall waChair::waChair(class waChair const &)
public: __thiscall waChair::waChair(void)
public: virtual __thiscall waChair::~waChair(void)
public: class waChair & __thiscall waChair::operator=(class waChair const &)
public: bool __thiscall waChair::IsLocalUser(void)
public: static void __cdecl waChair::Create(class cPosition &,class E3::Vector &,unsigned char,bool)
public: virtual class cPosition & __thiscall waChair::Position(double)
public: virtual float const __thiscall waChair::Hrad(void)
public: virtual void __thiscall waChair::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall waChair::Control(void)
public: void __thiscall waChair::Next_Step(void)
public: void __thiscall waChair::setChair(class cPosition &,class E3::Vector &,unsigned char,bool)
public: virtual class HeapVector<struct Graphics::DynamicParam> const & __thiscall waChair::GetDrawArguments(void)
private: void __thiscall waChair::Control_Attitude(void)
private: void __thiscall waChair::Control_Gamma_Req(void)
private: void __thiscall waChair::Control_Vel(void)
private: void __thiscall waChair::Disconnection(void)
private: void __thiscall waChair::Set_Draw_Args(void)
private: void __thiscall waChair::Status_Quo(double)
const waChair::`vftable'{for `Evoker<class wListener,class Link<class wListener> >'}
const waChair::`vftable'{for `Graphics::ModelInstance'}
const waChair::`vftable'{for `IwNetObject'}
const waChair::`vftable'{for `Suicide'}
const waChair::`vftable'{for `viMovingObject'}
const waChair::`vftable'{for `viObject'}
const waChair::`vftable'{for `wVulnerable'}
};

#endif

