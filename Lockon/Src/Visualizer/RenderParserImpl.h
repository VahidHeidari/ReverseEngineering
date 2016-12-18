#ifndef RENDERPARSERIMPL_H_
#define RENDERPARSERIMPL_H_

class RenderParserImpl
{
public: __thiscall RenderParserImpl::RenderParserImpl(class RenderParserImpl const &)
public: __thiscall RenderParserImpl::RenderParserImpl(void)
public: virtual __thiscall RenderParserImpl::~RenderParserImpl(void)
public: class RenderParserImpl & __thiscall RenderParserImpl::operator=(class RenderParserImpl const &)
public: float __thiscall RenderParserImpl::GetFrameTime(void)
public: float __thiscall RenderParserImpl::GetRenderTime(void)
public: float __thiscall RenderParserImpl::ObjectMaxDist(void)
public: float __thiscall RenderParserImpl::ObjectTransparent(void)
public: float __thiscall RenderParserImpl::ObjectTransparentFar(void)
public: float __thiscall RenderParserImpl::ObjectTransparentNear(void)
public: int __thiscall RenderParserImpl::GetObjsCount(void)
public: int __thiscall RenderParserImpl::GetTrisCount(void)
public: int __thiscall RenderParserImpl::GetWarmAirCount(void)
public: virtual class Graphics::RenderObject * __thiscall RenderParserImpl::GetNextObject(void *)
public: virtual void __thiscall RenderParserImpl::DrawAll(void *)
public: virtual void __thiscall RenderParserImpl::DrawClouds(void)
public: virtual void __thiscall RenderParserImpl::InitFrame(int *,int *)
public: virtual void __thiscall RenderParserImpl::OnObjectReady(class Graphics::RenderObject *)
public: void __thiscall RenderParserImpl::DrawTransparent(void)
public: void __thiscall RenderParserImpl::DrawWarmAir(void)
public: void __thiscall RenderParserImpl::DrawZWrited(void)
public: void __thiscall RenderParserImpl::ObjectMaxDist(float)
public: void __thiscall RenderParserImpl::ObjectTransparent(float)
public: void __thiscall RenderParserImpl::ObjectTransparentFar(float)
public: void __thiscall RenderParserImpl::ObjectTransparentNear(float)
public: void __thiscall RenderParserImpl::ResetIRMode(void)
public: void __thiscall RenderParserImpl::SetForcedMaterial(class Graphics::Material *)
public: void __thiscall RenderParserImpl::SetIRSignature(float)
public: void __thiscall RenderParserImpl::SetShadowContext(void *)
protected: void __thiscall RenderParserImpl::PassAsIR_MFD(class Graphics::RenderObject *)
protected: void __thiscall RenderParserImpl::PassAsObject(class Graphics::RenderObject *)
protected: void __thiscall RenderParserImpl::PassAsOnlay(class Graphics::RenderObject *)
protected: void __thiscall RenderParserImpl::PassAsShadow(class Graphics::RenderObject *)
protected: void __thiscall RenderParserImpl::PassAsWarmAir(class Graphics::RenderObject *)
const RenderParserImpl::`vftable'
};

#endif

