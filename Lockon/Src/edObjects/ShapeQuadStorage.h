#ifndef SHAPEQUADSTORAGE_H_
#define SHAPEQUADSTORAGE_H_

class ShapeQuadStorage
{
public: __thiscall ShapeQuadStorage::ShapeQuadStorage(class Box const &,unsigned long)
public: __thiscall ShapeQuadStorage::ShapeQuadStorage(class ShapeQuadStorage const &)
public: virtual __thiscall ShapeQuadStorage::~ShapeQuadStorage(void)
public: class ShapeQuadStorage & __thiscall ShapeQuadStorage::operator=(class ShapeQuadStorage const &)
public: float __thiscall ShapeQuadStorage::QueryMaxHeight(class E3::Vector const &,class E3::Vector const &,float)
public: virtual bool __thiscall ShapeQuadStorage::AddObject(class viObject *)
public: virtual bool __thiscall ShapeQuadStorage::RemoveObject(class viObject *)
public: virtual char const * __thiscall ShapeQuadStorage::Name(void)
public: virtual unsigned int __thiscall ShapeQuadStorage::GetCount(void)
public: virtual void __thiscall ShapeQuadStorage::GetObjects(class viSearch *)
public: virtual void __thiscall ShapeQuadStorage::GetStatistics(char * const)
public: virtual void __thiscall ShapeQuadStorage::PrintToFile(char *)
public: virtual void __thiscall ShapeQuadStorage::Purge(unsigned long)
const ShapeQuadStorage::`vftable'
};

#endif

