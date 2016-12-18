#ifndef SCREENOFFSETFEATURE_H_
#define SCREENOFFSETFEATURE_H_

class ScreenOffsetFeature
{
public: __thiscall ScreenOffsetFeature::ScreenOffsetFeature(class ScreenOffsetFeature const &)
public: __thiscall ScreenOffsetFeature::ScreenOffsetFeature(int,int)
public: __thiscall ScreenOffsetFeature::ScreenOffsetFeature(void)
public: virtual __thiscall ScreenOffsetFeature::~ScreenOffsetFeature(void)
public: class ScreenOffsetFeature & __thiscall ScreenOffsetFeature::operator=(class ScreenOffsetFeature const &)
public: static int const __cdecl ScreenOffsetFeature::getClassType(void)
public: virtual bool const __thiscall ScreenOffsetFeature::isDerived(int)
public: virtual int const __thiscall ScreenOffsetFeature::getType(void)
public: virtual void __thiscall ScreenOffsetFeature::draw(class DrawingState *)
public: void __thiscall ScreenOffsetFeature::getOffset(int &,int &)
public: void __thiscall ScreenOffsetFeature::setOffset(int,int)
const ScreenOffsetFeature::`vftable'

protected: static int const ScreenOffsetFeature::type
};

#endif

