#ifndef PLOTPARAMETERS_H_
#define PLOTPARAMETERS_H_

class PlotParameters
{
public: __thiscall PlotParameters::PlotParameters(int)
public: __thiscall PlotParameters::PlotParameters(struct PlotParameters const &)
public: virtual __thiscall PlotParameters::~PlotParameters(void)
public: struct PlotParameters & __thiscall PlotParameters::operator=(struct PlotParameters const &)
public: static class ResourceKeeper<struct PlotParameters> & __cdecl PlotParameters::resourceKeeper(void)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __cdecl PlotParameters::defaultResourceFile(void)
public: virtual void __thiscall PlotParameters::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall PlotParameters::read(char const *,int)
public: void __thiscall PlotParameters::`default constructor closure'(void)
const PlotParameters::`vftable'
};

#endif
