#ifndef SCREENSCALEFEATURE_H_
#define SCREENSCALEFEATURE_H_

class ScreenScaleFeature
{
public: __thiscall ScreenScaleFeature::ScreenScaleFeature(bool)
public: __thiscall ScreenScaleFeature::ScreenScaleFeature(class ScreenScaleFeature const &)
public: __thiscall ScreenScaleFeature::ScreenScaleFeature(void)
public: virtual __thiscall ScreenScaleFeature::~ScreenScaleFeature(void)
public: class ScreenScaleFeature & __thiscall ScreenScaleFeature::operator=(class ScreenScaleFeature const &)
public: static int const __cdecl ScreenScaleFeature::getClassType(void)
public: virtual bool const __thiscall ScreenScaleFeature::isDerived(int)
public: virtual int const __thiscall ScreenScaleFeature::getType(void)
public: virtual void __thiscall ScreenScaleFeature::draw(class DrawingState *)
const ScreenScaleFeature::`vftable'{for `DrawFeature'}
const ScreenScaleFeature::`vftable'{for `MixScreenScale'}

protected: static int const ScreenScaleFeature::type
};

#endif

