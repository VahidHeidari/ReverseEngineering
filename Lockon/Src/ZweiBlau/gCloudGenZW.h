#ifndef GCLOUDGENZW_H_
#define GCLOUDGENZW_H_

class gCloudGenZW
{
public: __thiscall gCloudGenZW::gCloudGenZW(class gCloudGenZW const &)
public: __thiscall gCloudGenZW::gCloudGenZW(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual __thiscall gCloudGenZW::~gCloudGenZW(void)
public: class gCloudGenZW & __thiscall gCloudGenZW::operator=(class gCloudGenZW const &)
public: virtual bool __thiscall gCloudGenZW::CanCreate(void)
public: virtual bool __thiscall gCloudGenZW::IsInit(void)
public: virtual bool __thiscall gCloudGenZW::IsTransparent(void)
public: virtual bool __thiscall gCloudGenZW::init(void)
public: virtual class Box const & __thiscall gCloudGenZW::GetBoundingBox(unsigned long)
public: virtual class Graphics::DXTexture * __thiscall gCloudGenZW::GetMainDiffuseMap(void)
public: virtual class Graphics::Texture * __thiscall gCloudGenZW::GetTexture(int)
public: virtual class Vector3 const & __thiscall gCloudGenZW::GetCenter(unsigned long)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall gCloudGenZW::ClassName(void)
public: virtual float __thiscall gCloudGenZW::GetLoadPriority(void)
public: virtual float __thiscall gCloudGenZW::GetRadius(unsigned long)
public: virtual int __thiscall gCloudGenZW::GetLoadStep(void)
public: virtual int __thiscall gCloudGenZW::GetLoadStepCount(void)
public: virtual int __thiscall gCloudGenZW::GetTextureCount(void)
public: virtual unsigned int __thiscall gCloudGenZW::GetKey(void)
public: virtual unsigned int __thiscall gCloudGenZW::GetPolygonCount(unsigned long)
public: virtual unsigned long __thiscall gCloudGenZW::AddCloud(class Vector3 const &,float,unsigned long)
public: virtual unsigned long __thiscall gCloudGenZW::GetMaxShapeCount(void)
public: virtual void __thiscall gCloudGenZW::Draw(unsigned long)
public: virtual void __thiscall gCloudGenZW::DrawAll(struct D3DXMATRIX &,struct D3DXMATRIX &,struct D3DXVECTOR4 &)
public: virtual void __thiscall gCloudGenZW::DrawGeometry(class Graphics::RenderObject *)
public: virtual void __thiscall gCloudGenZW::FreeToStep(int)
public: virtual void __thiscall gCloudGenZW::KillCloud(unsigned long)
public: virtual void __thiscall gCloudGenZW::LoadToStep(int)
public: virtual void __thiscall gCloudGenZW::OnUninitialize(void)
public: virtual void __thiscall gCloudGenZW::OnUpdate(void)
public: virtual void __thiscall gCloudGenZW::Purge(void)
public: virtual void __thiscall gCloudGenZW::SetEffectState(unsigned long,class HeapVector<class Graphics::VolumeEffect *> *)
public: virtual void __thiscall gCloudGenZW::SetMaxShapeCount(unsigned long)
public: virtual void __thiscall gCloudGenZW::SetNumClouds(unsigned long)
public: virtual void __thiscall gCloudGenZW::SetPosition(unsigned long,class Vector3 const &)
public: virtual void __thiscall gCloudGenZW::SetSize(unsigned long,float)
public: virtual void __thiscall gCloudGenZW::uninit(void)
protected: virtual float __thiscall gCloudGenZW::GetCurrentAspect(struct CLOUD *,struct D3DXVECTOR4 &)
protected: virtual void __thiscall gCloudGenZW::DestroyAll(void)
protected: virtual void __thiscall gCloudGenZW::FindFreeSlot(struct CLOUD *)
protected: virtual void __thiscall gCloudGenZW::ReleaseSlot(unsigned long)
protected: virtual void __thiscall gCloudGenZW::UpdateCloud(struct CLOUD *,struct D3DXMATRIX &,struct D3DXMATRIX &,struct D3DXVECTOR4 &)
const gCloudGenZW::`vftable'{for `Graphics::DXMaterial'}
const gCloudGenZW::`vftable'{for `Graphics::RendererCallback'}
const gCloudGenZW::`vftable'{for `ZweiBlau'}
const gCloudGenZW::`vftable'{for `gCloudsZW'}
};

#endif

