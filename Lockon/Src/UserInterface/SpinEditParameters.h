#ifndef SPINEDITPARAMETERS_H_
#define SPINEDITPARAMETERS_H_

class SpinEditParameters
{
public: __thiscall SpinEditParameters::SpinEditParameters(int)
public: __thiscall SpinEditParameters::SpinEditParameters(struct SpinEditParameters const &)
public: virtual __thiscall SpinEditParameters::~SpinEditParameters(void)
public: struct SpinEditParameters & __thiscall SpinEditParameters::operator=(struct SpinEditParameters const &)
public: static class ResourceKeeper<struct SpinEditParameters> & __cdecl SpinEditParameters::resourceKeeper(void)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __cdecl SpinEditParameters::defaultResourceFile(void)
public: virtual void __thiscall SpinEditParameters::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall SpinEditParameters::read(char const *,int)
public: void __thiscall SpinEditParameters::`default constructor closure'(void)
const SpinEditParameters::`vftable'
};

#endif
