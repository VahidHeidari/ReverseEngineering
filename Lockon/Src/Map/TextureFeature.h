#ifndef TEXTUREFEATURE_H_
#define TEXTUREFEATURE_H_

class TextureFeature
{
public: __thiscall TextureFeature::TextureFeature(class MapTextureInfo *)
public: __thiscall TextureFeature::TextureFeature(class TextureFeature const &)
public: virtual __thiscall TextureFeature::~TextureFeature(void)
public: class TextureFeature & __thiscall TextureFeature::operator=(class TextureFeature const &)
public: static int const __cdecl TextureFeature::getClassType(void)
public: virtual bool const __thiscall TextureFeature::isDerived(int)
public: virtual int const __thiscall TextureFeature::getType(void)
public: virtual void __thiscall TextureFeature::draw(class DrawingState *)
const TextureFeature::`vftable'

protected: static int const TextureFeature::type
};

#endif

