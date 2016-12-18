#ifndef PICTUREFEATURE_H_
#define PICTUREFEATURE_H_

class PictureFeature
{
public: __thiscall PictureFeature::PictureFeature(class PictureFeature const &)
public: __thiscall PictureFeature::PictureFeature(enum ePictureId)
public: virtual __thiscall PictureFeature::~PictureFeature(void)
public: class PictureFeature & __thiscall PictureFeature::operator=(class PictureFeature const &)
public: static int const __cdecl PictureFeature::getClassType(void)
public: virtual bool const __thiscall PictureFeature::isDerived(int)
public: virtual int const __thiscall PictureFeature::getType(void)
public: virtual void __thiscall PictureFeature::draw(class DrawingState *)
const PictureFeature::`vftable'

protected: static int const PictureFeature::type
};

#endif

