#ifndef SMOKEPARTSYSTEM_H_
#define SMOKEPARTSYSTEM_H_

#include "Graphics.h"

class SmokePartSystem
{
public: __thiscall SmokePartSystem::SmokePartSystem(class SmokePartSystem const &)
public: __thiscall SmokePartSystem::SmokePartSystem(void)
public: virtual __thiscall SmokePartSystem::~SmokePartSystem(void)
public: class SmokePartSystem & __thiscall SmokePartSystem::operator=(class SmokePartSystem const &)
public: virtual bool __thiscall SmokePartSystem::AllowProjLights(void)
public: virtual class Graphics::DXTexture * __thiscall SmokePartSystem::GetMainDiffuseMap(void)
public: virtual class Graphics::Texture * __thiscall SmokePartSystem::GetTexture(int)
public: virtual float __thiscall SmokePartSystem::GetLoadPriority(void)
public: virtual int __thiscall SmokePartSystem::GetLoadStep(void)
public: virtual int __thiscall SmokePartSystem::GetLoadStepCount(void)
public: virtual int __thiscall SmokePartSystem::GetTextureCount(void)
public: virtual unsigned int __thiscall SmokePartSystem::GetKey(void)
public: virtual void __thiscall SmokePartSystem::DrawGeometry(class Graphics::RenderObject *)
public: virtual void __thiscall SmokePartSystem::FreeToStep(int)
public: virtual void __thiscall SmokePartSystem::LoadToStep(int)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall SmokePartSystem::ClassName(void)
private: long __thiscall SmokePartSystem::CreateShaders(void)
private: void __thiscall SmokePartSystem::InitParticle(struct SmokePartSystem::PARTICLEVERTEX *,struct D3DXVECTOR2 const &,float,float)
private: void __thiscall SmokePartSystem::ReleaseResources(void)
private: void __thiscall SmokePartSystem::SetupConstants(class Graphics::RenderObject *)
const SmokePartSystem::`vftable'
};

#endif

