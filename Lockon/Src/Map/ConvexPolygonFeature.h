#ifndef CONVEXPOLYGONFEATURE_H_
#define CONVEXPOLYGONFEATURE_H_

class ConvexPolygonFeature
{
public: __thiscall ConvexPolygonFeature::ConvexPolygonFeature(class ConvexPolygonFeature const &)
public: __thiscall ConvexPolygonFeature::ConvexPolygonFeature(void)
public: virtual __thiscall ConvexPolygonFeature::~ConvexPolygonFeature(void)
public: class ConvexPolygonFeature & __thiscall ConvexPolygonFeature::operator=(class ConvexPolygonFeature const &)
public: class E3::Vector * __thiscall ConvexPolygonFeature::getTexCoords(void)
public: int __thiscall ConvexPolygonFeature::getTexCoordsCount(void)
public: static int const __cdecl ConvexPolygonFeature::getClassType(void)
public: virtual bool __thiscall ConvexPolygonFeature::calcDistance(class E3::Vector const &,class DrawingState *,struct DrawFeature::DistInfo &)
public: virtual bool __thiscall ConvexPolygonFeature::isVisibleIn(class MapS::Rect const &)
public: virtual bool const __thiscall ConvexPolygonFeature::isDerived(int)
public: virtual int const __thiscall ConvexPolygonFeature::getType(void)
public: virtual void __thiscall ConvexPolygonFeature::draw(class DrawingState *)
public: void __thiscall ConvexPolygonFeature::calcBoundBox(void)
public: void __thiscall ConvexPolygonFeature::flushTexture(void)
public: void __thiscall ConvexPolygonFeature::resizeTexCoords(int)
public: void __thiscall ConvexPolygonFeature::setAsFixedMesh(bool)
public: void __thiscall ConvexPolygonFeature::setTexture(char const *,class MapS::Rect const &)
protected: virtual void __thiscall ConvexPolygonFeature::buildVertexData(class Graphics::Color &)
protected: static int const ConvexPolygonFeature::type
const ConvexPolygonFeature::`vftable'
};

#endif

