#ifndef LOBJECTDYNDATA_H_
#define LOBJECTDYNDATA_H_

class lObjectDynData
{
public: virtual __thiscall lObjectDynData::~lObjectDynData(void)
public: class lObjectDynData & __thiscall lObjectDynData::operator=(class lObjectDynData const &)
public: __thiscall lObjectDynData::lObjectDynData(class lObjectDynData const &)
public: __thiscall lObjectDynData::lObjectDynData(void)
public: class Suicide * __thiscall lObjectDynData::GetCameraContext(void)
public: class cPosition & __thiscall lObjectDynData::Pos0(void)
public: class lLandObject * __thiscall lObjectDynData::Me(void)
public: int __thiscall lObjectDynData::Life(void)
public: struct wShape * __thiscall lObjectDynData::Type0(void)
public: virtual class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > & __thiscall lObjectDynData::GetMEObject(void)
public: virtual void __thiscall lObjectDynData::BindToMEObject(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > &)
public: virtual void __thiscall lObjectDynData::Init(class lLandObject *)
public: virtual void __thiscall lObjectDynData::SetLife(int)
public: virtual void __thiscall lObjectDynData::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall lObjectDynData::SetCameraContext(class Suicide *)
public: void __thiscall lObjectDynData::SetOwner(class lLandObject *)
const lObjectDynData::`vftable'
};

#endif

