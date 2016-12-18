#ifndef LLANDPLANE_H_
#define LLANDPLANE_H_

class lLandPlane
{
public: __thiscall lLandPlane::lLandPlane(class lLandPlane const &)
public: __thiscall lLandPlane::lLandPlane(void)
public: virtual __thiscall lLandPlane::~lLandPlane(void)
public: class lLandPlane & __thiscall lLandPlane::operator=(class lLandPlane const &)
public: static class lLandObject * __cdecl lLandPlane::CreateObject(void)
public: virtual class HeapVector<struct Graphics::DynamicParam> const & __thiscall lLandPlane::GetDrawArguments(void)
public: virtual void __thiscall lLandPlane::BindToMEObject(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> > &)
public: virtual void __thiscall lLandPlane::Degrade(void)
public: virtual void __thiscall lLandPlane::Init(struct wShape *,class cPosition const &,unsigned long,void *)
public: virtual void __thiscall lLandPlane::serialize(class EagleDynamics::Common::Serializer &)
const lLandPlane::`vftable'{for `Graphics::ModelInstance'}
const lLandPlane::`vftable'{for `IwNetObject'}
const lLandPlane::`vftable'{for `lLandObject'}
const lLandPlane::`vftable'{for `viObject'}

private: static class lLandPlane::ArgumentController lLandPlane::drawArgsController
};

#endif

