#ifndef COLORFEATURE_H_
#define COLORFEATURE_H_

class ColorFeature
{
public: class ColorFeature & __thiscall ColorFeature::operator=(class ColorFeature const &)
public: __thiscall ColorFeature::ColorFeature(class ColorFeature const &)
public: __thiscall ColorFeature::ColorFeature(int,int,int,int)
public: __thiscall ColorFeature::ColorFeature(unsigned long)
public: __thiscall ColorFeature::ColorFeature(void)
public: virtual __thiscall ColorFeature::~ColorFeature(void)
public: int const __thiscall ColorFeature::getA(void)const 
public: int const __thiscall ColorFeature::getB(void)const 
public: int const __thiscall ColorFeature::getG(void)const 
public: int const __thiscall ColorFeature::getR(void)const 
public: static int const __cdecl ColorFeature::getClassType(void)
public: unsigned long const __thiscall ColorFeature::getColor(void)
public: virtual bool const __thiscall ColorFeature::isDerived(int)
public: virtual int const __thiscall ColorFeature::getType(void)
public: virtual void __thiscall ColorFeature::draw(class DrawingState *)
public: void __thiscall ColorFeature::setRGBA(int,int,int,int)
protected: unsigned long __thiscall ColorFeature::buildRGBA(int,int,int,int)
const ColorFeature::`vftable'

protected: static int const ColorFeature::type
};

#endif

