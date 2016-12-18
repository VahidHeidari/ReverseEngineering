#ifndef CONVEXPOLYGONSFEATURE_H_
#define CONVEXPOLYGONSFEATURE_H_

class ConvexPolygonsFeature
{
public: __thiscall ConvexPolygonsFeature::ConvexPolygonsFeature(class ConvexPolygonsFeature const &)
public: __thiscall ConvexPolygonsFeature::ConvexPolygonsFeature(void)
public: class ConvexPolygonsFeature & __thiscall ConvexPolygonsFeature::operator=(class ConvexPolygonsFeature const &)
public: int const __thiscall ConvexPolygonsFeature::getInfoCount(void)
public: static int const __cdecl ConvexPolygonsFeature::getClassType(void)
public: struct ConvexPolygonsFeature::sPolygonInfo const * __thiscall ConvexPolygonsFeature::getPolygonInfos(void)const 
public: virtual bool __thiscall ConvexPolygonsFeature::calcDistance(class E3::Vector const &,class DrawingState *,struct DrawFeature::DistInfo &)
public: virtual bool const __thiscall ConvexPolygonsFeature::isDerived(int)
public: virtual int const __thiscall ConvexPolygonsFeature::getType(void)
public: virtual void __thiscall ConvexPolygonsFeature::draw(class DrawingState *)
public: void __thiscall ConvexPolygonsFeature::setPolygonInfos(struct ConvexPolygonsFeature::sPolygonInfo *,int)
protected: virtual __thiscall ConvexPolygonsFeature::~ConvexPolygonsFeature(void)
protected: virtual void __thiscall ConvexPolygonsFeature::buildVertexData(class Graphics::Color &)
const ConvexPolygonsFeature::`vftable'

protected: static int const ConvexPolygonsFeature::type
};

#endif

