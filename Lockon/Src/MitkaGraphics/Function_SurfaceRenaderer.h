#ifndef FUNCTION_SURFACERENADERER_H_
#define FUNCTION_SURFACERENADERER_H_

Function_SurfaceRenderer
{
public: __thiscall Function_SurfaceRenderer::Function_SurfaceRenderer(class Function_SurfaceRenderer const &)
public: class Function_SurfaceRenderer & __thiscall Function_SurfaceRenderer::operator=(class Function_SurfaceRenderer const &)
public: virtual bool __thiscall Function_SurfaceRenderer::Apply(class Graphics::RenderObject *)
public: virtual void __thiscall Function_SurfaceRenderer::OnUpdate(void)
public: virtual void __thiscall Function_SurfaceRenderer::Register(void)
public: virtual void __thiscall Function_SurfaceRenderer::UsedThisFrame(void)
protected: __thiscall Function_SurfaceRenderer::Function_SurfaceRenderer(void)
protected: virtual __thiscall Function_SurfaceRenderer::~Function_SurfaceRenderer(void)
protected: struct D3DXMATRIX __thiscall Function_SurfaceRenderer::GetTTFMatrix(struct D3DXMATRIX *)
protected: virtual bool __thiscall Function_SurfaceRenderer::Render(class Graphics::Camera &)
protected: virtual class Graphics::Camera __thiscall Function_SurfaceRenderer::PrepareCamera(class Graphics::Camera const &)
protected: void __thiscall Function_SurfaceRenderer::RenderSurface(enum eDrawRoutines,class Position3 const &)
const Function_SurfaceRenderer::`vftable'{for `Function'}
const Function_SurfaceRenderer::`vftable'{for `Graphics::RendererCallback'}
};

#endif

