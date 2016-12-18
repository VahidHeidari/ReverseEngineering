#ifndef CONTROLPARAMETERS_H_
#define CONTROLPARAMETERS_H_

class ControlParameters
{
public: __thiscall ControlParameters::ControlParameters(int)
public: __thiscall ControlParameters::ControlParameters(struct ControlParameters const &)
public: virtual __thiscall ControlParameters::~ControlParameters(void)
public: struct ControlParameters & __thiscall ControlParameters::operator=(struct ControlParameters const &)
public: static class ResourceKeeper<struct ControlParameters> & __cdecl ControlParameters::resourceKeeper(void)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __cdecl ControlParameters::defaultResourceFile(void)
public: virtual void __thiscall ControlParameters::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall ControlParameters::read(char const *,int)
public: void __thiscall ControlParameters::`default constructor closure'(void)
const ControlParameters::`vftable'
};

#endif
