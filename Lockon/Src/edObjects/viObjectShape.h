#ifndef VIOBJECTSHAPE_H_
#define VIOBJECTSHAPE_H_

class viObjectShape
{
public: __thiscall viObjectShape::viObjectShape(class viObjectShape const &)
public: __thiscall viObjectShape::viObjectShape(unsigned long)
public: virtual __thiscall viObjectShape::~viObjectShape(void)
public: bool __thiscall viObjectShape::OnChangeEffectState(void)
public: class HeapVector<class Graphics::VolumeEffect *> & __thiscall viObjectShape::GetEffectState(void)
public: class viObjectShape & __thiscall viObjectShape::operator=(class viObjectShape const &)
public: virtual class Graphics::Model * __thiscall viObjectShape::GetModel(void)
public: virtual class HeapVector<struct Graphics::DynamicParam> const & __thiscall viObjectShape::GetDrawArguments(void)
public: virtual class Position3 const & __thiscall viObjectShape::GetPosition(void)
public: virtual struct gBox const & __thiscall viObjectShape::LocalBox(double)
public: virtual void __thiscall viObjectShape::Parse(class Graphics::ModelParser &,class Position3 const &,class HeapVector<class Graphics::VolumeEffect *> *)
public: virtual void __thiscall viObjectShape::setRendPos(class cPosition const &)
protected: void __thiscall viObjectShape::SetModel(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall viObjectShape::`default constructor closure'(void)
const viObjectShape::`vftable'{for `Graphics::ModelInstance'}
const viObjectShape::`vftable'{for `viObject'}
};

#endif

