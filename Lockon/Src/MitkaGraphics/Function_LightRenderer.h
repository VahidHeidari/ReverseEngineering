#ifndef FUNCTION_LIGHTRENDERER_H_
#define FUNCTION_LIGHTRENDERER_H_


class Function_LightRenderer
{
public: __thiscall Function_LightRenderer::Function_LightRenderer(class Function_LightRenderer const &)
public: class Function_LightRenderer & __thiscall Function_LightRenderer::operator=(class Function_LightRenderer const &)
public: virtual bool __thiscall Function_LightRenderer::Apply(class Graphics::RenderObject *)
public: virtual bool __thiscall Function_LightRenderer::CanApply(void)
public: virtual void __thiscall Function_LightRenderer::OnUpdate(void)
public: virtual void __thiscall Function_LightRenderer::Register(void)
public: virtual void __thiscall Function_LightRenderer::Update(enum eDrawRoutines,class Position3 const &,float,class HeapVector<class Graphics::VolumeEffect *> *,bool)
public: virtual void __thiscall Function_LightRenderer::UsedThisFrame(void)
protected: __thiscall Function_LightRenderer::Function_LightRenderer(class ConfigParser *)
protected: virtual __thiscall Function_LightRenderer::~Function_LightRenderer(void)
protected: static bool __cdecl Function_LightRenderer::SelectCloud(class viObject *,class viSearch *,void *)
protected: static bool __cdecl Function_LightRenderer::SelectProjLight(class viObject *,class viSearch *,void *)
protected: struct D3DXMATRIX __thiscall Function_LightRenderer::GetTTFMatrix(struct D3DXMATRIX *)
protected: virtual bool __thiscall Function_LightRenderer::Render(enum eDrawRoutines,class Graphics::Camera &,class HeapVector<class Graphics::VolumeEffect *> *,bool)
protected: virtual class Graphics::Camera __thiscall Function_LightRenderer::PrepareCamera(class Graphics::Camera const &)
protected: void __thiscall Function_LightRenderer::ParseCloudShadow(class viObject *)
protected: void __thiscall Function_LightRenderer::ParseVolumeEffect(class Graphics::VolumeEffect *)
protected: void __thiscall Function_LightRenderer::RenderSurface(enum eDrawRoutines,class Position3 const &)
const Function_LightRenderer::`vftable'{for `Function'}
const Function_LightRenderer::`vftable'{for `Graphics::RendererCallback'}
const Function_LightRenderer::`vftable'{for `ILightRenderer'}
};

#endif

