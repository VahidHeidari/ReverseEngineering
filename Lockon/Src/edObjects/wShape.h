#ifndef WSHAPE_H_
#define WSHAPE_H_

class wShape
{
public: __thiscall wShape::wShape(struct wShape const &)
public: __thiscall wShape::wShape(void)
public: __thiscall wShape::~wShape(void)
public: struct wShape & __thiscall wShape::operator=(struct wShape const &)
public: static class gShapeObject * __cdecl wShape::Get(char const *)
public: static class gShapeObject * __cdecl wShape::Get(int,int)
public: static struct wShape * __cdecl wShape::GetDecl(char const *)
public: static struct wShape * __cdecl wShape::GetDecl(int,int)
public: static void __cdecl wShape::Finish(void)
public: static void __cdecl wShape::Init(bool,bool)
public: static void __cdecl wShape::InitLand(void)
public: static void __cdecl wShape::Restore(struct _iobuf *)
public: static void __cdecl wShape::Save(struct _iobuf *)
public: static void __cdecl wShape::SetPositionType(unsigned char)
public: static void __cdecl wShape::Start(void)
public: static void __cdecl wShape::StartNet(void)
public: static void __cdecl wShape::Stop(void)
public: virtual class Graphics::Model * __thiscall wShape::GetModel(void)
const wShape::`vftable'
};

class EagleDynamics::Common::Serializer & __cdecl operator<<(class EagleDynamics::Common::Serializer &,struct wShape * &)

#endif

