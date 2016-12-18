#ifndef GROUPFEATURE_H_
#define GROUPFEATURE_H_

class GroupFeature
{
public: __thiscall GroupFeature::GroupFeature(class GroupFeature const &)
public: __thiscall GroupFeature::GroupFeature(void)
public: virtual __thiscall GroupFeature::~GroupFeature(void)
public: class GroupFeature & __thiscall GroupFeature::operator=(class GroupFeature const &)
public: static int const __cdecl GroupFeature::getClassType(void)
public: virtual bool __thiscall GroupFeature::calcDistance(class E3::Vector const &,class DrawingState *,struct DrawFeature::DistInfo &)
public: virtual bool const __thiscall GroupFeature::isDerived(int)
public: virtual int const __thiscall GroupFeature::getType(void)
public: virtual void __thiscall GroupFeature::draw(class DrawingState *)
const GroupFeature::`vftable'

protected: static int const GroupFeature::type
};

#endif

