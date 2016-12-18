#ifndef POLYLINEROADPATH_H_
#define POLYLINEROADPATH_H_

class PolylineRoadPath
{
public: __thiscall PolylineRoadPath::PolylineRoadPath(struct PolylineRoadPath const &)
public: __thiscall PolylineRoadPath::PolylineRoadPath(void)
public: __thiscall PolylineRoadPath::~PolylineRoadPath(void)
public: bool __thiscall PolylineRoadPath::build(class std::vector<class Vector3,class std::allocator<class Vector3> > &,class std::vector<struct PtAttribs,class std::allocator<struct PtAttribs> > &)
public: static int __cdecl PolylineRoadPath::GetClosestRoad(class E3::Vector *,unsigned short &,float &,float *,class E3::Vector *,bool)
public: struct PolylineRoadPath & __thiscall PolylineRoadPath::operator=(struct PolylineRoadPath const &)
};

#endif

