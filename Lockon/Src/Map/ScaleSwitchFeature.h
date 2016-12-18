#ifndef SCALESWITCHFEATURE_H_
#define SCALESWITCHFEATURE_H_

class ScaleSwitchFeature
{
public: __thiscall ScaleSwitchFeature::ScaleSwitchFeature(class ScaleSwitchFeature const &)
public: __thiscall ScaleSwitchFeature::ScaleSwitchFeature(void)
public: virtual __thiscall ScaleSwitchFeature::~ScaleSwitchFeature(void)
public: class ScaleSwitchFeature & __thiscall ScaleSwitchFeature::operator=(class ScaleSwitchFeature const &)
public: static int const __cdecl ScaleSwitchFeature::getClassType(void)
public: virtual bool __thiscall ScaleSwitchFeature::calcDistance(class E3::Vector const &,class DrawingState *,struct DrawFeature::DistInfo &)
public: virtual bool const __thiscall ScaleSwitchFeature::isDerived(int)
public: virtual int const __thiscall ScaleSwitchFeature::getType(void)
public: virtual void __thiscall ScaleSwitchFeature::draw(class DrawingState *)
public: void __thiscall ScaleSwitchFeature::setScales(class std::vector<float,class std::allocator<float> > const &)
protected: class DrawFeature const * __thiscall ScaleSwitchFeature::getChild(float const &)
const ScaleSwitchFeature::`vftable'

protected: static int const ScaleSwitchFeature::type
};

#endif

