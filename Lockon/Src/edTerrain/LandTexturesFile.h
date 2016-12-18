#ifndef LANDTEXTURESFILE_H_
#define LANDTEXTURESFILE_H_

class LandTexturesFile
{
public: __thiscall LandTexturesFile::LandTexturesFile(class LandTexturesFile const &)
public: __thiscall LandTexturesFile::LandTexturesFile(void)
public: __thiscall LandTexturesFile::~LandTexturesFile(void)
public: class LandTexturesFile & __thiscall LandTexturesFile::operator=(class LandTexturesFile const &)
public: virtual bool __thiscall LandTexturesFile::Open(char const *)
public: virtual char const * __thiscall LandTexturesFile::GetError(void)
public: virtual char const * __thiscall LandTexturesFile::getTextureName(int)
public: virtual int __thiscall LandTexturesFile::getTexCount(void)
public: virtual struct TexFileHeader::texture * __thiscall LandTexturesFile::getTex(char const *)
public: virtual struct TexFileHeader::texture * __thiscall LandTexturesFile::getTexture(int)
public: virtual void __thiscall LandTexturesFile::Close(void)
public: virtual void __thiscall LandTexturesFile::Release(void)
public: void __thiscall LandTexturesFile::FreePermanent(void)
public: void __thiscall LandTexturesFile::PreLoad(void)
const LandTexturesFile::`vftable'
};

#endif

