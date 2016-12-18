#ifndef ONLAYFILE_H_
#define ONLAYFILE_H_

class OnLayFile
{
public: __thiscall OnLayFile::OnLayFile(class OnLayFile const &)
public: __thiscall OnLayFile::OnLayFile(void)
public: __thiscall OnLayFile::~OnLayFile(void)
public: class OnLayFile & __thiscall OnLayFile::operator=(class OnLayFile const &)
public: bool __thiscall OnLayFile::operator!(void)const 
public: bool __thiscall OnLayFile::Open(char const *)
public: int __thiscall OnLayFile::getSquareCount(void)
public: struct OnLaySquareSection::Square * __thiscall OnLayFile::getSquare(int)
public: void __thiscall OnLayFile::Close(void)
};

#endif

