#ifndef POLYLINEFEATURE_H_
#define POLYLINEFEATURE_H_

class PolylineFeature
{
public: __thiscall PolylineFeature::PolylineFeature(class PolylineFeature const &)
public: __thiscall PolylineFeature::PolylineFeature(void)
public: virtual __thiscall PolylineFeature::~PolylineFeature(void)
public: class PolylineFeature & __thiscall PolylineFeature::operator=(class PolylineFeature const &)
public: class E3::Vector * __thiscall PolylineFeature::getPoints(void)
public: int __thiscall PolylineFeature::getCount(void)
public: int __thiscall PolylineFeature::getGroupType(void)
public: int __thiscall PolylineFeature::getIndexCount(void)
public: int __thiscall PolylineFeature::getRootMode(void)
public: static int const __cdecl PolylineFeature::getClassType(void)
public: struct PtAttribs * __thiscall PolylineFeature::getAttribs(void)
public: unsigned short * __thiscall PolylineFeature::getIndices(void)
public: virtual bool __thiscall PolylineFeature::calcDistance(class E3::Vector const &,class DrawingState *,struct DrawFeature::DistInfo &)
public: virtual bool __thiscall PolylineFeature::isVisibleIn(class MapS::Rect const &)
public: virtual bool const __thiscall PolylineFeature::isDerived(int)
public: virtual int const __thiscall PolylineFeature::getType(void)
public: virtual void __thiscall PolylineFeature::draw(class DrawingState *)
public: void __thiscall PolylineFeature::calcBoundBox(void)
public: void __thiscall PolylineFeature::resizeAttribs(int)
public: void __thiscall PolylineFeature::resizeIndices(int)
public: void __thiscall PolylineFeature::resizePoints(int)
public: void __thiscall PolylineFeature::setGroupType(int)
public: void __thiscall PolylineFeature::setRootMode(int)
protected: void __thiscall PolylineFeature::buildVertexData(class Graphics::Color &)
const PolylineFeature::`vftable'

protected: static int const PolylineFeature::type
};

#endif

