#ifndef OBJTYPESETFILTER_H_
#define OBJTYPESETFILTER_H_

class ObjTypeSetFilter
{
public: __thiscall ObjTypeSetFilter::ObjTypeSetFilter(class ObjTypeSetFilter const &)
public: __thiscall ObjTypeSetFilter::ObjTypeSetFilter(void)
public: class ObjTypeSetFilter & __thiscall ObjTypeSetFilter::operator=(class ObjTypeSetFilter const &)
public: bool __thiscall ObjTypeSetFilter::isValid(unsigned int)
public: class std::set<unsigned int,struct std::less<unsigned int>,class std::allocator<unsigned int> > const & __thiscall ObjTypeSetFilter::getObjTypeSet(void)const 
public: virtual bool __thiscall ObjTypeSetFilter::isValid(class MapObj *)
public: void __thiscall ObjTypeSetFilter::addTypesFrom(class ObjTypeSetFilter const &)
public: void __thiscall ObjTypeSetFilter::addValidType(unsigned int)
public: void __thiscall ObjTypeSetFilter::removeValidType(unsigned int)
protected: virtual __thiscall ObjTypeSetFilter::~ObjTypeSetFilter(void)
protected: void __thiscall ObjTypeSetFilter::flushCache(void)
const ObjTypeSetFilter::`vftable'
};

#endif

