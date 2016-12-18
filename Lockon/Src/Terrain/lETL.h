#ifndef LETL_H_
#define LETL_H_

class lETL
{
public: __thiscall lETL::lETL(class lETL const &)
public: __thiscall lETL::lETL(void)
public: virtual __thiscall lETL::~lETL(void)
public: class lETL & __thiscall lETL::operator=(class lETL const &)
public: virtual bool __thiscall lETL::FallDown(void)
public: virtual void __thiscall lETL::CreateCable(void)
public: virtual void __thiscall lETL::Init(struct wShape *,class cPosition const &,unsigned long,void *)
public: virtual void __thiscall lETL::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall lETL::ResetCable(void)
public: void __thiscall lETL::SetNextETL(class lETL *)
public: void __thiscall lETL::SetPrevETL(class lETL *)
const lETL::`vftable'{for `Graphics::ModelInstance'}
const lETL::`vftable'{for `IwNetObject'}
const lETL::`vftable'{for `lLandObject'}
const lETL::`vftable'{for `viObject'}
};

#endif

