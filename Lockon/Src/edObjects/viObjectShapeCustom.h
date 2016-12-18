#ifndef VIOBJECTSHAPECUSTOM_H_
#define VIOBJECTSHAPECUSTOM_H_

class viObjectShapeCustom
{
public: __thiscall viObjectShapeCustom::viObjectShapeCustom(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: __thiscall viObjectShapeCustom::viObjectShapeCustom(class viObjectShapeCustom const &)
public: virtual __thiscall viObjectShapeCustom::~viObjectShapeCustom(void)
public: class viObjectShapeCustom & __thiscall viObjectShapeCustom::operator=(class viObjectShapeCustom const &)
public: virtual class ClipVolume * __thiscall viObjectShapeCustom::FlatShape(void)
public: virtual class Position3 const & __thiscall viObjectShapeCustom::GetPosition(void)
public: virtual class cPosition & __thiscall viObjectShapeCustom::Position(double)
public: virtual void __thiscall viObjectShapeCustom::SetPos(class cPosition const &)
public: void __thiscall viObjectShapeCustom::Init(unsigned long)
private: virtual void __thiscall viObjectShapeCustom::ConstructFlatShape(void)
const viObjectShapeCustom::`vftable'{for `Graphics::ModelInstance'}
const viObjectShapeCustom::`vftable'{for `viObject'}
};

#endif

