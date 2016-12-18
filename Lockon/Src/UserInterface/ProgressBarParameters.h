#ifndef PROGRESSBARPARAMETERS_H_
#define PROGRESSBARPARAMETERS_H_

class ProgressBarParameters
{
public: __thiscall ProgressBarParameters::ProgressBarParameters(int)
public: __thiscall ProgressBarParameters::ProgressBarParameters(struct ProgressBarParameters const &)
public: virtual __thiscall ProgressBarParameters::~ProgressBarParameters(void)
public: struct ProgressBarParameters & __thiscall ProgressBarParameters::operator=(struct ProgressBarParameters const &)
public: static class ResourceKeeper<struct ProgressBarParameters> & __cdecl ProgressBarParameters::resourceKeeper(void)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __cdecl ProgressBarParameters::defaultResourceFile(void)
public: virtual void __thiscall ProgressBarParameters::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall ProgressBarParameters::read(char const *,int)
public: void __thiscall ProgressBarParameters::`default constructor closure'(void)
const ProgressBarParameters::`vftable'
};

#endif
