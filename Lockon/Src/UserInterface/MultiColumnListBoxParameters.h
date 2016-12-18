#ifndef MULTICOLUMNLISTBOXPARAMETERS_H_
#define MULTICOLUMNLISTBOXPARAMETERS_H_

class MultiColumnListBoxParameters
{
public: __thiscall MultiColumnListBoxParameters::MultiColumnListBoxParameters(int)
public: __thiscall MultiColumnListBoxParameters::MultiColumnListBoxParameters(struct MultiColumnListBoxParameters const &)
public: virtual __thiscall MultiColumnListBoxParameters::~MultiColumnListBoxParameters(void)
public: struct MultiColumnListBoxParameters & __thiscall MultiColumnListBoxParameters::operator=(struct MultiColumnListBoxParameters const &)
public: static class ResourceKeeper<struct MultiColumnListBoxParameters> & __cdecl MultiColumnListBoxParameters::resourceKeeper(void)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __cdecl MultiColumnListBoxParameters::defaultResourceFile(void)
public: virtual void __thiscall MultiColumnListBoxParameters::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall MultiColumnListBoxParameters::addColumns(int,int,int,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)
public: void __thiscall MultiColumnListBoxParameters::addRows(int,int,int)
public: void __thiscall MultiColumnListBoxParameters::deleteColumns(int,int)
public: void __thiscall MultiColumnListBoxParameters::deleteRows(int,int)
public: void __thiscall MultiColumnListBoxParameters::read(char const *,int)
public: void __thiscall MultiColumnListBoxParameters::resize(int)
public: void __thiscall MultiColumnListBoxParameters::setColumnsNum(int)
public: void __thiscall MultiColumnListBoxParameters::setRowsNum(int)
public: void __thiscall MultiColumnListBoxParameters::`default constructor closure'(void)
const MultiColumnListBoxParameters::`vftable'
};

#endif
