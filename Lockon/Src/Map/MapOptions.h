#ifndef MAPOPTIONS_H_
#define MAPOPTIONS_H_

class MapOptions
{
public: __thiscall MapOptions::MapOptions(class MapOptions const &)
public: __thiscall MapOptions::MapOptions(void)
public: __thiscall MapOptions::~MapOptions(void)
public: class MapOptions & __thiscall MapOptions::operator=(class MapOptions const &)
public: static class MapOptions & __cdecl MapOptions::getDefMapOptions(void)
public: virtual bool __thiscall MapOptions::isFilterSet(char const *)const 
public: virtual bool __thiscall MapOptions::switchFilter(char const *)
public: virtual bool const __thiscall MapOptions::isDisplayAltitude(void)const 
public: virtual bool const __thiscall MapOptions::isFiltersChanged(void)const 
public: virtual class IMapOptions * __thiscall MapOptions::buildCopy(void)
public: virtual class IMapOptions * __thiscall MapOptions::getDefIMapOptions(void)
public: virtual enum MapViewMode const __thiscall MapOptions::getMapViewMode(void)const 
public: virtual void __thiscall MapOptions::filtersUpdated(void)
public: virtual void __thiscall MapOptions::getActiveFilters(class std::list<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > &)const 
public: virtual void __thiscall MapOptions::initialize(class IMapOptions *)
public: virtual void __thiscall MapOptions::initialize(void)
public: virtual void __thiscall MapOptions::setAsDefault(void)
public: virtual void __thiscall MapOptions::setDefault(void)
public: virtual void __thiscall MapOptions::setDisplayAltitude(bool)
public: virtual void __thiscall MapOptions::setFilter(char const *,bool)
public: virtual void __thiscall MapOptions::setMapViewMode(enum MapViewMode)
public: virtual class std::map<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,bool,struct std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class std::allocator<bool> > const & __thiscall MapOptions::getFilters(void)const 
protected: static class MapOptions MapOptions::defMapOptions
const MapOptions::`vftable'
};

#endif

