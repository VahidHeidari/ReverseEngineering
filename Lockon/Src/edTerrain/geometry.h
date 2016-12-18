#ifndef GEOMETRY_H_
#define GEOMETRY_H_

namespace geometry
{

class GeometryItem
{
public: __thiscall geometry::GeometryItem::GeometryItem(struct geometry::GeometrySource *,unsigned long,unsigned long,unsigned long,unsigned long,struct material::Material *)
public: __thiscall geometry::GeometryItem::GeometryItem(void)
};

class GeometrySource
{
public: __thiscall geometry::GeometrySource::GeometrySource(struct geometry::GeometryItem &,class misc::mmf_write &)
public: __thiscall geometry::GeometrySource::GeometrySource(struct geometry::GeometrySource &,class misc::mmf_write &)
public: __thiscall geometry::GeometrySource::GeometrySource(void)
public: __thiscall geometry::GeometrySource::~GeometrySource(void)
public: bool __thiscall geometry::GeometrySource::IsPointInside(float,float,int,int)
public: int __thiscall geometry::GeometrySource::getType(void)
public: void __thiscall geometry::GeometrySource::BuildFromList(class std::list<struct geometry::GeometryItem *,class std::allocator<struct geometry::GeometryItem *> > &,class misc::mmf_write &,class std::vector<struct geometry::GeometryItem,class std::allocator<struct geometry::GeometryItem> > &)
public: void __thiscall geometry::GeometrySource::Init(struct geometry::GeometryItem &,class misc::mmf_write &)
public: void __thiscall geometry::GeometrySource::Init(struct geometry::GeometrySource &,class misc::mmf_write &)
public: void __thiscall geometry::GeometrySource::setFaces(union li3V *,int,class misc::mmf_write *)
public: void __thiscall geometry::GeometrySource::setLines(union li2V *,int,class misc::mmf_write *)
public: void __thiscall geometry::GeometrySource::setNorms(class E3::Vector *,int,class misc::mmf_write *)
public: void __thiscall geometry::GeometrySource::setTVerts(int,struct ltv2V *,int,class misc::mmf_write *)
public: void __thiscall geometry::GeometrySource::setVerts(class E3::Vector *,int,class misc::mmf_write *)
};

}		/// namespace geometry

#endif

