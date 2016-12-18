#ifndef WORLDGENERAL_H_
#define WORLDGENERAL_H_

struct GridInfo planeGrid
struct GridInfo shipGrid

int __cdecl GetCellIndex(struct GridInfo const &,class Box const &,class Vector3 const &)
void __cdecl GetCellIndices(struct GridInfo const &,class Box const &,class Vector3 const &,float,class std::vector<int,class std::allocator<int> > &)
void __cdecl getWorldManager(class WorldManager * *)
void __cdecl getWorldRegistry(class EagleDynamics::Common::FactoryManager * *)

#endif

