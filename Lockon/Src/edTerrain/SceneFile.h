#ifndef SCENEFILE_H_
#define SCENEFILE_H_

class SceneFile
{
public: __thiscall SceneFile::SceneFile(class SceneFile const &)
public: __thiscall SceneFile::SceneFile(void)
public: __thiscall SceneFile::~SceneFile(void)
public: class SceneFile & __thiscall SceneFile::operator=(class SceneFile const &)
public: bool __thiscall SceneFile::Open(char const *)
public: bool __thiscall SceneFile::operator!(void)const 
public: int __thiscall SceneFile::GetSquareCount(void)
public: struct SceneFileHeader * __thiscall SceneFile::GetHeader(void)
public: struct SceneFileHeader::Square * __thiscall SceneFile::GetSquare(int)
public: virtual int __thiscall SceneFile::LoadScene(class viObjectManager *,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &)
public: virtual int __thiscall SceneFile::LoadScene(class viObjectManager *,class std::list<struct SceneCache::Object,class std::allocator<struct SceneCache::Object> > &,class std::list<struct SceneCache::LinkDecl,class std::allocator<struct SceneCache::LinkDecl> > &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &)
const SceneFile::`vftable'
};

#endif

