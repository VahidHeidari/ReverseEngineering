#ifndef SHAPEQUADTREENODE_H_
#define SHAPEQUADTREENODE_H_

class ShapeQuadTreeNode
{
public: __thiscall ShapeQuadTreeNode::ShapeQuadTreeNode(class ShapeQuadTreeNode *,short,short)
public: __thiscall ShapeQuadTreeNode::ShapeQuadTreeNode(class ShapeQuadTreeNode const &)
public: __thiscall ShapeQuadTreeNode::ShapeQuadTreeNode(float,float,float,float)
public: __thiscall ShapeQuadTreeNode::~ShapeQuadTreeNode(void)
public: class ShapeQuadTreeNode & __thiscall ShapeQuadTreeNode::operator=(class ShapeQuadTreeNode const &)
public: bool __thiscall ShapeQuadTreeNode::GetObjectList(class viSearch *,enum IntersectionType)
public: bool __thiscall ShapeQuadTreeNode::RemoveObject(class viObjectFlatShape *)
public: unsigned int __thiscall ShapeQuadTreeNode::GetCount(void)
public: void __thiscall ShapeQuadTreeNode::AddObject(class viObjectFlatShape *,bool)
public: void __thiscall ShapeQuadTreeNode::GetStatistics(int *,int *,int *,int *,int *,float *)
public: void __thiscall ShapeQuadTreeNode::PrintToFile(struct _iobuf *,int)
protected: bool __thiscall ShapeQuadTreeNode::EraseObject(class viObjectFlatShape *)
protected: bool __thiscall ShapeQuadTreeNode::NeedsCollapsing(void)
protected: bool __thiscall ShapeQuadTreeNode::NeedsDivision(void)
protected: enum IntersectionType __thiscall ShapeQuadTreeNode::IsInCell(class viObjectFlatShape *)
protected: void __thiscall ShapeQuadTreeNode::Collapse(bool)
protected: void __thiscall ShapeQuadTreeNode::InsertObject(class viObjectFlatShape *,bool)
protected: void __thiscall ShapeQuadTreeNode::Subdivide(void)
};

#endif

