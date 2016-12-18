#ifndef SELFSHADOWVISUALIZER_H_
#define SELFSHADOWVISUALIZER_H_

class SelfShadowVisualizer
{
public: __thiscall SelfShadowVisualizer::SelfShadowVisualizer(class SelfShadowVisualizer const &)
public: __thiscall SelfShadowVisualizer::SelfShadowVisualizer(void)
public: virtual __thiscall SelfShadowVisualizer::~SelfShadowVisualizer(void)
public: class SelfShadowVisualizer & __thiscall SelfShadowVisualizer::operator=(class SelfShadowVisualizer const &)
public: bool __thiscall SelfShadowVisualizer::initialize(void)
public: class ClipVolumeInclined & __thiscall SelfShadowVisualizer::GetVolume(void)
public: virtual class Graphics::RenderObject * __thiscall SelfShadowVisualizer::GetNextObject(void *)
public: virtual void __thiscall SelfShadowVisualizer::DrawAll(void *)
public: virtual void __thiscall SelfShadowVisualizer::InitFrame(int *,int *)
public: virtual void __thiscall SelfShadowVisualizer::OnObjectReady(class Graphics::RenderObject *)
public: void * __thiscall SelfShadowVisualizer::RenderShadows(class Graphics::VolumeEffect *,bool)
protected: bool __thiscall SelfShadowVisualizer::GetWorldBox(class viObjectShape *,class Box &)
protected: class viObjectNode * __thiscall SelfShadowVisualizer::FindTargetObject(void)
protected: static bool __cdecl SelfShadowVisualizer::RenderShadowHandler(class viObject *,class viSearch *,void *)
protected: void __thiscall SelfShadowVisualizer::RenderSubshape(class viObjectNode *,class Position3 *)
const SelfShadowVisualizer::`vftable'
};

#endif

