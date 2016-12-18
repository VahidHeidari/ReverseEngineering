#ifndef SHAPEQUADFILESTORAGE_H_
#define SHAPEQUADFILESTORAGE_H_

class ShapeQuadFileStorage
{
public: __thiscall ShapeQuadFileStorage::ShapeQuadFileStorage(class ShapeQuadFileStorage const &)
public: __thiscall ShapeQuadFileStorage::ShapeQuadFileStorage(void)
public: virtual __thiscall ShapeQuadFileStorage::~ShapeQuadFileStorage(void)
public: class ShapeQuadFileStorage & __thiscall ShapeQuadFileStorage::operator=(class ShapeQuadFileStorage const &)
public: bool __thiscall ShapeQuadFileStorage::Open(char const *,struct ObjectCollection_Version)
public: bool __thiscall ShapeQuadFileStorage::Open(class BinarySceneAndTree::File *)
public: static bool __cdecl ShapeQuadFileStorage::WriteToFile(class ShapeQuadStorage &,struct ObjectCollection_Version &,char const *)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl ShapeQuadFileStorage::FindUnusedFilename(char const *,char const *)
public: virtual bool __thiscall ShapeQuadFileStorage::AddObject(class viObject *)
public: virtual bool __thiscall ShapeQuadFileStorage::RemoveObject(class viObject *)
public: virtual char const * __thiscall ShapeQuadFileStorage::Name(void)
public: virtual int __thiscall ShapeQuadFileStorage::GetObjects(class ClipVolume *,bool (__cdecl*)(unsigned long,void *),void *)
public: virtual unsigned int __thiscall ShapeQuadFileStorage::GetCount(void)
public: virtual void __thiscall ShapeQuadFileStorage::GetObjects(class viSearch *)
public: virtual void __thiscall ShapeQuadFileStorage::GetStatistics(char * const)
public: virtual void __thiscall ShapeQuadFileStorage::PrintToFile(char *)
public: virtual void __thiscall ShapeQuadFileStorage::Purge(unsigned long)
private: static class ShapeQuadFileTreeNode * __cdecl ShapeQuadFileStorage::WriteNodeToFile(class misc::mmf_write &,class ShapeQuadTreeNode *,class ShapeQuadFileTreeNode *)
const ShapeQuadFileStorage::`vftable'
};

#endif

