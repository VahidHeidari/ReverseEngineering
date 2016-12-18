#ifndef SLIDERPARAMETERS_H_
#define SLIDERPARAMETERS_H_

class SliderParameters
{
public: __thiscall SliderParameters::SliderParameters(int)
public: __thiscall SliderParameters::SliderParameters(struct SliderParameters const &)
public: virtual __thiscall SliderParameters::~SliderParameters(void)
public: struct SliderParameters & __thiscall SliderParameters::operator=(struct SliderParameters const &)
public: static class ResourceKeeper<struct SliderParameters> & __cdecl SliderParameters::resourceKeeper(void)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __cdecl SliderParameters::defaultResourceFile(void)
public: virtual void __thiscall SliderParameters::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall SliderParameters::read(char const *,int)
public: void __thiscall SliderParameters::`default constructor closure'(void)
const SliderParameters::`vftable'
};

#endif
