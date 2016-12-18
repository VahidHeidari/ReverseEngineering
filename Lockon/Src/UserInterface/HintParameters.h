#ifndef HINTPARAMETERS_H_
#define HINTPARAMETERS_H_

class HintParameters
{
public: __thiscall HintParameters::HintParameters(int)
public: __thiscall HintParameters::HintParameters(struct HintParameters const &)
public: virtual __thiscall HintParameters::~HintParameters(void)
public: struct HintParameters & __thiscall HintParameters::operator=(struct HintParameters const &)
public: static class ResourceKeeper<struct HintParameters> & __cdecl HintParameters::resourceKeeper(void)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __cdecl HintParameters::defaultResourceFile(void)
public: virtual void __thiscall HintParameters::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall HintParameters::read(char const *,int)
public: void __thiscall HintParameters::`default constructor closure'(void)
const HintParameters::`vftable'
};

#endif
