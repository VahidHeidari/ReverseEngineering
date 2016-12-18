#ifndef STATICPARAMETERS_H_
#define STATICPARAMETERS_H_

class StaticParameters
{
public: __thiscall StaticParameters::StaticParameters(int)
public: __thiscall StaticParameters::StaticParameters(struct StaticParameters const &)
public: virtual __thiscall StaticParameters::~StaticParameters(void)
public: struct StaticParameters & __thiscall StaticParameters::operator=(struct StaticParameters const &)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall StaticParameters::defaultResourceFile(void)
public: static class ResourceKeeper<struct StaticParameters> & __cdecl StaticParameters::resourceKeeper(void)
public: virtual void __thiscall StaticParameters::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall StaticParameters::init(void)
public: void __thiscall StaticParameters::read(char const *,int)
public: void __thiscall StaticParameters::`default constructor closure'(void)
protected: bool & __thiscall StaticParameters::initialized(void)
protected: class std::map<int,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct std::less<int>,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > & __thiscall StaticParameters::defaultResourceFiles(void)
const StaticParameters::`vftable'
};

#endif
