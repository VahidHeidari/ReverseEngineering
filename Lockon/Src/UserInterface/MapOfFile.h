#ifndef MAPOFFILE_H_
#define MAPOFFILE_H_

class MapOfFile
{
public: __thiscall MapOfFile::MapOfFile(char const *,char const *)
public: __thiscall MapOfFile::MapOfFile(class MapOfFile const &)
public: virtual __thiscall MapOfFile::~MapOfFile(void)
public: class MapOfFile & __thiscall MapOfFile::operator=(class MapOfFile const &)
public: char * __thiscall MapOfFile::getFileMap(void)
public: int const __thiscall MapOfFile::getFileSize(void)
public: struct _FILETIME __thiscall MapOfFile::getCreationTime(void)
public: struct _FILETIME __thiscall MapOfFile::getLastAccessTime(void)
public: struct _FILETIME __thiscall MapOfFile::getLastWriteTime(void)
const MapOfFile::`vftable'
};

#endif
