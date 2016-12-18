#ifndef VERTSTORAGE_H_
#define VERTSTORAGE_H_

class VertStorage
{
public: __thiscall VertStorage::VertStorage(void)
public: __thiscall VertStorage::~VertStorage(void)
public: class VertStorage & __thiscall VertStorage::operator=(class VertStorage const &)
public: static bool __cdecl VertStorage::removeVerts(class gShapeObject *)
public: static struct MapSystem::sVertsIndexes * __cdecl VertStorage::getVerts(class gShapeObject *)
public: static struct MapSystem::sVertsIndexes * __cdecl VertStorage::setVerts(class gShapeObject *,struct MapSystem::sVertsIndexes *)
protected: static class std::map<class gShapeObject const *,struct MapSystem::sVertsIndexes *,struct std::less<class gShapeObject const *>,class std::allocator<struct MapSystem::sVertsIndexes *> > VertStorage::shapeVertMap
};

#endif

