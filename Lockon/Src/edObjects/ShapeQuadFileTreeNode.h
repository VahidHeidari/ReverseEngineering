#ifndef SHAPEQUADFILETREENODE_H_
#define SHAPEQUADFILETREENODE_H_

class ShapeQuadFileTreeNode
{
public: class ShapeQuadFileTreeNode & __thiscall ShapeQuadFileTreeNode::operator=(class ShapeQuadFileTreeNode const &)
public: bool __thiscall ShapeQuadFileTreeNode::GetObjectList(class viSearch *,enum IntersectionType)
public: class ShapeQuadFileTreeNode * __thiscall ShapeQuadFileTreeNode::getChild(int)
public: class ShapeQuadFileTreeNode * __thiscall ShapeQuadFileTreeNode::getParent(void)
public: int __thiscall ShapeQuadFileTreeNode::GetObjectList(class ClipVolume *,bool (__cdecl*)(unsigned long,void *),void *,enum IntersectionType)
public: struct std::pair<unsigned long,bool> * __thiscall ShapeQuadFileTreeNode::getObject(int)
public: unsigned int __thiscall ShapeQuadFileTreeNode::GetCount(void)
public: void __thiscall ShapeQuadFileTreeNode::GetStatistics(int *,int *,int *,int *,int *,float *)
public: void __thiscall ShapeQuadFileTreeNode::PrintToFile(struct _iobuf *,int)
};

#endif

