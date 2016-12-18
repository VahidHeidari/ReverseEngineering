#ifndef TEXTFEATURE_H_
#define TEXTFEATURE_H_

class TextFeature
{
public: __thiscall TextFeature::TextFeature(class E3::Vector,double,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,int)
public: __thiscall TextFeature::TextFeature(class TextFeature const &)
public: __thiscall TextFeature::TextFeature(double,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,int)
public: virtual __thiscall TextFeature::~TextFeature(void)
public: class TextFeature & __thiscall TextFeature::operator=(class TextFeature const &)
public: static int const __cdecl TextFeature::getClassType(void)
public: virtual bool const __thiscall TextFeature::isDerived(int)
public: virtual int const __thiscall TextFeature::getType(void)
public: virtual void __thiscall TextFeature::draw(class DrawingState *)
const TextFeature::`vftable'{for `DrawFeature'}
const TextFeature::`vftable'{for `MixScreenScale'}

protected: static int const TextFeature::type
};

#endif

