#ifndef REGIONSDRAW_H_
#define REGIONSDRAW_H_

class RegionsDraw
{
public: __thiscall RegionsDraw::RegionsDraw(void)
public: __thiscall RegionsDraw::~RegionsDraw(void)
public: class RegionsDraw & __thiscall RegionsDraw::operator=(class RegionsDraw const &)
public: class E3::Vector * __thiscall RegionsDraw::buildPoints(unsigned long const *,unsigned long)
public: class Graph<unsigned long> * __thiscall RegionsDraw::endRegistration(void)
public: unsigned long * __thiscall RegionsDraw::registerPoints(class E3::Vector const *,unsigned long,unsigned long const &)
public: void __thiscall RegionsDraw::beginRegistration(void)
protected: unsigned long __thiscall RegionsDraw::regsterPoint(class E3::Vector const &)
protected: void __thiscall RegionsDraw::registerEdge(struct RegionsDraw::Edge const &,unsigned long const &)
};

#endif

