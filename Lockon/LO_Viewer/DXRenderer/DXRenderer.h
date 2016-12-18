#ifndef DXRENDERER_H_
#define DXRENDERER_H_

struct IDirect3DDevice8 * d3d_device

namespace Graphics
{

class Graphics::DXRenderer * & dxrenderer
unsigned long Graphics::DEFAULT_CULLMODE

class CanopyGlass
{
public: __thiscall Graphics::CanopyGlass::CanopyGlass(class Graphics::CanopyGlass const &)
public: __thiscall Graphics::CanopyGlass::CanopyGlass(void)
public: virtual __thiscall Graphics::CanopyGlass::~CanopyGlass(void)
public: class Graphics::CanopyGlass & __thiscall Graphics::CanopyGlass::operator=(class Graphics::CanopyGlass const &)
public: static class Resource * __cdecl Graphics::CanopyGlass::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: static class Resource * __cdecl Graphics::CanopyGlass::CreateNudged(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual __int64 __thiscall Graphics::CanopyGlass::GetMaterialCaps(void)
public: virtual bool __thiscall Graphics::CanopyGlass::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual class Graphics::CustomMaterial * __thiscall Graphics::CanopyGlass::QueryCustomMaterial(void)
public: virtual class Graphics::DXTexture * __thiscall Graphics::CanopyGlass::GetMainDiffuseMap(void)
public: virtual class Graphics::Texture * __thiscall Graphics::CanopyGlass::GetTexture(int)
public: virtual class Vector3 * __thiscall Graphics::CanopyGlass::GetMainDiffuseColor(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::CanopyGlass::ClassName(void)
public: virtual float __thiscall Graphics::CanopyGlass::GetLoadPriority(void)
public: virtual int __thiscall Graphics::CanopyGlass::GetLoadStep(void)
public: virtual int __thiscall Graphics::CanopyGlass::GetLoadStepCount(void)
public: virtual int __thiscall Graphics::CanopyGlass::GetTextureCount(void)
public: virtual unsigned int __thiscall Graphics::CanopyGlass::GetKey(void)
public: virtual void __thiscall Graphics::CanopyGlass::DrawGeometry(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::CanopyGlass::FreeToStep(int)
public: virtual void __thiscall Graphics::CanopyGlass::LoadToStep(int)
public: virtual void __thiscall Graphics::CanopyGlass::LoadWithDependents(int)
public: virtual void __thiscall Graphics::CanopyGlass::SetAmbientColor(class Vector3 const &)
public: virtual void __thiscall Graphics::CanopyGlass::SetDiffuseColor(class Vector3 const &)
public: virtual void __thiscall Graphics::CanopyGlass::SetDiffuseMap(int,class Graphics::Texture *)
public: virtual void __thiscall Graphics::CanopyGlass::SetGlossiness(float)
public: virtual void __thiscall Graphics::CanopyGlass::SetOpacity(float)
public: virtual void __thiscall Graphics::CanopyGlass::SetSpecularColor(class Vector3 const &)
public: virtual void __thiscall Graphics::CanopyGlass::serialize(class EagleDynamics::Common::Serializer &)
protected: virtual void __thiscall Graphics::CanopyGlass::FillDXMat(void)
public: void __thiscall Graphics::CanopyGlass::`vbase destructor'(void)
const Graphics::CanopyGlass::`vbtable'
const Graphics::CanopyGlass::`vftable'{for `Graphics::CustomMaterial'}
const Graphics::CanopyGlass::`vftable'{for `Graphics::DXBrushedMaterial'}
};

class CanopyScratch
{
public: __thiscall Graphics::CanopyScratch::CanopyScratch(class Graphics::CanopyScratch const &)
public: __thiscall Graphics::CanopyScratch::CanopyScratch(void)
public: virtual __thiscall Graphics::CanopyScratch::~CanopyScratch(void)
public: class Graphics::CanopyScratch & __thiscall Graphics::CanopyScratch::operator=(class Graphics::CanopyScratch const &)
public: static class Resource * __cdecl Graphics::CanopyScratch::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual __int64 __thiscall Graphics::CanopyScratch::GetMaterialCaps(void)
public: virtual bool __thiscall Graphics::CanopyScratch::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual class Graphics::CustomMaterial * __thiscall Graphics::CanopyScratch::QueryCustomMaterial(void)
public: virtual class Graphics::DXTexture * __thiscall Graphics::CanopyScratch::GetMainDiffuseMap(void)
public: virtual class Graphics::Texture * __thiscall Graphics::CanopyScratch::GetTexture(int)
public: virtual class Vector3 * __thiscall Graphics::CanopyScratch::GetMainDiffuseColor(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::CanopyScratch::ClassName(void)
public: virtual float __thiscall Graphics::CanopyScratch::GetLoadPriority(void)
public: virtual int __thiscall Graphics::CanopyScratch::GetLoadStep(void)
public: virtual int __thiscall Graphics::CanopyScratch::GetLoadStepCount(void)
public: virtual int __thiscall Graphics::CanopyScratch::GetTextureCount(void)
public: virtual unsigned int __thiscall Graphics::CanopyScratch::GetKey(void)
public: virtual void __thiscall Graphics::CanopyScratch::DrawGeometry(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::CanopyScratch::FreeToStep(int)
public: virtual void __thiscall Graphics::CanopyScratch::LoadToStep(int)
public: virtual void __thiscall Graphics::CanopyScratch::LoadWithDependents(int)
public: virtual void __thiscall Graphics::CanopyScratch::SetAmbientColor(class Vector3 const &)
public: virtual void __thiscall Graphics::CanopyScratch::SetDiffuseColor(class Vector3 const &)
public: virtual void __thiscall Graphics::CanopyScratch::SetDiffuseMap(int,class Graphics::Texture *)
public: virtual void __thiscall Graphics::CanopyScratch::SetGlossiness(float)
public: virtual void __thiscall Graphics::CanopyScratch::SetOpacity(float)
public: virtual void __thiscall Graphics::CanopyScratch::SetSpecularColor(class Vector3 const &)
public: virtual void __thiscall Graphics::CanopyScratch::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall Graphics::CanopyScratch::`vbase destructor'(void)
const Graphics::CanopyScratch::`vbtable'
const Graphics::CanopyScratch::`vftable'{for `Graphics::CustomMaterial'}
const Graphics::CanopyScratch::`vftable'{for `Graphics::DXBrushedMaterial'}
};

class DXAviTexture
{
public: __thiscall Graphics::DXAviTexture::DXAviTexture(class Graphics::DXAviTexture const &)
public: __thiscall Graphics::DXAviTexture::DXAviTexture(void)
public: virtual __thiscall Graphics::DXAviTexture::~DXAviTexture(void)
public: class Graphics::DXAviTexture & __thiscall Graphics::DXAviTexture::operator=(class Graphics::DXAviTexture const &)
public: static class Resource * __cdecl Graphics::DXAviTexture::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::DXAviTexture::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::DXAviTexture::HaveAlpha(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DXAviTexture::ClassName(void)
public: virtual float __thiscall Graphics::DXAviTexture::GetLength(void)const 
public: virtual float __thiscall Graphics::DXAviTexture::GetLoadPriority(void)
public: virtual float __thiscall Graphics::DXAviTexture::GetPhase(void)const 
public: virtual int __thiscall Graphics::DXAviTexture::GetLoadStep(void)
public: virtual int __thiscall Graphics::DXAviTexture::GetLoadStepCount(void)
public: virtual int __thiscall Graphics::DXAviTexture::getCurrFrame(void)
public: virtual struct IDirect3DBaseTexture8 * __thiscall Graphics::DXAviTexture::GetHandle(void)
public: virtual struct IDirect3DSurface8 * __thiscall Graphics::DXAviTexture::GetSurface(unsigned int)
public: virtual unsigned int __thiscall Graphics::DXAviTexture::ReleaseSurface(struct IDirect3DSurface8 *)
public: virtual unsigned int __thiscall Graphics::DXAviTexture::getFramesCount(void)
public: virtual void __thiscall Graphics::DXAviTexture::FreeToStep(int)
public: virtual void __thiscall Graphics::DXAviTexture::GetResolution(int &,int &)
public: virtual void __thiscall Graphics::DXAviTexture::LoadToStep(int)
public: virtual void __thiscall Graphics::DXAviTexture::SetPhase(float)
public: virtual void __thiscall Graphics::DXAviTexture::SetResolution(int,int)
public: virtual void __thiscall Graphics::DXAviTexture::setCurrFrame(int)
protected: void __thiscall Graphics::DXAviTexture::PaintFrame(void)
const Graphics::DXAviTexture::`vftable'{for `Graphics::DXTexture'}
const Graphics::DXAviTexture::`vftable'{for `Graphics::VideoTexture'}
};

class DXBrushedMaterial
{
public: __thiscall Graphics::DXBrushedMaterial::DXBrushedMaterial(class Graphics::DXBrushedMaterial const &)
public: __thiscall Graphics::DXBrushedMaterial::DXBrushedMaterial(void)
public: virtual __thiscall Graphics::DXBrushedMaterial::~DXBrushedMaterial(void)
public: class Graphics::DXBrushedMaterial & __thiscall Graphics::DXBrushedMaterial::operator=(class Graphics::DXBrushedMaterial const &)
public: virtual int __thiscall Graphics::DXBrushedMaterial::GetLoadStep(void)
public: virtual int __thiscall Graphics::DXBrushedMaterial::GetLoadStepCount(void)
public: virtual void __thiscall Graphics::DXBrushedMaterial::FreeToStep(int)
public: virtual void __thiscall Graphics::DXBrushedMaterial::LoadToStep(int)
const Graphics::DXBrushedMaterial::`vftable'
};

class DXClipTexture
{
public: __thiscall Graphics::DXClipTexture::DXClipTexture(class Graphics::DXClipTexture const &)
public: __thiscall Graphics::DXClipTexture::DXClipTexture(void)
public: virtual __thiscall Graphics::DXClipTexture::~DXClipTexture(void)
public: class Graphics::DXClipTexture & __thiscall Graphics::DXClipTexture::operator=(class Graphics::DXClipTexture const &)
public: static class Resource * __cdecl Graphics::DXClipTexture::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall Graphics::DXClipTexture::LoadToStep(int)
private: void __thiscall Graphics::DXClipTexture::Update(void)
const Graphics::DXClipTexture::`vftable'
};

class DXCubeTexture
{
public: __thiscall Graphics::DXCubeTexture::DXCubeTexture(class Graphics::DXCubeTexture const &)
public: __thiscall Graphics::DXCubeTexture::DXCubeTexture(void)
public: virtual __thiscall Graphics::DXCubeTexture::~DXCubeTexture(void)
public: class Graphics::DXCubeTexture & __thiscall Graphics::DXCubeTexture::operator=(class Graphics::DXCubeTexture const &)
public: static class Resource * __cdecl Graphics::DXCubeTexture::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::DXCubeTexture::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::DXCubeTexture::HaveAlpha(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DXCubeTexture::ClassName(void)
public: virtual struct IDirect3DSurface8 * __thiscall Graphics::DXCubeTexture::GetFace(enum _D3DCUBEMAP_FACES,unsigned int)
public: virtual enum _D3DFORMAT __thiscall Graphics::DXCubeTexture::GetFormat(void)
public: virtual float __thiscall Graphics::DXCubeTexture::GetLoadPriority(void)
public: virtual int __thiscall Graphics::DXCubeTexture::GetLoadStep(void)
public: virtual int __thiscall Graphics::DXCubeTexture::GetLoadStepCount(void)
public: virtual struct IDirect3DBaseTexture8 * __thiscall Graphics::DXCubeTexture::GetHandle(void)
public: virtual struct IDirect3DSurface8 * __thiscall Graphics::DXCubeTexture::GetSurface(unsigned int)
public: virtual unsigned int __thiscall Graphics::DXCubeTexture::GetMipLevels(void)
public: virtual unsigned int __thiscall Graphics::DXCubeTexture::GetSize(void)
public: virtual unsigned int __thiscall Graphics::DXCubeTexture::ReleaseSurface(struct IDirect3DSurface8 *)
public: virtual unsigned long __thiscall Graphics::DXCubeTexture::GetCreationFlags(void)
public: virtual void __thiscall Graphics::DXCubeTexture::FreeToStep(int)
public: virtual void __thiscall Graphics::DXCubeTexture::GetResolution(int &,int &)
public: virtual void __thiscall Graphics::DXCubeTexture::LoadToStep(int)
public: virtual void __thiscall Graphics::DXCubeTexture::SetCreationParams(unsigned int,unsigned int,unsigned long,enum _D3DFORMAT)
public: virtual void __thiscall Graphics::DXCubeTexture::SetResolution(int,int)
const Graphics::DXCubeTexture::`vftable'
};

class DXDefMaterial
{
public: __thiscall Graphics::DXDefMaterial::DXDefMaterial(class Graphics::DXDefMaterial const &)
public: __thiscall Graphics::DXDefMaterial::DXDefMaterial(void)
public: virtual __thiscall Graphics::DXDefMaterial::~DXDefMaterial(void)
public: class Graphics::DXDefMaterial & __thiscall Graphics::DXDefMaterial::operator=(class Graphics::DXDefMaterial const &)
public: static class Resource * __cdecl Graphics::DXDefMaterial::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual __int64 __thiscall Graphics::DXDefMaterial::GetMaterialCaps(void)
public: virtual bool __thiscall Graphics::DXDefMaterial::AllowProjLights(void)
public: virtual bool __thiscall Graphics::DXDefMaterial::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual class Graphics::CustomMaterial * __thiscall Graphics::DXDefMaterial::QueryCustomMaterial(void)
public: virtual class Graphics::DXTexture * __thiscall Graphics::DXDefMaterial::GetMainDiffuseMap(void)
public: virtual class Graphics::Texture * __thiscall Graphics::DXDefMaterial::GetTexture(int)
public: virtual class Vector3 * __thiscall Graphics::DXDefMaterial::GetMainDiffuseColor(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DXDefMaterial::ClassName(void)
public: virtual float __thiscall Graphics::DXDefMaterial::GetLoadPriority(void)
public: virtual int __thiscall Graphics::DXDefMaterial::GetLoadStep(void)
public: virtual int __thiscall Graphics::DXDefMaterial::GetLoadStepCount(void)
public: virtual unsigned int __thiscall Graphics::DXDefMaterial::GetKey(void)
public: virtual int __thiscall Graphics::DXDefMaterial::GetTextureCount(void)
public: virtual int __thiscall Graphics::DXDefMaterial::GetTypeMaterial(void)
public: virtual void __thiscall Graphics::DXDefMaterial::DrawGeometry(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::DXDefMaterial::FinishDrawMaterial(void)
public: virtual void __thiscall Graphics::DXDefMaterial::FreeToStep(int)
public: virtual void __thiscall Graphics::DXDefMaterial::InitDrawMaterial(void)
public: virtual void __thiscall Graphics::DXDefMaterial::LoadToStep(int)
public: virtual void __thiscall Graphics::DXDefMaterial::LoadWithDependents(int)
public: virtual void __thiscall Graphics::DXDefMaterial::SetAmbientColor(class Vector3 const &)
public: virtual void __thiscall Graphics::DXDefMaterial::SetDiffuseColor(class Vector3 const &)
public: virtual void __thiscall Graphics::DXDefMaterial::SetDiffuseMap(int,class Graphics::Texture *)
public: virtual void __thiscall Graphics::DXDefMaterial::SetGlossiness(float)
public: virtual void __thiscall Graphics::DXDefMaterial::SetOpacity(float)
public: virtual void __thiscall Graphics::DXDefMaterial::SetSpecularColor(class Vector3 const &)
public: virtual void __thiscall Graphics::DXDefMaterial::serialize(class EagleDynamics::Common::Serializer &)
protected: virtual void __thiscall Graphics::DXDefMaterial::FillDXMat(void)
protected: virtual void __thiscall Graphics::DXDefMaterial::FillFlags(void)
public: void __thiscall Graphics::DXDefMaterial::`vbase destructor'(void)
const Graphics::DXDefMaterial::`vbtable'
const Graphics::DXDefMaterial::`vftable'{for `Graphics::CustomMaterial'}
const Graphics::DXDefMaterial::`vftable'{for `Graphics::DXBrushedMaterial'}
};

class DXDefMaterial_Shad
{
public: __thiscall Graphics::DXDefMaterial_Shad::DXDefMaterial_Shad(class Graphics::DXDefMaterial_Shad const &)
public: __thiscall Graphics::DXDefMaterial_Shad::DXDefMaterial_Shad(void)
public: virtual __thiscall Graphics::DXDefMaterial_Shad::~DXDefMaterial_Shad(void)
public: class Graphics::DXDefMaterial_Shad & __thiscall Graphics::DXDefMaterial_Shad::operator=(class Graphics::DXDefMaterial_Shad const &)
public: static class Resource * __cdecl Graphics::DXDefMaterial_Shad::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual __int64 __thiscall Graphics::DXDefMaterial_Shad::GetMaterialCaps(void)
public: virtual bool __thiscall Graphics::DXDefMaterial_Shad::AllowProjLights(void)
public: virtual bool __thiscall Graphics::DXDefMaterial_Shad::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual class Graphics::CustomMaterial * __thiscall Graphics::DXDefMaterial_Shad::QueryCustomMaterial(void)
public: virtual class Graphics::DXTexture * __thiscall Graphics::DXDefMaterial_Shad::GetMainDiffuseMap(void)
public: virtual class Graphics::Texture * __thiscall Graphics::DXDefMaterial_Shad::GetTexture(int)
public: virtual class Vector3 * __thiscall Graphics::DXDefMaterial_Shad::GetMainDiffuseColor(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DXDefMaterial_Shad::ClassName(void)
public: virtual float __thiscall Graphics::DXDefMaterial_Shad::GetLoadPriority(void)
public: virtual int __thiscall Graphics::DXDefMaterial_Shad::GetLoadStep(void)
public: virtual int __thiscall Graphics::DXDefMaterial_Shad::GetLoadStepCount(void)
public: virtual int __thiscall Graphics::DXDefMaterial_Shad::GetTextureCount(void)
public: virtual unsigned int __thiscall Graphics::DXDefMaterial_Shad::GetKey(void)
public: virtual void __thiscall Graphics::DXDefMaterial_Shad::DrawGeometry(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::DXDefMaterial_Shad::DrawRadeon(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::DXDefMaterial_Shad::FreeToStep(int)
public: virtual void __thiscall Graphics::DXDefMaterial_Shad::LoadToStep(int)
public: virtual void __thiscall Graphics::DXDefMaterial_Shad::LoadWithDependents(int)
public: virtual void __thiscall Graphics::DXDefMaterial_Shad::SetAmbientColor(class Vector3 const &)
public: virtual void __thiscall Graphics::DXDefMaterial_Shad::SetDiffuseColor(class Vector3 const &)
public: virtual void __thiscall Graphics::DXDefMaterial_Shad::SetDiffuseMap(int,class Graphics::Texture *)
public: virtual void __thiscall Graphics::DXDefMaterial_Shad::SetGlossiness(float)
public: virtual void __thiscall Graphics::DXDefMaterial_Shad::SetOpacity(float)
public: virtual void __thiscall Graphics::DXDefMaterial_Shad::SetSpecularColor(class Vector3 const &)
public: virtual void __thiscall Graphics::DXDefMaterial_Shad::serialize(class EagleDynamics::Common::Serializer &)
protected: virtual void __thiscall Graphics::DXDefMaterial_Shad::FillDXMat(void)
protected: virtual void __thiscall Graphics::DXDefMaterial_Shad::FillFlags(void)
public: void __thiscall Graphics::DXDefMaterial_Shad::`vbase destructor'(void)
const Graphics::DXDefMaterial_Shad::`vbtable'
const Graphics::DXDefMaterial_Shad::`vftable'{for `Graphics::CustomMaterial'}
const Graphics::DXDefMaterial_Shad::`vftable'{for `Graphics::DXBrushedMaterial'}
};

class DXDefTexture
{
public: __thiscall Graphics::DXDefTexture::DXDefTexture(class Graphics::DXDefTexture const &)
public: __thiscall Graphics::DXDefTexture::DXDefTexture(void)
public: virtual __thiscall Graphics::DXDefTexture::~DXDefTexture(void)
public: class Graphics::DXDefTexture & __thiscall Graphics::DXDefTexture::operator=(class Graphics::DXDefTexture const &)
public: static class Resource * __cdecl Graphics::DXDefTexture::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::DXDefTexture::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::DXDefTexture::HaveAlpha(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DXDefTexture::ClassName(void)
public: virtual float __thiscall Graphics::DXDefTexture::GetLoadPriority(void)
public: virtual int __thiscall Graphics::DXDefTexture::GetLoadStep(void)
public: virtual int __thiscall Graphics::DXDefTexture::GetLoadStepCount(void)
public: virtual struct IDirect3DBaseTexture8 * __thiscall Graphics::DXDefTexture::GetHandle(void)
public: virtual struct IDirect3DSurface8 * __thiscall Graphics::DXDefTexture::GetSurface(unsigned int)
public: virtual unsigned int __thiscall Graphics::DXDefTexture::ReleaseSurface(struct IDirect3DSurface8 *)
public: virtual void __thiscall Graphics::DXDefTexture::FreeToStep(int)
public: virtual void __thiscall Graphics::DXDefTexture::GetResolution(int &,int &)
public: virtual void __thiscall Graphics::DXDefTexture::LoadToStep(int)
public: virtual void __thiscall Graphics::DXDefTexture::SetResolution(int,int)
public: virtual void __thiscall Graphics::DXDefTexture::serialize(class EagleDynamics::Common::Serializer &)
const Graphics::DXDefTexture::`vftable'
};

class DXFadeOutMaterial
{
public: __thiscall Graphics::DXFadeOutMaterial::DXFadeOutMaterial(class Graphics::DXFadeOutMaterial const &)
public: __thiscall Graphics::DXFadeOutMaterial::DXFadeOutMaterial(void)
public: virtual __thiscall Graphics::DXFadeOutMaterial::~DXFadeOutMaterial(void)
public: class Graphics::DXFadeOutMaterial & __thiscall Graphics::DXFadeOutMaterial::operator=(class Graphics::DXFadeOutMaterial const &)
public: static class Resource * __cdecl Graphics::DXFadeOutMaterial::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual __int64 __thiscall Graphics::DXFadeOutMaterial::GetMaterialCaps(void)
public: virtual bool __thiscall Graphics::DXFadeOutMaterial::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual class Graphics::CustomMaterial * __thiscall Graphics::DXFadeOutMaterial::QueryCustomMaterial(void)
public: virtual class Graphics::DXTexture * __thiscall Graphics::DXFadeOutMaterial::GetMainDiffuseMap(void)
public: virtual class Graphics::Texture * __thiscall Graphics::DXFadeOutMaterial::GetTexture(int)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DXFadeOutMaterial::ClassName(void)
public: virtual float __thiscall Graphics::DXFadeOutMaterial::GetLoadPriority(void)
public: virtual int __thiscall Graphics::DXFadeOutMaterial::GetLoadStep(void)
public: virtual int __thiscall Graphics::DXFadeOutMaterial::GetLoadStepCount(void)
public: virtual int __thiscall Graphics::DXFadeOutMaterial::GetTextureCount(void)
public: virtual unsigned int __thiscall Graphics::DXFadeOutMaterial::GetKey(void)
public: virtual void __thiscall Graphics::DXFadeOutMaterial::DrawGeometry(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::DXFadeOutMaterial::FreeToStep(int)
public: virtual void __thiscall Graphics::DXFadeOutMaterial::LoadToStep(int)
public: virtual void __thiscall Graphics::DXFadeOutMaterial::LoadWithDependents(int)
public: virtual void __thiscall Graphics::DXFadeOutMaterial::SetAmbientColor(class Vector3 const &)
public: virtual void __thiscall Graphics::DXFadeOutMaterial::SetDiffuseColor(class Vector3 const &)
public: virtual void __thiscall Graphics::DXFadeOutMaterial::SetDiffuseMap(int,class Graphics::Texture *)
public: virtual void __thiscall Graphics::DXFadeOutMaterial::SetGlossiness(float)
public: virtual void __thiscall Graphics::DXFadeOutMaterial::SetOpacity(float)
public: virtual void __thiscall Graphics::DXFadeOutMaterial::SetSpecularColor(class Vector3 const &)
public: virtual void __thiscall Graphics::DXFadeOutMaterial::serialize(class EagleDynamics::Common::Serializer &)
protected: static struct _D3DMATERIAL8 Graphics::DXFadeOutMaterial::DXWhiteMaterial
protected: void __thiscall Graphics::DXFadeOutMaterial::FillDXMat(void)
public: void __thiscall Graphics::DXFadeOutMaterial::`vbase destructor'(void)
const Graphics::DXFadeOutMaterial::`vbtable'
const Graphics::DXFadeOutMaterial::`vftable'{for `Graphics::CustomMaterial'}
const Graphics::DXFadeOutMaterial::`vftable'{for `Graphics::DXBrushedMaterial'}
};

class DXFastMesh
{
public: __thiscall Graphics::DXFastMesh::DXFastMesh(class Graphics::DXFastMesh const &)
public: __thiscall Graphics::DXFastMesh::DXFastMesh(void)
public: virtual __thiscall Graphics::DXFastMesh::~DXFastMesh(void)
public: class Graphics::DXFastMesh & __thiscall Graphics::DXFastMesh::operator=(class Graphics::DXFastMesh const &)
public: static class Resource * __cdecl Graphics::DXFastMesh::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::DXFastMesh::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::DXFastMesh::IntersectSegment(class Vector3 const &,class Vector3 const &,class HeapVector<struct Graphics::DynamicParam> const &,float *,class Vector3 *)
public: virtual class Box const & __thiscall Graphics::DXFastMesh::GetBoundingBox(void)
public: virtual class Graphics::CustomGeometry * __thiscall Graphics::DXFastMesh::QueryCustomGeometry(void)
public: virtual class Vector3 const & __thiscall Graphics::DXFastMesh::GetCenter(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall Graphics::DXFastMesh::GetDebugString(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DXFastMesh::ClassName(void)
public: virtual float __thiscall Graphics::DXFastMesh::GetLoadPriority(void)
public: virtual float __thiscall Graphics::DXFastMesh::GetRadius(void)
public: virtual int __thiscall Graphics::DXFastMesh::GetLoadStep(void)
public: virtual int __thiscall Graphics::DXFastMesh::GetLoadStepCount(void)
public: virtual unsigned int __thiscall Graphics::DXFastMesh::GetKey(void)
public: virtual unsigned int __thiscall Graphics::DXFastMesh::GetPolygonCount(void)
public: virtual void __thiscall Graphics::DXFastMesh::DrawGeometry(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::DXFastMesh::FreeToStep(int)
public: virtual void __thiscall Graphics::DXFastMesh::LoadData(void *,unsigned int,class Graphics::ModelHeader *)
public: virtual void __thiscall Graphics::DXFastMesh::LoadToStep(int)
public: virtual void __thiscall Graphics::DXFastMesh::serialize(class EagleDynamics::Common::Serializer &)
protected: virtual bool __thiscall Graphics::DXFastMesh::HasAlpha(void)
protected: virtual bool __thiscall Graphics::DXFastMesh::IsScreenSpace(void)
protected: virtual class std::vector<class Graphics::Color,class std::allocator<class Graphics::Color> > const & __thiscall Graphics::DXFastMesh::GetColors(void)
protected: virtual class std::vector<class Vector3,class std::allocator<class Vector3> > const & __thiscall Graphics::DXFastMesh::GetNormals(void)
protected: virtual class std::vector<class Vector3,class std::allocator<class Vector3> > const & __thiscall Graphics::DXFastMesh::GetTexCoords(int)
protected: virtual class std::vector<class Vector3,class std::allocator<class Vector3> > const & __thiscall Graphics::DXFastMesh::GetVertices(void)
protected: virtual class std::vector<unsigned short,class std::allocator<unsigned short> > const & __thiscall Graphics::DXFastMesh::GetIndices(void)
protected: virtual enum Graphics::PrimitiveType __thiscall Graphics::DXFastMesh::GetPrimitiveType(void)
protected: virtual void __thiscall Graphics::DXFastMesh::SetColors(class std::vector<class Graphics::Color,class std::allocator<class Graphics::Color> > const &)
protected: virtual void __thiscall Graphics::DXFastMesh::SetIndices(class std::vector<unsigned short,class std::allocator<unsigned short> > const &)
protected: virtual void __thiscall Graphics::DXFastMesh::SetNormals(class std::vector<class Vector3,class std::allocator<class Vector3> > const &)
protected: virtual void __thiscall Graphics::DXFastMesh::SetPrimitiveType(enum Graphics::PrimitiveType)
protected: virtual void __thiscall Graphics::DXFastMesh::SetScreenSpace(bool)
protected: virtual void __thiscall Graphics::DXFastMesh::SetTexCoords(class std::vector<class Vector3,class std::allocator<class Vector3> > const &,int)
protected: virtual void __thiscall Graphics::DXFastMesh::SetVertices(class std::vector<class Vector3,class std::allocator<class Vector3> > const &)
protected: void __thiscall Graphics::DXFastMesh::CalcBoundSphere(void)
protected: void __thiscall Graphics::DXFastMesh::FreeCustomGeometry(void)
protected: void __thiscall Graphics::DXFastMesh::FreeIndices(void)
protected: void __thiscall Graphics::DXFastMesh::FreeVertices(void)
protected: void __thiscall Graphics::DXFastMesh::LoadCustomGeometry(void)
const Graphics::DXFastMesh::`vftable'{for `Graphics::CustomGeometry'}
const Graphics::DXFastMesh::`vftable'{for `Graphics::DXGeometry'}
};

class DXFixedMesh
{
	class FixedVertex
	{
	public: __thiscall Graphics::DXFixedMesh::FixedVertex::FixedVertex(void)
	public: static unsigned long const Graphics::DXFixedMesh::FixedVertex::fxFVF
	public: struct Graphics::DXFixedMesh::FixedVertex & __thiscall Graphics::DXFixedMesh::FixedVertex::operator=(struct Graphics::DXFixedMesh::FixedVertex const &)
	public: void __thiscall Graphics::DXFixedMesh::FixedVertex::Set(class Vector3,unsigned long,float,float)
	};

public: __thiscall Graphics::DXFixedMesh::DXFixedMesh(class Graphics::DXFixedMesh const &)
public: __thiscall Graphics::DXFixedMesh::DXFixedMesh(void)
public: class Graphics::DXFixedMesh & __thiscall Graphics::DXFixedMesh::operator=(class Graphics::DXFixedMesh const &)
public: virtual __thiscall Graphics::DXFixedMesh::~DXFixedMesh(void)
public: static class Resource * __cdecl Graphics::DXFixedMesh::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::DXFixedMesh::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::DXFixedMesh::IntersectSegment(class Vector3 const &,class Vector3 const &,class HeapVector<struct Graphics::DynamicParam> const &,float *,class Vector3 *)
public: virtual class Box const & __thiscall Graphics::DXFixedMesh::GetBoundingBox(void)
public: virtual class Graphics::CustomGeometry * __thiscall Graphics::DXFixedMesh::QueryCustomGeometry(void)
public: virtual class Vector3 const & __thiscall Graphics::DXFixedMesh::GetCenter(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall Graphics::DXFixedMesh::GetDebugString(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DXFixedMesh::ClassName(void)
public: virtual float __thiscall Graphics::DXFixedMesh::GetLoadPriority(void)
public: virtual float __thiscall Graphics::DXFixedMesh::GetRadius(void)
public: virtual int __thiscall Graphics::DXFixedMesh::GetLoadStep(void)
public: virtual int __thiscall Graphics::DXFixedMesh::GetLoadStepCount(void)
public: virtual unsigned int __thiscall Graphics::DXFixedMesh::GetKey(void)
public: virtual unsigned int __thiscall Graphics::DXFixedMesh::GetPolygonCount(void)
public: virtual void __thiscall Graphics::DXFixedMesh::DrawGeometry(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::DXFixedMesh::FreeToStep(int)
public: virtual void __thiscall Graphics::DXFixedMesh::LoadData(void *,unsigned int,class Graphics::ModelHeader *)
public: virtual void __thiscall Graphics::DXFixedMesh::LoadToStep(int)
public: virtual void __thiscall Graphics::DXFixedMesh::serialize(class EagleDynamics::Common::Serializer &)
protected: virtual bool __thiscall Graphics::DXFixedMesh::HasAlpha(void)
protected: virtual bool __thiscall Graphics::DXFixedMesh::IsScreenSpace(void)
protected: virtual class std::vector<class Graphics::Color,class std::allocator<class Graphics::Color> > const & __thiscall Graphics::DXFixedMesh::GetColors(void)
protected: virtual class std::vector<class Vector3,class std::allocator<class Vector3> > const & __thiscall Graphics::DXFixedMesh::GetNormals(void)
protected: virtual class std::vector<class Vector3,class std::allocator<class Vector3> > const & __thiscall Graphics::DXFixedMesh::GetTexCoords(int)
protected: virtual class std::vector<class Vector3,class std::allocator<class Vector3> > const & __thiscall Graphics::DXFixedMesh::GetVertices(void)
protected: virtual class std::vector<unsigned short,class std::allocator<unsigned short> > const & __thiscall Graphics::DXFixedMesh::GetIndices(void)
protected: virtual enum Graphics::PrimitiveType __thiscall Graphics::DXFixedMesh::GetPrimitiveType(void)
protected: virtual void __thiscall Graphics::DXFixedMesh::SetColors(class std::vector<class Graphics::Color,class std::allocator<class Graphics::Color> > const &)
protected: virtual void __thiscall Graphics::DXFixedMesh::SetIndices(class std::vector<unsigned short,class std::allocator<unsigned short> > const &)
protected: virtual void __thiscall Graphics::DXFixedMesh::SetNormals(class std::vector<class Vector3,class std::allocator<class Vector3> > const &)
protected: virtual void __thiscall Graphics::DXFixedMesh::SetPrimitiveType(enum Graphics::PrimitiveType)
protected: virtual void __thiscall Graphics::DXFixedMesh::SetScreenSpace(bool)
protected: virtual void __thiscall Graphics::DXFixedMesh::SetTexCoords(class std::vector<class Vector3,class std::allocator<class Vector3> > const &,int)
protected: virtual void __thiscall Graphics::DXFixedMesh::SetVertices(class std::vector<class Vector3,class std::allocator<class Vector3> > const &)
protected: void __thiscall Graphics::DXFixedMesh::CalcBoundSphere(void)
const Graphics::DXFixedMesh::`vftable'{for `Graphics::CustomGeometry'}
const Graphics::DXFixedMesh::`vftable'{for `Graphics::DXGeometry'}
};

class DXFlatMaterial
{
public: __thiscall Graphics::DXFlatMaterial::DXFlatMaterial(class Graphics::DXFlatMaterial const &)
public: __thiscall Graphics::DXFlatMaterial::DXFlatMaterial(void)
public: virtual __thiscall Graphics::DXFlatMaterial::~DXFlatMaterial(void)
public: class Graphics::DXFlatMaterial & __thiscall Graphics::DXFlatMaterial::operator=(class Graphics::DXFlatMaterial const &)
public: static class Resource * __cdecl Graphics::DXFlatMaterial::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual __int64 __thiscall Graphics::DXFlatMaterial::GetMaterialCaps(void)
public: virtual bool __thiscall Graphics::DXFlatMaterial::GetTwoSided(void)
public: virtual bool __thiscall Graphics::DXFlatMaterial::IsTransparent(void)
public: virtual class Graphics::CustomMaterial * __thiscall Graphics::DXFlatMaterial::QueryCustomMaterial(void)
public: virtual class Graphics::Texture * __thiscall Graphics::DXFlatMaterial::GetTexture(int)
public: virtual class Vector3 const & __thiscall Graphics::DXFlatMaterial::GetDiffuseColor(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DXFlatMaterial::ClassName(void)
public: virtual int __thiscall Graphics::DXFlatMaterial::GetTextureCount(void)
public: virtual unsigned int __thiscall Graphics::DXFlatMaterial::GetKey(void)
public: virtual void __thiscall Graphics::DXFlatMaterial::DrawGeometry(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::DXFlatMaterial::SetDiffuseColor(class Vector3 const &)
public: virtual void __thiscall Graphics::DXFlatMaterial::serialize(class EagleDynamics::Common::Serializer &)
const Graphics::DXFlatMaterial::`vftable'{for `Graphics::CustomMaterial'}
const Graphics::DXFlatMaterial::`vftable'{for `Graphics::DXMaterial'}
};

class DXFont
{
	class FontTC
	{
	public: __thiscall Graphics::DXFont::FontTC::FontTC(struct Graphics::DXFont::FontTC const &)
	public: __thiscall Graphics::DXFont::FontTC::FontTC(void)
	public: struct Graphics::DXFont::FontTC & __thiscall Graphics::DXFont::FontTC::operator=(struct Graphics::DXFont::FontTC const &)
	};

	class FontVertex
	{
	public: __thiscall Graphics::DXFont::FontVertex::FontVertex(void)
	public: struct Graphics::DXFont::FontVertex & __thiscall Graphics::DXFont::FontVertex::operator=(struct Graphics::DXFont::FontVertex const &)
	public: void __thiscall Graphics::DXFont::FontVertex::Set(float,float,unsigned long,float,float)
	};

	class WsFontVertex
	{
	public: __thiscall Graphics::DXFont::WsFontVertex::WsFontVertex(void)
	public: struct Graphics::DXFont::WsFontVertex & __thiscall Graphics::DXFont::WsFontVertex::operator=(struct Graphics::DXFont::WsFontVertex const &)
	public: void __thiscall Graphics::DXFont::WsFontVertex::Set(float,float,float,unsigned long,float,float)
	};

public: __thiscall Graphics::DXFont::DXFont(class Graphics::DXFont const &)
public: __thiscall Graphics::DXFont::DXFont(void)
public: virtual __thiscall Graphics::DXFont::~DXFont(void)
public: class Graphics::DXFont & __thiscall Graphics::DXFont::operator=(class Graphics::DXFont const &)
public: static class Resource * __cdecl Graphics::DXFont::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: static void __cdecl Graphics::DXFont::SetFontStates(void)
public: virtual bool __thiscall Graphics::DXFont::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DXFont::ClassName(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DXFont::GetFontName(void)
public: virtual float __thiscall Graphics::DXFont::GetLoadPriority(void)
public: virtual float __thiscall Graphics::DXFont::GetSize(void)
public: virtual int __thiscall Graphics::DXFont::GetLoadStep(void)
public: virtual int __thiscall Graphics::DXFont::GetLoadStepCount(void)
public: virtual unsigned int __thiscall Graphics::DXFont::GetFlags(void)
public: virtual void __thiscall Graphics::DXFont::DrawRenderText(class Graphics::RenderText *)
public: virtual void __thiscall Graphics::DXFont::FreeToStep(int)
public: virtual void __thiscall Graphics::DXFont::GetTextExtent(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class Vector3 &)
public: virtual void __thiscall Graphics::DXFont::LoadToStep(int)
public: virtual void __thiscall Graphics::DXFont::SetFlags(unsigned int)
public: virtual void __thiscall Graphics::DXFont::SetFontName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall Graphics::DXFont::SetSize(float)
public: virtual void __thiscall Graphics::DXFont::serialize(class EagleDynamics::Common::Serializer &)
protected: virtual bool __thiscall Graphics::DXFont::MakeStrings(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
protected: virtual float __thiscall Graphics::DXFont::DrawStringWs(float,float,float,float,struct Graphics::DXFont::Box2f const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class Graphics::Color const &,struct Graphics::DXFont::WsFontVertex *,unsigned short *,int &,int &)
protected: virtual int __thiscall Graphics::DXFont::DrawString(int,int,struct tagPOINT const &,struct tagRECT const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class Graphics::Color const &,struct Graphics::DXFont::FontVertex *,unsigned short *,int &,int &)
protected: virtual struct tagPOINT __thiscall Graphics::DXFont::GetCharSize(unsigned int)
protected: virtual void __thiscall Graphics::DXFont::CheckFontType(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &)
protected: virtual void __thiscall Graphics::DXFont::CreateFontData(void)
protected: virtual void __thiscall Graphics::DXFont::CreateOldFontData(void)
protected: virtual void __thiscall Graphics::DXFont::DrawInWorldSpace(class Graphics::RenderText *)
protected: virtual void __thiscall Graphics::DXFont::TransformTextPos(class Box &,class Vector3 &,class Graphics::RenderText *)
protected: void __thiscall Graphics::DXFont::DrawAllFont(void)
const Graphics::DXFont::`vftable'

public: static unsigned long const Graphics::DXFont::FVF
public: static unsigned long const Graphics::DXFont::wsFVF
};

class DXFontTexture
{
public: __thiscall Graphics::DXFontTexture::DXFontTexture(class Graphics::DXFontTexture const &)
public: __thiscall Graphics::DXFontTexture::DXFontTexture(void)
public: virtual __thiscall Graphics::DXFontTexture::~DXFontTexture(void)
public: class Graphics::DXFontTexture & __thiscall Graphics::DXFontTexture::operator=(class Graphics::DXFontTexture const &)
public: enum _D3DFORMAT __thiscall Graphics::DXFontTexture::GetTexFormat(void)
public: static class Resource * __cdecl Graphics::DXFontTexture::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::DXFontTexture::HaveAlpha(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DXFontTexture::ClassName(void)
public: virtual float __thiscall Graphics::DXFontTexture::GetLoadPriority(void)
public: virtual int __thiscall Graphics::DXFontTexture::GetLoadStep(void)
public: virtual int __thiscall Graphics::DXFontTexture::GetLoadStepCount(void)
public: virtual struct IDirect3DBaseTexture8 * __thiscall Graphics::DXFontTexture::GetHandle(void)
public: virtual struct IDirect3DSurface8 * __thiscall Graphics::DXFontTexture::GetSurface(unsigned int)
public: virtual unsigned int __thiscall Graphics::DXFontTexture::ReleaseSurface(struct IDirect3DSurface8 *)
public: virtual void __thiscall Graphics::DXFontTexture::FreeToStep(int)
public: virtual void __thiscall Graphics::DXFontTexture::GetResolution(int &,int &)
public: virtual void __thiscall Graphics::DXFontTexture::LoadToStep(int)
public: virtual void __thiscall Graphics::DXFontTexture::SetResolution(int,int)
public: virtual void __thiscall Graphics::DXFontTexture::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall Graphics::DXFontTexture::SetFileName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall Graphics::DXFontTexture::SetFormat(enum _D3DFORMAT)
const Graphics::DXFontTexture::`vftable'
};

class DXGeometry
{
public: __thiscall Graphics::DXGeometry::DXGeometry(class Graphics::DXGeometry const &)
public: __thiscall Graphics::DXGeometry::DXGeometry(void)
public: virtual __thiscall Graphics::DXGeometry::~DXGeometry(void)
public: class Graphics::DXGeometry & __thiscall Graphics::DXGeometry::operator=(class Graphics::DXGeometry const &)
public: unsigned long __thiscall Graphics::DXGeometry::GetFVF(void)
public: virtual enum Graphics::DXGeometry::Specs __thiscall Graphics::DXGeometry::GetSpecs(void)
const Graphics::DXGeometry::`vftable'
};

class DXMaterial
{
public: __thiscall Graphics::DXMaterial::DXMaterial(class Graphics::DXMaterial const &)
public: __thiscall Graphics::DXMaterial::DXMaterial(void)
public: virtual __thiscall Graphics::DXMaterial::~DXMaterial(void)
public: class Graphics::DXMaterial & __thiscall Graphics::DXMaterial::operator=(class Graphics::DXMaterial const &)
public: virtual bool __thiscall Graphics::DXMaterial::AllowProjLights(void)
public: virtual class Graphics::DXTexture * __thiscall Graphics::DXMaterial::GetMainDiffuseMap(void)
public: virtual class Vector3 * __thiscall Graphics::DXMaterial::GetMainDiffuseColor(void)
const Graphics::DXMaterial::`vftable'
};

class DXMesh
{
	class ScreenVertex
	{
	public: struct Graphics::DXMesh::ScreenVertex & __thiscall Graphics::DXMesh::ScreenVertex::operator=(struct Graphics::DXMesh::ScreenVertex const &)
	public: __thiscall Graphics::DXMesh::ScreenVertex::ScreenVertex(void)
	public: static unsigned long const Graphics::DXMesh::ScreenVertex::svFVF
	public: void __thiscall Graphics::DXMesh::ScreenVertex::Set(float,float,unsigned long,float,float)
	};

public: __thiscall Graphics::DXMesh::DXMesh(class Graphics::DXMesh const &)
public: __thiscall Graphics::DXMesh::DXMesh(void)
public: virtual __thiscall Graphics::DXMesh::~DXMesh(void)
public: class Graphics::DXMesh & __thiscall Graphics::DXMesh::operator=(class Graphics::DXMesh const &)
public: void __thiscall Graphics::DXMesh::CopyIndexBuffer(void *,int)
public: void __thiscall Graphics::DXMesh::CopyVertexBuffer(void *,class Position3 const *)
public: enum _D3DPRIMITIVETYPE __thiscall Graphics::DXMesh::GetD3DPrimType(void)
public: int __thiscall Graphics::DXMesh::GetIndexCount(void)
public: int __thiscall Graphics::DXMesh::GetVertexCount(void)
public: static class Resource * __cdecl Graphics::DXMesh::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: unsigned long __thiscall Graphics::DXMesh::LoadXFile(char const *,unsigned long,unsigned long,struct IDirect3DDevice8 *,int,int,int,struct ID3DXMesh * *)
public: virtual bool __thiscall Graphics::DXMesh::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::DXMesh::IntersectSegment(class Vector3 const &,class Vector3 const &,class HeapVector<struct Graphics::DynamicParam> const &,float *,class Vector3 *)
public: virtual class Box const & __thiscall Graphics::DXMesh::GetBoundingBox(void)
public: virtual class Graphics::CustomGeometry * __thiscall Graphics::DXMesh::QueryCustomGeometry(void)
public: virtual class Vector3 const & __thiscall Graphics::DXMesh::GetCenter(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall Graphics::DXMesh::GetDebugString(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DXMesh::ClassName(void)
public: virtual float __thiscall Graphics::DXMesh::GetLoadPriority(void)
public: virtual float __thiscall Graphics::DXMesh::GetRadius(void)
public: virtual int __thiscall Graphics::DXMesh::GetLoadStep(void)
public: virtual int __thiscall Graphics::DXMesh::GetLoadStepCount(void)
public: virtual unsigned int __thiscall Graphics::DXMesh::GetKey(void)
public: virtual unsigned int __thiscall Graphics::DXMesh::GetPolygonCount(void)
public: virtual void __thiscall Graphics::DXMesh::DrawGeometry(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::DXMesh::FreeToStep(int)
public: virtual void __thiscall Graphics::DXMesh::LoadData(void *,unsigned int,class Graphics::ModelHeader *)
public: virtual void __thiscall Graphics::DXMesh::LoadToStep(int)
public: virtual void __thiscall Graphics::DXMesh::UsedThisFrame(void)
public: virtual void __thiscall Graphics::DXMesh::serialize(class EagleDynamics::Common::Serializer &)
protected: virtual bool __thiscall Graphics::DXMesh::HasAlpha(void)
protected: virtual bool __thiscall Graphics::DXMesh::IsScreenSpace(void)
protected: virtual class std::vector<class Graphics::Color,class std::allocator<class Graphics::Color> > const & __thiscall Graphics::DXMesh::GetColors(void)
protected: virtual class std::vector<class Vector3,class std::allocator<class Vector3> > const & __thiscall Graphics::DXMesh::GetNormals(void)
protected: virtual class std::vector<class Vector3,class std::allocator<class Vector3> > const & __thiscall Graphics::DXMesh::GetTexCoords(int)
protected: virtual class std::vector<class Vector3,class std::allocator<class Vector3> > const & __thiscall Graphics::DXMesh::GetVertices(void)
protected: virtual class std::vector<unsigned short,class std::allocator<unsigned short> > const & __thiscall Graphics::DXMesh::GetIndices(void)
protected: virtual enum Graphics::PrimitiveType __thiscall Graphics::DXMesh::GetPrimitiveType(void)
protected: virtual void __thiscall Graphics::DXMesh::SetColors(class std::vector<class Graphics::Color,class std::allocator<class Graphics::Color> > const &)
protected: virtual void __thiscall Graphics::DXMesh::SetIndices(class std::vector<unsigned short,class std::allocator<unsigned short> > const &)
protected: virtual void __thiscall Graphics::DXMesh::SetNormals(class std::vector<class Vector3,class std::allocator<class Vector3> > const &)
protected: virtual void __thiscall Graphics::DXMesh::SetPrimitiveType(enum Graphics::PrimitiveType)
protected: virtual void __thiscall Graphics::DXMesh::SetScreenSpace(bool)
protected: virtual void __thiscall Graphics::DXMesh::SetTexCoords(class std::vector<class Vector3,class std::allocator<class Vector3> > const &,int)
protected: virtual void __thiscall Graphics::DXMesh::SetVertices(class std::vector<class Vector3,class std::allocator<class Vector3> > const &)
protected: void __thiscall Graphics::DXMesh::CalcBoundSphere(void)
protected: void __thiscall Graphics::DXMesh::FreeCustomGeometry(void)
protected: void __thiscall Graphics::DXMesh::FreeIndices(void)
protected: void __thiscall Graphics::DXMesh::FreeVertices(void)
protected: void __thiscall Graphics::DXMesh::LoadCustomGeometry(void)
const Graphics::DXMesh::`vftable'{for `Graphics::CustomGeometry'}
const Graphics::DXMesh::`vftable'{for `Graphics::DXGeometry'}
};

class DXMultiTextureMeshGE
{
public: __thiscall Graphics::DXMultiTextureMeshGE::DXMultiTextureMeshGE(class Graphics::DXMultiTextureMeshGE const &)
public: __thiscall Graphics::DXMultiTextureMeshGE::DXMultiTextureMeshGE(void)
public: virtual __thiscall Graphics::DXMultiTextureMeshGE::~DXMultiTextureMeshGE(void)
public: class Graphics::DXMultiTextureMeshGE & __thiscall Graphics::DXMultiTextureMeshGE::operator=(class Graphics::DXMultiTextureMeshGE const &)
public: static class Resource * __cdecl Graphics::DXMultiTextureMeshGE::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::DXMultiTextureMeshGE::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::DXMultiTextureMeshGE::IntersectSegment(class Vector3 const &,class Vector3 const &,class HeapVector<struct Graphics::DynamicParam> const &,float *,class Vector3 *)
public: virtual class Box const & __thiscall Graphics::DXMultiTextureMeshGE::GetBoundingBox(void)
public: virtual class Graphics::CustomGeometry * __thiscall Graphics::DXMultiTextureMeshGE::QueryCustomGeometry(void)
public: virtual class Vector3 const & __thiscall Graphics::DXMultiTextureMeshGE::GetCenter(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall Graphics::DXMultiTextureMeshGE::GetDebugString(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DXMultiTextureMeshGE::ClassName(void)
public: virtual float __thiscall Graphics::DXMultiTextureMeshGE::GetLoadPriority(void)
public: virtual float __thiscall Graphics::DXMultiTextureMeshGE::GetRadius(void)
public: virtual int __thiscall Graphics::DXMultiTextureMeshGE::GetLoadStep(void)
public: virtual int __thiscall Graphics::DXMultiTextureMeshGE::GetLoadStepCount(void)
public: virtual unsigned int __thiscall Graphics::DXMultiTextureMeshGE::GetKey(void)
public: virtual unsigned int __thiscall Graphics::DXMultiTextureMeshGE::GetPolygonCount(void)
public: virtual void __thiscall Graphics::DXMultiTextureMeshGE::DrawGeometry(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::DXMultiTextureMeshGE::FreeToStep(int)
public: virtual void __thiscall Graphics::DXMultiTextureMeshGE::LoadData(void *,unsigned int,class Graphics::ModelHeader *)
public: virtual void __thiscall Graphics::DXMultiTextureMeshGE::LoadToStep(int)
public: virtual void __thiscall Graphics::DXMultiTextureMeshGE::serialize(class EagleDynamics::Common::Serializer &)
protected: virtual bool __thiscall Graphics::DXMultiTextureMeshGE::HasAlpha(void)
protected: virtual bool __thiscall Graphics::DXMultiTextureMeshGE::IsScreenSpace(void)
protected: virtual class std::vector<class Graphics::Color,class std::allocator<class Graphics::Color> > const & __thiscall Graphics::DXMultiTextureMeshGE::GetColors(void)
protected: virtual class std::vector<class Vector3,class std::allocator<class Vector3> > const & __thiscall Graphics::DXMultiTextureMeshGE::GetNormals(void)
protected: virtual class std::vector<class Vector3,class std::allocator<class Vector3> > const & __thiscall Graphics::DXMultiTextureMeshGE::GetTexCoords(int)
protected: virtual class std::vector<class Vector3,class std::allocator<class Vector3> > const & __thiscall Graphics::DXMultiTextureMeshGE::GetVertices(void)
protected: virtual class std::vector<unsigned short,class std::allocator<unsigned short> > const & __thiscall Graphics::DXMultiTextureMeshGE::GetIndices(void)
protected: virtual enum Graphics::PrimitiveType __thiscall Graphics::DXMultiTextureMeshGE::GetPrimitiveType(void)
protected: virtual void __thiscall Graphics::DXMultiTextureMeshGE::SetColors(class std::vector<class Graphics::Color,class std::allocator<class Graphics::Color> > const &)
protected: virtual void __thiscall Graphics::DXMultiTextureMeshGE::SetIndices(class std::vector<unsigned short,class std::allocator<unsigned short> > const &)
protected: virtual void __thiscall Graphics::DXMultiTextureMeshGE::SetNormals(class std::vector<class Vector3,class std::allocator<class Vector3> > const &)
protected: virtual void __thiscall Graphics::DXMultiTextureMeshGE::SetPrimitiveType(enum Graphics::PrimitiveType)
protected: virtual void __thiscall Graphics::DXMultiTextureMeshGE::SetScreenSpace(bool)
protected: virtual void __thiscall Graphics::DXMultiTextureMeshGE::SetTexCoords(class std::vector<class Vector3,class std::allocator<class Vector3> > const &,int)
protected: virtual void __thiscall Graphics::DXMultiTextureMeshGE::SetVertices(class std::vector<class Vector3,class std::allocator<class Vector3> > const &)
protected: void __thiscall Graphics::DXMultiTextureMeshGE::CalcBoundSphere(void)
protected: void __thiscall Graphics::DXMultiTextureMeshGE::FreeCustomGeometry(void)
protected: void __thiscall Graphics::DXMultiTextureMeshGE::LoadCustomGeometry(void)
const Graphics::DXMultiTextureMeshGE::`vftable'{for `Graphics::CustomGeometry'}
const Graphics::DXMultiTextureMeshGE::`vftable'{for `Graphics::DXGeometry'}
};

class DXProceduralTexture
{
public: __thiscall Graphics::DXProceduralTexture::DXProceduralTexture(class Graphics::DXProceduralTexture const &)
public: __thiscall Graphics::DXProceduralTexture::DXProceduralTexture(void)
public: virtual __thiscall Graphics::DXProceduralTexture::~DXProceduralTexture(void)
public: class Graphics::DXProceduralTexture & __thiscall Graphics::DXProceduralTexture::operator=(class Graphics::DXProceduralTexture const &)
public: static class Resource * __cdecl Graphics::DXProceduralTexture::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: static class Resource * __cdecl Graphics::DXProceduralTexture::CreateZ(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::DXProceduralTexture::HaveAlpha(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DXProceduralTexture::ClassName(void)
public: virtual enum _D3DFORMAT __thiscall Graphics::DXProceduralTexture::GetFormat(void)
public: virtual float __thiscall Graphics::DXProceduralTexture::GetLoadPriority(void)
public: virtual int __thiscall Graphics::DXProceduralTexture::GetLoadStep(void)
public: virtual int __thiscall Graphics::DXProceduralTexture::GetLoadStepCount(void)
public: virtual struct IDirect3DBaseTexture8 * __thiscall Graphics::DXProceduralTexture::GetHandle(void)
public: virtual struct IDirect3DSurface8 * __thiscall Graphics::DXProceduralTexture::GetSurface(unsigned int)
public: virtual unsigned int __thiscall Graphics::DXProceduralTexture::GetMipLevels(void)
public: virtual unsigned int __thiscall Graphics::DXProceduralTexture::ReleaseSurface(struct IDirect3DSurface8 *)
public: virtual unsigned long __thiscall Graphics::DXProceduralTexture::GetCreationFlags(void)
public: virtual void __thiscall Graphics::DXProceduralTexture::FreeToStep(int)
public: virtual void __thiscall Graphics::DXProceduralTexture::GetResolution(int &,int &)
public: virtual void __thiscall Graphics::DXProceduralTexture::LoadToStep(int)
public: virtual void __thiscall Graphics::DXProceduralTexture::SetCreationParams(unsigned int,unsigned long,enum _D3DFORMAT)
public: virtual void __thiscall Graphics::DXProceduralTexture::SetResolution(int,int)
const Graphics::DXProceduralTexture::`vftable'
};

class DXProjLight
{
public: __thiscall Graphics::DXProjLight::DXProjLight(class Graphics::DXProjLight const &)
public: __thiscall Graphics::DXProjLight::DXProjLight(void)
public: virtual __thiscall Graphics::DXProjLight::~DXProjLight(void)
public: class Graphics::DXProjLight & __thiscall Graphics::DXProjLight::operator=(class Graphics::DXProjLight const &)
public: class ClipVolumePlanes const & __thiscall Graphics::DXProjLight::GetVolume(void)const 
public: class Graphics::DXTexture * __thiscall Graphics::DXProjLight::GetTexture(void)
public: static class Resource * __cdecl Graphics::DXProjLight::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: struct D3DXMATRIX __thiscall Graphics::DXProjLight::GetTTFMatrix(struct D3DXMATRIX *)
public: virtual bool __thiscall Graphics::DXProjLight::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::DXProjLight::NeedsRenderPass(void)
public: virtual class Graphics::Light * __thiscall Graphics::DXProjLight::QueryLightInterface(void)
public: virtual class HeapVector<struct Graphics::DynamicParam> & __thiscall Graphics::DXProjLight::GetParamList(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DXProjLight::ClassName(void)
public: virtual float __thiscall Graphics::DXProjLight::GetLoadPriority(void)
public: virtual float __thiscall Graphics::DXProjLight::GetRadius(void)
public: virtual int __thiscall Graphics::DXProjLight::GetLoadStep(void)
public: virtual int __thiscall Graphics::DXProjLight::GetLoadStepCount(void)
public: virtual int __thiscall Graphics::DXProjLight::TextureStageDemand(void)
public: virtual int __thiscall Graphics::DXProjLight::Using(int)
public: virtual unsigned long __thiscall Graphics::DXProjLight::GetHandle(void)
public: virtual void __thiscall Graphics::DXProjLight::Apply(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::DXProjLight::FreeToStep(int)
public: virtual void __thiscall Graphics::DXProjLight::GetAmbientColor(class Vector3 &)
public: virtual void __thiscall Graphics::DXProjLight::GetAttenuationParams(float &,float &,float &,float &)
public: virtual void __thiscall Graphics::DXProjLight::GetConeAngles(float &,float &)
public: virtual void __thiscall Graphics::DXProjLight::GetDiffuseColor(class Vector3 &)
public: virtual void __thiscall Graphics::DXProjLight::GetLightType(enum Graphics::Light::LightType &)
public: virtual void __thiscall Graphics::DXProjLight::GetSpecularColor(class Vector3 &)
public: virtual void __thiscall Graphics::DXProjLight::LoadToStep(int)
public: virtual void __thiscall Graphics::DXProjLight::SetAmbientColor(class Vector3 const &)
public: virtual void __thiscall Graphics::DXProjLight::SetAttenuationParams(float,float,float,float)
public: virtual void __thiscall Graphics::DXProjLight::SetConeAngles(float,float)
public: virtual void __thiscall Graphics::DXProjLight::SetDiffuseColor(class Vector3 const &)
public: virtual void __thiscall Graphics::DXProjLight::SetLightType(enum Graphics::Light::LightType)
public: virtual void __thiscall Graphics::DXProjLight::SetSpecularColor(class Vector3 const &)
public: virtual void __thiscall Graphics::DXProjLight::UpdatePos(class Position3 const &)
public: virtual void __thiscall Graphics::DXProjLight::UsedThisFrame(void)
public: virtual void __thiscall Graphics::DXProjLight::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall Graphics::DXProjLight::CreateVolume(void)
public: void __thiscall Graphics::DXProjLight::GetLightExtent(struct D3DXMATRIX *,struct D3DXVECTOR4 &,struct D3DXVECTOR4 &)
public: void __thiscall Graphics::DXProjLight::SetLightTexture(int)
public: void __thiscall Graphics::DXProjLight::TurnOffLight(void)
protected: void __thiscall Graphics::DXProjLight::FillDXLight(void)
protected: void __thiscall Graphics::DXProjLight::UpdateLight(void)
const Graphics::DXProjLight::`vftable'{for `Graphics::DXVolumeEffect'}
const Graphics::DXProjLight::`vftable'{for `Graphics::Light'}
};

class DXReferenceTexture
{
public: __thiscall Graphics::DXReferenceTexture::DXReferenceTexture(class Graphics::DXReferenceTexture const &)
public: __thiscall Graphics::DXReferenceTexture::DXReferenceTexture(void)
public: virtual __thiscall Graphics::DXReferenceTexture::~DXReferenceTexture(void)
public: class Graphics::DXReferenceTexture & __thiscall Graphics::DXReferenceTexture::operator=(class Graphics::DXReferenceTexture const &)
public: static class Resource * __cdecl Graphics::DXReferenceTexture::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::DXReferenceTexture::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::DXReferenceTexture::HaveAlpha(void)
public: virtual class Resource * __thiscall Graphics::DXReferenceTexture::GetReference(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DXReferenceTexture::ClassName(void)
public: virtual float __thiscall Graphics::DXReferenceTexture::GetLoadPriority(void)
public: virtual int __thiscall Graphics::DXReferenceTexture::GetLoadStep(void)
public: virtual int __thiscall Graphics::DXReferenceTexture::GetLoadStepCount(void)
public: virtual struct IDirect3DBaseTexture8 * __thiscall Graphics::DXReferenceTexture::GetHandle(void)
public: virtual struct IDirect3DSurface8 * __thiscall Graphics::DXReferenceTexture::GetSurface(unsigned int)
public: virtual unsigned int __thiscall Graphics::DXReferenceTexture::ReleaseSurface(struct IDirect3DSurface8 *)
public: virtual void __thiscall Graphics::DXReferenceTexture::FreeToStep(int)
public: virtual void __thiscall Graphics::DXReferenceTexture::GetResolution(int &,int &)
public: virtual void __thiscall Graphics::DXReferenceTexture::LoadToStep(int)
public: virtual void __thiscall Graphics::DXReferenceTexture::SetReference(class Resource *)
public: virtual void __thiscall Graphics::DXReferenceTexture::SetResolution(int,int)
public: virtual void __thiscall Graphics::DXReferenceTexture::serialize(class EagleDynamics::Common::Serializer &)
const Graphics::DXReferenceTexture::`vftable'{for `Graphics::DXTexture'}
const Graphics::DXReferenceTexture::`vftable'{for `ReferenceResource'}
};

class DXRenderState
{
public: __thiscall Graphics::DXRenderState::DXRenderState(class Graphics::DXRenderState const &)
public: __thiscall Graphics::DXRenderState::DXRenderState(void)
public: virtual __thiscall Graphics::DXRenderState::~DXRenderState(void)
public: class Graphics::DXRenderState & __thiscall Graphics::DXRenderState::operator=(class Graphics::DXRenderState const &)
public: virtual bool __thiscall Graphics::DXRenderState::Apply(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::DXRenderState::PostApply(class Graphics::RenderObject *)
const Graphics::DXRenderState::`vftable'
};

class DXRenderer
{
public: __thiscall Graphics::DXRenderer::DXRenderer(class Graphics::DXRenderer const &)
public: __thiscall Graphics::DXRenderer::DXRenderer(void)
public: virtual __thiscall Graphics::DXRenderer::~DXRenderer(void)
public: class Graphics::DXRenderer & __thiscall Graphics::DXRenderer::operator=(class Graphics::DXRenderer const &)
public: bool __thiscall Graphics::DXRenderer::DoesFormatSupportAlpha(enum _D3DFORMAT)
public: bool __thiscall Graphics::DXRenderer::UpdateRenormMap(class Graphics::DXCubeTexture *)
public: class Graphics::DXFog * __thiscall Graphics::DXRenderer::GetFog(void)
public: class Graphics::DXLight * __thiscall Graphics::DXRenderer::GetSun(void)
public: class Graphics::Material * __thiscall Graphics::DXRenderer::GetCurMaterial(void)
public: class Graphics::PhongLookup * __thiscall Graphics::DXRenderer::GetGlossMap(unsigned int)
public: class Graphics::Texture * __thiscall Graphics::DXRenderer::GetTexture(int)
public: int __thiscall Graphics::DXRenderer::GetTextureStage(int)
public: int __thiscall Graphics::DXRenderer::GetTextureStageCount(void)
public: int __thiscall Graphics::DXRenderer::GetUsedStages(void)
public: long __thiscall Graphics::DXRenderer::ApplyStateBlock(unsigned long)
public: long __thiscall Graphics::DXRenderer::GetRenderState(enum _D3DRENDERSTATETYPE,unsigned long &)
public: long __thiscall Graphics::DXRenderer::GetTextureStageState(unsigned long,enum _D3DTEXTURESTAGESTATETYPE,unsigned long &)
public: long __thiscall Graphics::DXRenderer::SetRenderState(enum _D3DRENDERSTATETYPE,unsigned long)
public: long __thiscall Graphics::DXRenderer::SetTextureStageState(unsigned long,enum _D3DTEXTURESTAGESTATETYPE,unsigned long)
public: struct Graphics::D3DModeInfo & __thiscall Graphics::DXRenderer::GetMode(void)
public: struct IDirect3DDevice8 * __thiscall Graphics::DXRenderer::GetDevice(void)
public: struct _D3DCAPS8 const & __thiscall Graphics::DXRenderer::GetD3DCaps(void)
public: struct _D3DPRESENT_PARAMETERS_ const & __thiscall Graphics::DXRenderer::GetPresentParams(void)
public: unsigned int __thiscall Graphics::DXRenderer::GetClipPlane(void)
public: unsigned int __thiscall Graphics::DXRenderer::GetFormatStencilBits(enum _D3DFORMAT)
public: unsigned int __thiscall Graphics::DXRenderer::GetStencilBits(void)
public: unsigned long __thiscall Graphics::DXRenderer::GetTstTime(int)
public: unsigned long __thiscall Graphics::DXRenderer::GetVertexShader(void)
public: virtual bool __thiscall Graphics::DXRenderer::BeginDrawText(void)
public: virtual bool __thiscall Graphics::DXRenderer::GetFontBuffers(unsigned char * &,unsigned char * &)
public: virtual bool __thiscall Graphics::DXRenderer::IsFontModeFast(void)
public: virtual bool __thiscall Graphics::DXRenderer::Present(void)
public: virtual bool __thiscall Graphics::DXRenderer::initialize(class ConfigParser *,void *)
public: virtual bool __thiscall Graphics::DXRenderer::isinitialized(void)
public: virtual class Graphics::Camera const & __thiscall Graphics::DXRenderer::GetCamera(void)
public: virtual enum Graphics::RenderMode __thiscall Graphics::DXRenderer::GetRenderMode(void)
public: virtual long __thiscall Graphics::DXRenderer::CreateIB(unsigned long,unsigned long,struct IDirect3DIndexBuffer8 * *,unsigned long *,unsigned long)
public: virtual long __thiscall Graphics::DXRenderer::CreateShader(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,void *,unsigned long,unsigned long *,bool,bool,unsigned long &)
public: virtual long __thiscall Graphics::DXRenderer::CreateTexture(void)
public: virtual long __thiscall Graphics::DXRenderer::CreateVB(unsigned long,unsigned long,struct IDirect3DVertexBuffer8 * *,unsigned long *,unsigned long)
public: virtual long __thiscall Graphics::DXRenderer::GetFixedIB(unsigned long &,struct IDirect3DIndexBuffer8 * *)
public: virtual long __thiscall Graphics::DXRenderer::GetFixedVB(unsigned long &,unsigned long,struct IDirect3DVertexBuffer8 * *,int)
public: virtual long __thiscall Graphics::DXRenderer::SetMeshBuffers(struct IDirect3DVertexBuffer8 *,unsigned long)
public: virtual struct D3DXMATRIX const & __thiscall Graphics::DXRenderer::GetProjection(void)
public: virtual struct D3DXMATRIX const & __thiscall Graphics::DXRenderer::GetView(void)
public: virtual unsigned int __thiscall Graphics::DXRenderer::GetTargetHeight(void)
public: virtual unsigned int __thiscall Graphics::DXRenderer::GetTargetWidth(void)
public: virtual unsigned int __thiscall Graphics::DXRenderer::LoadPalette(struct tagPALETTEENTRY const *)
public: virtual unsigned long __thiscall Graphics::DXRenderer::SetLight(struct _D3DLIGHT8 &)
public: virtual void __thiscall Graphics::DXRenderer::BeginScene(void)
public: virtual void __thiscall Graphics::DXRenderer::ChangeLight(unsigned long,struct _D3DLIGHT8 &)
public: virtual void __thiscall Graphics::DXRenderer::Clear(bool,bool,bool,class Vector3 const *)
public: virtual void __thiscall Graphics::DXRenderer::DisableLights(void)
public: virtual void __thiscall Graphics::DXRenderer::DrawBatch(class Graphics::RenderObject * *,int)
public: virtual void __thiscall Graphics::DXRenderer::DrawObject(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::DXRenderer::DrawRenderText(class Graphics::RenderText *)
public: virtual void __thiscall Graphics::DXRenderer::EndDrawText(void)
public: virtual void __thiscall Graphics::DXRenderer::EndFrame(void)
public: virtual void __thiscall Graphics::DXRenderer::EndScene(void)
public: virtual void __thiscall Graphics::DXRenderer::FreePalette(unsigned int)
public: virtual void __thiscall Graphics::DXRenderer::GetSystemDescriptor(struct Graphics::SystemDescriptor &)
public: virtual void __thiscall Graphics::DXRenderer::LightEnable(unsigned long,struct _D3DLIGHT8 *,bool)
public: virtual void __thiscall Graphics::DXRenderer::OffsetFontBuffers(unsigned long,class Graphics::DXTexture *)
public: virtual void __thiscall Graphics::DXRenderer::RegisterCallback(class Graphics::RendererCallback *,enum Graphics::RendererCallbackEvent)
public: virtual void __thiscall Graphics::DXRenderer::ReleaseIB(struct IDirect3DIndexBuffer8 *)
public: virtual void __thiscall Graphics::DXRenderer::ReleaseShader(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall Graphics::DXRenderer::ReleaseShader(unsigned long,bool)
public: virtual void __thiscall Graphics::DXRenderer::ReleaseTexture(void)
public: virtual void __thiscall Graphics::DXRenderer::ReleaseVB(struct IDirect3DVertexBuffer8 *)
public: virtual void __thiscall Graphics::DXRenderer::RetreiveParams(class ConfigParser * &)
public: virtual void __thiscall Graphics::DXRenderer::SetCamera(class Graphics::Camera const &)
public: virtual void __thiscall Graphics::DXRenderer::SetParams(class ConfigParser *)
public: virtual void __thiscall Graphics::DXRenderer::SetRenderMode(enum Graphics::RenderMode)
public: virtual void __thiscall Graphics::DXRenderer::SetRenderTarget(class Graphics::Texture *,class Graphics::Texture *)
public: virtual void __thiscall Graphics::DXRenderer::UnregisterCallback(class Graphics::RendererCallback *,enum Graphics::RendererCallbackEvent)
public: virtual void __thiscall Graphics::DXRenderer::Update(void)
public: virtual void __thiscall Graphics::DXRenderer::uninitialize(void)
public: void __cdecl Graphics::DXRenderer::Error(long,char *,...)
public: void __thiscall Graphics::DXRenderer::ClearRenderStates(void)
public: void __thiscall Graphics::DXRenderer::FinishSetTextures(void)
public: void __thiscall Graphics::DXRenderer::FreeResources(void)
public: void __thiscall Graphics::DXRenderer::ResetCache(void)
public: void __thiscall Graphics::DXRenderer::ResetClipPlanes(void)
public: void __thiscall Graphics::DXRenderer::ResetMaterial(void)
public: void __thiscall Graphics::DXRenderer::ResetShaders(void)
public: void __thiscall Graphics::DXRenderer::ResetUsedTexStages(void)
public: void __thiscall Graphics::DXRenderer::ResetWorldTransform(void)
public: void __thiscall Graphics::DXRenderer::SetFog(class Graphics::DXFog *)
public: void __thiscall Graphics::DXRenderer::SetMaterial(struct _D3DMATERIAL8 *)
public: void __thiscall Graphics::DXRenderer::SetPixelShader(unsigned long)
public: void __thiscall Graphics::DXRenderer::SetSun(class Graphics::DXLight *)
public: void __thiscall Graphics::DXRenderer::SetTexture(int,class Graphics::Texture *)
public: void __thiscall Graphics::DXRenderer::SetVertexShader(unsigned long)
public: void __thiscall Graphics::DXRenderer::ShowStartScreen(void)
public: void __thiscall Graphics::DXRenderer::TmpTurnLights(bool)
protected: virtual int __thiscall Graphics::DXRenderer::FindDepthStencilFormat(unsigned int,enum _D3DDEVTYPE,enum _D3DFORMAT,enum _D3DFORMAT *)
protected: virtual long __thiscall Graphics::DXRenderer::BuildDeviceList(void)
protected: virtual long __thiscall Graphics::DXRenderer::ConfirmDevice(struct _D3DCAPS8 *,unsigned long,enum _D3DFORMAT)
protected: virtual long __thiscall Graphics::DXRenderer::Init3DDevice(class ConfigParser *,struct HWND__ *)
protected: virtual void __thiscall Graphics::DXRenderer::InitTextures(void)
protected: virtual void __thiscall Graphics::DXRenderer::ResetGlossMaps(void)
private: bool __thiscall Graphics::DXRenderer::CreateFontBuffers(void)
private: bool __thiscall Graphics::DXRenderer::ParseEffectState(class HeapVector<class Graphics::VolumeEffect *> *,bool)
private: void __thiscall Graphics::DXRenderer::DrawNormalLights(class Graphics::RenderObject * *,int)
private: void __thiscall Graphics::DXRenderer::FreeFontBuffers(void)
private: void __thiscall Graphics::DXRenderer::ReleaseFixedVertices(void)
private: void __thiscall Graphics::DXRenderer::ReleaseShaders(void)
const Graphics::DXRenderer::`vftable'
};

class DXSurface
{
public: __thiscall Graphics::DXSurface::DXSurface(class Graphics::DXSurface const &)
public: __thiscall Graphics::DXSurface::DXSurface(void)
public: virtual __thiscall Graphics::DXSurface::~DXSurface(void)
public: class Graphics::DXSurface & __thiscall Graphics::DXSurface::operator=(class Graphics::DXSurface const &)
public: static class Resource * __cdecl Graphics::DXSurface::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: static class Resource * __cdecl Graphics::DXSurface::CreateR(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: static class Resource * __cdecl Graphics::DXSurface::CreateZ(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::DXSurface::HaveAlpha(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DXSurface::ClassName(void)
public: virtual enum _D3DFORMAT __thiscall Graphics::DXSurface::GetFormat(void)
public: virtual float __thiscall Graphics::DXSurface::GetLoadPriority(void)
public: virtual int __thiscall Graphics::DXSurface::GetLoadStep(void)
public: virtual int __thiscall Graphics::DXSurface::GetLoadStepCount(void)
public: virtual struct IDirect3DBaseTexture8 * __thiscall Graphics::DXSurface::GetHandle(void)
public: virtual struct IDirect3DSurface8 * __thiscall Graphics::DXSurface::GetSurface(unsigned int)
public: virtual unsigned int __thiscall Graphics::DXSurface::ReleaseSurface(struct IDirect3DSurface8 *)
public: virtual void __thiscall Graphics::DXSurface::FreeToStep(int)
public: virtual void __thiscall Graphics::DXSurface::GetResolution(int &,int &)
public: virtual void __thiscall Graphics::DXSurface::LoadToStep(int)
public: virtual void __thiscall Graphics::DXSurface::SetCreationParams(enum Graphics::DXSurfType,enum _D3DFORMAT,int)
public: virtual void __thiscall Graphics::DXSurface::SetResolution(int,int)
const Graphics::DXSurface::`vftable'
};

class DXTexture
{
public: __thiscall Graphics::DXTexture::DXTexture(class Graphics::DXTexture const &)
public: __thiscall Graphics::DXTexture::DXTexture(void)
public: virtual __thiscall Graphics::DXTexture::~DXTexture(void)
public: class Graphics::DXTexture & __thiscall Graphics::DXTexture::operator=(class Graphics::DXTexture const &)
public: bool __thiscall Graphics::DXTexture::SaveToBmp(char const *,int)
public: virtual bool __thiscall Graphics::DXTexture::SetTexture(unsigned long)
const Graphics::DXTexture::`vftable'
};

class DXUnicodeFont
{
	class FontTC
	{
	public: __thiscall Graphics::DXUnicodeFont::FontTC::FontTC(struct Graphics::DXUnicodeFont::FontTC const &)
	public: __thiscall Graphics::DXUnicodeFont::FontTC::FontTC(void)
	public: struct Graphics::DXUnicodeFont::FontTC & __thiscall Graphics::DXUnicodeFont::FontTC::operator=(struct Graphics::DXUnicodeFont::FontTC const &)
	};

public: __thiscall Graphics::DXUnicodeFont::DXUnicodeFont(class Graphics::DXUnicodeFont const &)
public: __thiscall Graphics::DXUnicodeFont::DXUnicodeFont(void)
public: virtual __thiscall Graphics::DXUnicodeFont::~DXUnicodeFont(void)
public: class Graphics::DXUnicodeFont & __thiscall Graphics::DXUnicodeFont::operator=(class Graphics::DXUnicodeFont const &)
public: static class Resource * __cdecl Graphics::DXUnicodeFont::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DXUnicodeFont::ClassName(void)
public: virtual void __thiscall Graphics::DXUnicodeFont::GetTextExtent(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class Vector3 &)
protected: virtual bool __thiscall Graphics::DXUnicodeFont::MakeStrings(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
protected: virtual float __thiscall Graphics::DXUnicodeFont::DrawStringWs(float,float,float,float,struct Graphics::DXFont::Box2f const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class Graphics::Color const &,struct Graphics::DXFont::WsFontVertex *,unsigned short *,int &,int &)
protected: virtual int __thiscall Graphics::DXUnicodeFont::DrawString(int,int,struct tagPOINT const &,struct tagRECT const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class Graphics::Color const &,struct Graphics::DXFont::FontVertex *,unsigned short *,int &,int &)
protected: virtual struct tagPOINT __thiscall Graphics::DXUnicodeFont::GetCharSize(unsigned int)
protected: virtual void __thiscall Graphics::DXUnicodeFont::CheckFontType(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &)
protected: virtual void __thiscall Graphics::DXUnicodeFont::CreateOldFontData(void)
const Graphics::DXUnicodeFont::`vftable'
};

class DXVolumeEffect
{
public: __thiscall Graphics::DXVolumeEffect::DXVolumeEffect(class Graphics::DXVolumeEffect const &)
public: __thiscall Graphics::DXVolumeEffect::DXVolumeEffect(void)
public: virtual __thiscall Graphics::DXVolumeEffect::~DXVolumeEffect(void)
public: class Graphics::DXVolumeEffect & __thiscall Graphics::DXVolumeEffect::operator=(class Graphics::DXVolumeEffect const &)
public: virtual class Position3 const & __thiscall Graphics::DXVolumeEffect::GetPos(void)
public: virtual void __thiscall Graphics::DXVolumeEffect::UpdatePos(class Position3 const &)
const Graphics::DXVolumeEffect::`vftable'
};

class DX_MFDMaterial
{
public: __thiscall Graphics::DX_MFDMaterial::DX_MFDMaterial(class Graphics::DX_MFDMaterial const &)
public: __thiscall Graphics::DX_MFDMaterial::DX_MFDMaterial(void)
public: virtual __thiscall Graphics::DX_MFDMaterial::~DX_MFDMaterial(void)
public: class Graphics::DX_MFDMaterial & __thiscall Graphics::DX_MFDMaterial::operator=(class Graphics::DX_MFDMaterial const &)
public: static class Resource * __cdecl Graphics::DX_MFDMaterial::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual __int64 __thiscall Graphics::DX_MFDMaterial::GetMaterialCaps(void)
public: virtual bool __thiscall Graphics::DX_MFDMaterial::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual class Graphics::CustomMaterial * __thiscall Graphics::DX_MFDMaterial::QueryCustomMaterial(void)
public: virtual class Graphics::DXTexture * __thiscall Graphics::DX_MFDMaterial::GetMainDiffuseMap(void)
public: virtual class Graphics::Texture * __thiscall Graphics::DX_MFDMaterial::GetTexture(int)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::DX_MFDMaterial::ClassName(void)
public: virtual float __thiscall Graphics::DX_MFDMaterial::GetLoadPriority(void)
public: virtual int __thiscall Graphics::DX_MFDMaterial::GetLoadStep(void)
public: virtual int __thiscall Graphics::DX_MFDMaterial::GetLoadStepCount(void)
public: virtual int __thiscall Graphics::DX_MFDMaterial::GetTextureCount(void)
public: virtual unsigned int __thiscall Graphics::DX_MFDMaterial::GetKey(void)
public: virtual void __thiscall Graphics::DX_MFDMaterial::DrawGeometry(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::DX_MFDMaterial::FreeToStep(int)
public: virtual void __thiscall Graphics::DX_MFDMaterial::LoadToStep(int)
public: virtual void __thiscall Graphics::DX_MFDMaterial::LoadWithDependents(int)
public: virtual void __thiscall Graphics::DX_MFDMaterial::SetDiffuseMap(int,class Graphics::Texture *)
public: virtual void __thiscall Graphics::DX_MFDMaterial::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall Graphics::DX_MFDMaterial::`vbase destructor'(void)
const Graphics::DX_MFDMaterial::`vbtable'
const Graphics::DX_MFDMaterial::`vftable'{for `Graphics::CustomMaterial'}
const Graphics::DX_MFDMaterial::`vftable'{for `Graphics::DXBrushedMaterial'}
};

class IlsGeometry
{
public: __thiscall Graphics::IlsGeometry::IlsGeometry(class Graphics::IlsGeometry const &)
public: __thiscall Graphics::IlsGeometry::IlsGeometry(void)
public: virtual __thiscall Graphics::IlsGeometry::~IlsGeometry(void)
public: class Graphics::IlsGeometry & __thiscall Graphics::IlsGeometry::operator=(class Graphics::IlsGeometry const &)
public: static class Resource * __cdecl Graphics::IlsGeometry::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::IlsGeometry::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::IlsGeometry::HasAlpha(void)
public: virtual bool __thiscall Graphics::IlsGeometry::IntersectSegment(class Vector3 const &,class Vector3 const &,class HeapVector<struct Graphics::DynamicParam> const &,float *,class Vector3 *)
public: virtual bool __thiscall Graphics::IlsGeometry::IsScreenSpace(void)
public: virtual class Box const & __thiscall Graphics::IlsGeometry::GetBoundingBox(void)
public: virtual class Graphics::CustomGeometry * __thiscall Graphics::IlsGeometry::QueryCustomGeometry(void)
public: virtual class Vector3 const & __thiscall Graphics::IlsGeometry::GetCenter(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall Graphics::IlsGeometry::GetDebugString(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::IlsGeometry::ClassName(void)
public: virtual class std::vector<class Graphics::Color,class std::allocator<class Graphics::Color> > const & __thiscall Graphics::IlsGeometry::GetColors(void)
public: virtual class std::vector<class Vector3,class std::allocator<class Vector3> > const & __thiscall Graphics::IlsGeometry::GetNormals(void)
public: virtual class std::vector<class Vector3,class std::allocator<class Vector3> > const & __thiscall Graphics::IlsGeometry::GetTexCoords(int)
public: virtual class std::vector<class Vector3,class std::allocator<class Vector3> > const & __thiscall Graphics::IlsGeometry::GetVertices(void)
public: virtual class std::vector<unsigned short,class std::allocator<unsigned short> > const & __thiscall Graphics::IlsGeometry::GetIndices(void)
public: virtual enum Graphics::PrimitiveType __thiscall Graphics::IlsGeometry::GetPrimitiveType(void)
public: virtual float __thiscall Graphics::IlsGeometry::GetLoadPriority(void)
public: virtual float __thiscall Graphics::IlsGeometry::GetRadius(void)
public: virtual int __thiscall Graphics::IlsGeometry::GetLoadStep(void)
public: virtual int __thiscall Graphics::IlsGeometry::GetLoadStepCount(void)
public: virtual unsigned int __thiscall Graphics::IlsGeometry::GetKey(void)
public: virtual unsigned int __thiscall Graphics::IlsGeometry::GetPolygonCount(void)
public: virtual void __thiscall Graphics::IlsGeometry::DrawGeometry(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::IlsGeometry::FreeToStep(int)
public: virtual void __thiscall Graphics::IlsGeometry::LoadData(void *,unsigned int,class Graphics::ModelHeader *)
public: virtual void __thiscall Graphics::IlsGeometry::LoadToStep(int)
public: virtual void __thiscall Graphics::IlsGeometry::SetColors(class std::vector<class Graphics::Color,class std::allocator<class Graphics::Color> > const &)
public: virtual void __thiscall Graphics::IlsGeometry::SetIndices(class std::vector<unsigned short,class std::allocator<unsigned short> > const &)
public: virtual void __thiscall Graphics::IlsGeometry::SetNormals(class std::vector<class Vector3,class std::allocator<class Vector3> > const &)
public: virtual void __thiscall Graphics::IlsGeometry::SetPrimitiveType(enum Graphics::PrimitiveType)
public: virtual void __thiscall Graphics::IlsGeometry::SetScreenSpace(bool)
public: virtual void __thiscall Graphics::IlsGeometry::SetTexCoords(class std::vector<class Vector3,class std::allocator<class Vector3> > const &,int)
public: virtual void __thiscall Graphics::IlsGeometry::SetVertices(class std::vector<class Vector3,class std::allocator<class Vector3> > const &)
public: virtual void __thiscall Graphics::IlsGeometry::serialize(class EagleDynamics::Common::Serializer &)
const Graphics::IlsGeometry::`vftable'{for `Graphics::CustomGeometry'}
const Graphics::IlsGeometry::`vftable'{for `Graphics::DXGeometry'}
};

class IlsMaterial
{
public: __thiscall Graphics::IlsMaterial::IlsMaterial(class Graphics::IlsMaterial const &)
public: __thiscall Graphics::IlsMaterial::IlsMaterial(void)
public: virtual __thiscall Graphics::IlsMaterial::~IlsMaterial(void)
public: class Graphics::IlsMaterial & __thiscall Graphics::IlsMaterial::operator=(class Graphics::IlsMaterial const &)
public: static class Resource * __cdecl Graphics::IlsMaterial::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual __int64 __thiscall Graphics::IlsMaterial::GetMaterialCaps(void)
public: virtual bool __thiscall Graphics::IlsMaterial::AllowProjLights(void)
public: virtual bool __thiscall Graphics::IlsMaterial::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual class Graphics::CustomMaterial * __thiscall Graphics::IlsMaterial::QueryCustomMaterial(void)
public: virtual class Graphics::DXTexture * __thiscall Graphics::IlsMaterial::GetMainDiffuseMap(void)
public: virtual class Graphics::Texture * __thiscall Graphics::IlsMaterial::GetTexture(int)
public: virtual class Vector3 * __thiscall Graphics::IlsMaterial::GetMainDiffuseColor(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::IlsMaterial::ClassName(void)
public: virtual float __thiscall Graphics::IlsMaterial::GetLoadPriority(void)
public: virtual int __thiscall Graphics::IlsMaterial::GetLoadStep(void)
public: virtual int __thiscall Graphics::IlsMaterial::GetLoadStepCount(void)
public: virtual int __thiscall Graphics::IlsMaterial::GetTextureCount(void)
public: virtual unsigned int __thiscall Graphics::IlsMaterial::GetKey(void)
public: virtual void __thiscall Graphics::IlsMaterial::DrawGeometry(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::IlsMaterial::FreeToStep(int)
public: virtual void __thiscall Graphics::IlsMaterial::LoadToStep(int)
public: virtual void __thiscall Graphics::IlsMaterial::LoadWithDependents(int)
public: virtual void __thiscall Graphics::IlsMaterial::serialize(class EagleDynamics::Common::Serializer &)
const Graphics::IlsMaterial::`vftable'{for `Graphics::CustomMaterial'}
const Graphics::IlsMaterial::`vftable'{for `Graphics::DXMaterial'}
};

class MfdObjectMaterial
{
public: __thiscall Graphics::MfdObjectMaterial::MfdObjectMaterial(class Graphics::MfdObjectMaterial const &)
public: __thiscall Graphics::MfdObjectMaterial::MfdObjectMaterial(void)
public: virtual __thiscall Graphics::MfdObjectMaterial::~MfdObjectMaterial(void)
public: class Graphics::MfdObjectMaterial & __thiscall Graphics::MfdObjectMaterial::operator=(class Graphics::MfdObjectMaterial const &)
public: static class Resource * __cdecl Graphics::MfdObjectMaterial::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::MfdObjectMaterial::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual class Graphics::DXTexture * __thiscall Graphics::MfdObjectMaterial::GetMainDiffuseMap(void)
public: virtual class Graphics::Texture * __thiscall Graphics::MfdObjectMaterial::GetTexture(int)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::MfdObjectMaterial::ClassName(void)
public: virtual float __thiscall Graphics::MfdObjectMaterial::GetLoadPriority(void)
public: virtual int __thiscall Graphics::MfdObjectMaterial::GetLoadStep(void)
public: virtual int __thiscall Graphics::MfdObjectMaterial::GetLoadStepCount(void)
public: virtual int __thiscall Graphics::MfdObjectMaterial::GetTextureCount(void)
public: virtual unsigned int __thiscall Graphics::MfdObjectMaterial::GetKey(void)
public: virtual void __thiscall Graphics::MfdObjectMaterial::DrawGeometry(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::MfdObjectMaterial::FreeToStep(int)
public: virtual void __thiscall Graphics::MfdObjectMaterial::LoadToStep(int)
public: virtual void __thiscall Graphics::MfdObjectMaterial::LoadWithDependents(int)
public: virtual void __thiscall Graphics::MfdObjectMaterial::serialize(class EagleDynamics::Common::Serializer &)
const Graphics::MfdObjectMaterial::`vftable'
};

class PhongLookup
{
public: __thiscall Graphics::PhongLookup::PhongLookup(class Graphics::PhongLookup const &)
public: __thiscall Graphics::PhongLookup::PhongLookup(void)
public: virtual __thiscall Graphics::PhongLookup::~PhongLookup(void)
public: class Graphics::PhongLookup & __thiscall Graphics::PhongLookup::operator=(class Graphics::PhongLookup const &)
public: static class Resource * __cdecl Graphics::PhongLookup::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::PhongLookup::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::PhongLookup::HaveAlpha(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::PhongLookup::ClassName(void)
public: virtual float __thiscall Graphics::PhongLookup::GetLoadPriority(void)
public: virtual float __thiscall Graphics::PhongLookup::GetShine(void)
public: virtual void __thiscall Graphics::PhongLookup::LoadToStep(int)
public: virtual void __thiscall Graphics::PhongLookup::SetShine(float)
protected: virtual void __thiscall Graphics::PhongLookup::CalcShine(unsigned long,unsigned long,unsigned long,unsigned char *)
const Graphics::PhongLookup::`vftable'
};

class PixFogLookupCube
{
public: __thiscall Graphics::PixFogLookupCube::PixFogLookupCube(class Graphics::PixFogLookupCube const &)
public: __thiscall Graphics::PixFogLookupCube::PixFogLookupCube(void)
public: virtual __thiscall Graphics::PixFogLookupCube::~PixFogLookupCube(void)
public: class Graphics::PixFogLookupCube & __thiscall Graphics::PixFogLookupCube::operator=(class Graphics::PixFogLookupCube const &)
public: static class Resource * __cdecl Graphics::PixFogLookupCube::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::PixFogLookupCube::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall Graphics::PixFogLookupCube::HaveAlpha(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::PixFogLookupCube::ClassName(void)
public: virtual float __thiscall Graphics::PixFogLookupCube::GetLoadPriority(void)
public: virtual void __thiscall Graphics::PixFogLookupCube::LoadToStep(int)
protected: virtual void __thiscall Graphics::PixFogLookupCube::CalcRenorm(unsigned long,unsigned long,unsigned long,unsigned char *)
const Graphics::PixFogLookupCube::`vftable'
};

class PixelSpecularMaterial
{
public: __thiscall Graphics::PixelSpecularMaterial::PixelSpecularMaterial(class Graphics::PixelSpecularMaterial const &)
public: __thiscall Graphics::PixelSpecularMaterial::PixelSpecularMaterial(void)
public: class Graphics::PixelSpecularMaterial & __thiscall Graphics::PixelSpecularMaterial::operator=(class Graphics::PixelSpecularMaterial const &)
public: static class Resource * __cdecl Graphics::PixelSpecularMaterial::Create(enum ResourceType,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual __int64 __thiscall Graphics::PixelSpecularMaterial::GetMaterialCaps(void)
public: virtual __thiscall Graphics::PixelSpecularMaterial::~PixelSpecularMaterial(void)
public: virtual bool __thiscall Graphics::PixelSpecularMaterial::CreateByName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual class Graphics::CustomMaterial * __thiscall Graphics::PixelSpecularMaterial::QueryCustomMaterial(void)
public: virtual class Graphics::DXTexture * __thiscall Graphics::PixelSpecularMaterial::GetMainDiffuseMap(void)
public: virtual class Graphics::Texture * __thiscall Graphics::PixelSpecularMaterial::GetTexture(int)
public: virtual class Vector3 * __thiscall Graphics::PixelSpecularMaterial::GetMainDiffuseColor(void)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Graphics::PixelSpecularMaterial::ClassName(void)
public: virtual float __thiscall Graphics::PixelSpecularMaterial::GetLoadPriority(void)
public: virtual int __thiscall Graphics::PixelSpecularMaterial::GetLoadStep(void)
public: virtual int __thiscall Graphics::PixelSpecularMaterial::GetLoadStepCount(void)
public: virtual int __thiscall Graphics::PixelSpecularMaterial::GetTextureCount(void)
public: virtual unsigned int __thiscall Graphics::PixelSpecularMaterial::GetKey(void)
public: virtual void __thiscall Graphics::PixelSpecularMaterial::DrawGeometry(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::PixelSpecularMaterial::DrawRadeon(class Graphics::RenderObject *)
public: virtual void __thiscall Graphics::PixelSpecularMaterial::FreeToStep(int)
public: virtual void __thiscall Graphics::PixelSpecularMaterial::LoadToStep(int)
public: virtual void __thiscall Graphics::PixelSpecularMaterial::LoadWithDependents(int)
public: virtual void __thiscall Graphics::PixelSpecularMaterial::SetAmbientColor(class Vector3 const &)
public: virtual void __thiscall Graphics::PixelSpecularMaterial::SetDiffuseColor(class Vector3 const &)
public: virtual void __thiscall Graphics::PixelSpecularMaterial::SetDiffuseMap(int,class Graphics::Texture *)
public: virtual void __thiscall Graphics::PixelSpecularMaterial::SetGlossiness(float)
public: virtual void __thiscall Graphics::PixelSpecularMaterial::SetOpacity(float)
public: virtual void __thiscall Graphics::PixelSpecularMaterial::SetSpecularColor(class Vector3 const &)
public: virtual void __thiscall Graphics::PixelSpecularMaterial::serialize(class EagleDynamics::Common::Serializer &)
protected: virtual void __thiscall Graphics::PixelSpecularMaterial::FillDXMat(void)
protected: virtual void __thiscall Graphics::PixelSpecularMaterial::FillFlags(void)
public: void __thiscall Graphics::PixelSpecularMaterial::`vbase destructor'(void)
const Graphics::PixelSpecularMaterial::`vbtable'
const Graphics::PixelSpecularMaterial::`vftable'{for `Graphics::CustomMaterial'}
const Graphics::PixelSpecularMaterial::`vftable'{for `Graphics::DXBrushedMaterial'}
};

}		/// namespace DXRenderer

#endif

