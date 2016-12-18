#ifndef LANDSQUAREFILE_H_
#define LANDSQUAREFILE_H_

class LandSquareFile
{
public: __thiscall LandSquareFile::LandSquareFile(class LandSquareFile const &)
public: __thiscall LandSquareFile::LandSquareFile(void)
public: __thiscall LandSquareFile::~LandSquareFile(void)
public: class LandSquareFile & __thiscall LandSquareFile::operator=(class LandSquareFile const &)
public: struct landscape_old::LandscapeSquareSection::Square * __thiscall LandSquareFile::getSquare(int)
public: bool __thiscall LandSquareFile::Open(char const *,bool)
public: bool __thiscall LandSquareFile::operator!(void)const 
public: char const * __thiscall LandSquareFile::GetError(void)
public: unsigned long __thiscall LandSquareFile::getSquareCount(void)
public: void __thiscall LandSquareFile::Close(void)
};

#endif

