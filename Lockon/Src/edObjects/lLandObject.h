#ifndef LLANDOBJECT_H_
#define LLANDOBJECT_H_

class lLandObject
{
public: __thiscall lLandObject::lLandObject(class lLandObject const &)
public: __thiscall lLandObject::lLandObject(void)
public: virtual __thiscall lLandObject::~lLandObject(void)
public: class lLandObject & __thiscall lLandObject::operator=(class lLandObject const &)
public: class lObjectDynData * __thiscall lLandObject::DynData(void)
public: static class lLandObject * __cdecl lLandObject::CreateObject(void)
public: struct wShape * __thiscall lLandObject::Type(void)const 
public: virtual bool __thiscall lLandObject::IsDead(void)const 
public: virtual class ClipVolume * __thiscall lLandObject::FlatShape(void)
public: virtual class Graphics::Model * __thiscall lLandObject::GetModel(void)
public: virtual class Position3 const & __thiscall lLandObject::GetPosition(void)
public: virtual class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > & __thiscall lLandObject::GetMEObject(void)
public: virtual class cPosition & __thiscall lLandObject::Position(double)
public: virtual float __thiscall lLandObject::Life(void)const 
public: virtual float __thiscall lLandObject::Life0(void)const 
public: virtual int __thiscall lLandObject::CurLife(void)const 
public: virtual void __thiscall lLandObject::BindToMEObject(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > &)
public: virtual void __thiscall lLandObject::CreateDynamicData(void)
public: virtual void __thiscall lLandObject::Degrade(void)
public: virtual void __thiscall lLandObject::Init(struct wShape *,class cPosition const &,unsigned long,void *)
public: virtual void __thiscall lLandObject::PostCollisionProcessing(struct wsCollisionData *,unsigned long)
public: virtual void __thiscall lLandObject::ReinitState(void)
public: virtual void __thiscall lLandObject::SetLife(int)
public: virtual void __thiscall lLandObject::SetPos(class cPosition const &)
public: virtual void __thiscall lLandObject::TakeDamage(class DamageInfo const &)
public: virtual void __thiscall lLandObject::TakeDamage(int)
public: virtual void __thiscall lLandObject::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall lLandObject::serializeChanges(bool)
protected: virtual void __thiscall lLandObject::ConstructFlatShape(void)
const lLandObject::`vftable'
const lLandObject::`vftable'{for `Graphics::ModelInstance'}
const lLandObject::`vftable'{for `viObject'}
};

#endif

