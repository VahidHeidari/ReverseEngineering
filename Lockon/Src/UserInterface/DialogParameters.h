#ifndef DIALOGPARAMETERS_H_
#define DIALOGPARAMETERS_H_

class DialogParameters
{
public: __thiscall DialogParameters::DialogParameters(int)
public: __thiscall DialogParameters::DialogParameters(struct DialogParameters const &)
public: struct DialogParameters & __thiscall DialogParameters::operator=(struct DialogParameters const &)
public: virtual __thiscall DialogParameters::~DialogParameters(void)
public: static class ResourceKeeper<struct DialogParameters> & __cdecl DialogParameters::resourceKeeper(void)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __cdecl DialogParameters::defaultResourceFile(void)
public: virtual void __thiscall DialogParameters::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall DialogParameters::read(char const *,int)
public: void __thiscall DialogParameters::`default constructor closure'(void)
const DialogParameters::`vftable'
};

#endif
