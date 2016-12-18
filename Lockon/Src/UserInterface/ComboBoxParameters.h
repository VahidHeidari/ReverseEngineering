#ifndef COMBOBOXPARAMETERS_H_
#define COMBOBOXPARAMETERS_H_

class ComboBoxParameters
{
public: __thiscall ComboBoxParameters::ComboBoxParameters(int)
public: __thiscall ComboBoxParameters::ComboBoxParameters(struct ComboBoxParameters const &)
public: virtual __thiscall ComboBoxParameters::~ComboBoxParameters(void)
public: struct ComboBoxParameters & __thiscall ComboBoxParameters::operator=(struct ComboBoxParameters const &)
public: static class ResourceKeeper<struct ComboBoxParameters> & __cdecl ComboBoxParameters::resourceKeeper(void)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __cdecl ComboBoxParameters::defaultResourceFile(void)
public: virtual void __thiscall ComboBoxParameters::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall ComboBoxParameters::read(char const *,int)
public: void __thiscall ComboBoxParameters::`default constructor closure'(void)
const ComboBoxParameters::`vftable'
};

#endif
