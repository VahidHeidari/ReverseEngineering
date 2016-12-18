#ifndef INDEXEDPOLYGONFEATURE_H_
#define INDEXEDPOLYGONFEATURE_H_

class IndexedPolygonFeature
{
public: __thiscall IndexedPolygonFeature::IndexedPolygonFeature(class IndexedPolygonFeature const &)
public: __thiscall IndexedPolygonFeature::IndexedPolygonFeature(void)
public: virtual __thiscall IndexedPolygonFeature::~IndexedPolygonFeature(void)
public: class IndexedPolygonFeature & __thiscall IndexedPolygonFeature::operator=(class IndexedPolygonFeature const &)
public: static int const __cdecl IndexedPolygonFeature::getClassType(void)
public: virtual bool const __thiscall IndexedPolygonFeature::isDerived(int)
public: virtual int const __thiscall IndexedPolygonFeature::getType(void)
public: virtual void __thiscall IndexedPolygonFeature::draw(class DrawingState *)
protected: virtual void __thiscall IndexedPolygonFeature::buildVertexData(class Graphics::Color &)
const IndexedPolygonFeature::`vftable'

protected: static int const IndexedPolygonFeature::type
};

#endif

