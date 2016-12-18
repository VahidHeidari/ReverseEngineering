#ifndef VECTORLINKFEATURE_H_
#define VECTORLINKFEATURE_H_

class VectorLinkFeature
{
public: __thiscall VectorLinkFeature::VectorLinkFeature(class E3::Vector const &,class E3::Vector const &)
public: __thiscall VectorLinkFeature::VectorLinkFeature(class VectorLinkFeature const &)
public: virtual __thiscall VectorLinkFeature::~VectorLinkFeature(void)
public: class VectorLinkFeature & __thiscall VectorLinkFeature::operator=(class VectorLinkFeature const &)
public: class E3::Vector const & __thiscall VectorLinkFeature::getPoint1(void)
public: class E3::Vector const & __thiscall VectorLinkFeature::getPoint2(void)
public: class E3::Vector const __thiscall VectorLinkFeature::getVector(void)
public: static int const __cdecl VectorLinkFeature::getClassType(void)
public: virtual bool const __thiscall VectorLinkFeature::isDerived(int)
public: virtual int const __thiscall VectorLinkFeature::getType(void)
public: virtual void __thiscall VectorLinkFeature::draw(class DrawingState *)
public: void __thiscall VectorLinkFeature::initialize(class E3::Vector const &,class E3::Vector const &)
const VectorLinkFeature::`vftable'{for `DrawFeature'}
const VectorLinkFeature::`vftable'{for `MixScreenScale'}

protected: static int const VectorLinkFeature::type
};

#endif

