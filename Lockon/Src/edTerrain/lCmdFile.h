#ifndef LCMDFILE_H_
#define LCMDFILE_H_

class lCmdFile
{
public: __thiscall lCmdFile::lCmdFile(class lCmdFile const &)
public: __thiscall lCmdFile::lCmdFile(void)
public: __thiscall lCmdFile::~lCmdFile(void)
public: class lCmdFile & __thiscall lCmdFile::operator=(class lCmdFile const &)
public: bool __thiscall lCmdFile::Open(char const *)
public: char * __thiscall lCmdFile::getTexture(int)
public: char const * __thiscall lCmdFile::GetError(void)
public: char const * __thiscall lCmdFile::GetObjectA(int)
public: int __thiscall lCmdFile::GetObjectCount(void)
public: int __thiscall lCmdFile::getTextureCount(void)
public: struct lCmdFileHeader::ObjectShape * __thiscall lCmdFile::GetObjectA(char const *)
public: void __thiscall lCmdFile::Close(void)
};

#endif

