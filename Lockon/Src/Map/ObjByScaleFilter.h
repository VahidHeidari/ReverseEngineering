#ifndef OBJBYSCALEFILTER_H_
#define OBJBYSCALEFILTER_H_

class ObjByScaleFilter
{
public: __thiscall ObjByScaleFilter::ObjByScaleFilter(class MapS::Rect const &,class MapS::Rect const &)
public: __thiscall ObjByScaleFilter::ObjByScaleFilter(class ObjByScaleFilter const &)
public: __thiscall ObjByScaleFilter::ObjByScaleFilter(void)
public: class ObjByScaleFilter & __thiscall ObjByScaleFilter::operator=(class ObjByScaleFilter const &)
public: double const & __thiscall ObjByScaleFilter::getScale(void)const 
public: static double __cdecl ObjByScaleFilter::calcScale(class MapS::Rect const &,class MapS::Rect const &)
public: virtual bool __thiscall ObjByScaleFilter::isValid(class MapObj *)
public: void __thiscall ObjByScaleFilter::initialize(class MapS::Rect const &,class MapS::Rect const &)
protected: virtual __thiscall ObjByScaleFilter::~ObjByScaleFilter(void)
const ObjByScaleFilter::`vftable'
};

#endif

