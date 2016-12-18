#ifndef LANDOBJECTSTORAGE_H_
#define LANDOBJECTSTORAGE_H_

class LandObjectStorage
{
public: __thiscall LandObjectStorage::LandObjectStorage(class Box const &)
public: __thiscall LandObjectStorage::LandObjectStorage(class LandObjectStorage const &)
public: virtual __thiscall LandObjectStorage::~LandObjectStorage(void)
public: class LandObjectStorage & __thiscall LandObjectStorage::operator=(class LandObjectStorage const &)
public: class BinarySceneAndTree::File * __thiscall LandObjectStorage::GetSceneFile(void)
public: class ShapeQuadFileStorage * __thiscall LandObjectStorage::GetMMFTree(void)
public: static void __cdecl LandObjectStorage::Lock(void)
public: static void __cdecl LandObjectStorage::Unlock(void)
public: virtual bool __thiscall LandObjectStorage::AddObject(class viObject *)
public: virtual bool __thiscall LandObjectStorage::RemoveObject(class viObject *)
public: virtual char const * __thiscall LandObjectStorage::Name(void)
public: virtual unsigned int __thiscall LandObjectStorage::GetCount(void)
public: virtual void __thiscall LandObjectStorage::GetObjects(class viSearch *)
public: virtual void __thiscall LandObjectStorage::GetStatistics(char * const)
public: virtual void __thiscall LandObjectStorage::Purge(unsigned long)
public: void __thiscall LandObjectStorage::FinishScene(void)
public: void __thiscall LandObjectStorage::InitScene(char const *,bool,bool)
public: void __thiscall LandObjectStorage::SaveScene(char const *,class std::list<struct BinarySceneAndTree::LinkDecl,class std::allocator<struct BinarySceneAndTree::LinkDecl> > &)
protected: bool __thiscall LandObjectStorage::LoadETL(char *)
protected: bool __thiscall LandObjectStorage::LoadMainScene(class std::list<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > const &)
protected: char * __thiscall LandObjectStorage::GetScenePath(void)
protected: char const * __thiscall LandObjectStorage::GetSceneINI(void)
protected: class std::list<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > __thiscall LandObjectStorage::GetSceneListFromFolder(char const *)
protected: class std::list<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > __thiscall LandObjectStorage::GetSceneListFromINI(char const *)
protected: class std::list<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > __thiscall LandObjectStorage::GetScenesList(void)
protected: int __thiscall LandObjectStorage::CreateScene(void)
protected: void __thiscall LandObjectStorage::GetSourceVersion(class std::list<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > const &,struct _FILETIME &)
protected: void __thiscall LandObjectStorage::InitRailwayGirder(void)
const LandObjectStorage::`vftable'

private: static bool LandObjectStorage::locked
};

#endif

