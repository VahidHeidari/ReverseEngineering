#ifndef HEADERPARAMETERS_H_
#define HEADERPARAMETERS_H_

class HeaderParameters
{
public: __thiscall HeaderParameters::HeaderParameters(int)
public: __thiscall HeaderParameters::HeaderParameters(struct HeaderParameters const &)
public: virtual __thiscall HeaderParameters::~HeaderParameters(void)
public: struct HeaderParameters & __thiscall HeaderParameters::operator=(struct HeaderParameters const &)
public: static class ResourceKeeper<struct HeaderParameters> & __cdecl HeaderParameters::resourceKeeper(void)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __cdecl HeaderParameters::defaultResourceFile(void)
public: void __thiscall HeaderParameters::read(char const *,int)
public: virtual void __thiscall HeaderParameters::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall HeaderParameters::`default constructor closure'(void)
const HeaderParameters::`vftable'
};

#endif
