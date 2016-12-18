#ifndef HIERARCHYLINEARNODE_H_
#define HIERARCHYLINEARNODE_H_

class HierarchyLinearNode
{
public: __thiscall HierarchyLinearNode::HierarchyLinearNode(class HierarchyLinearNode const &)
public: __thiscall HierarchyLinearNode::HierarchyLinearNode(void)
public: virtual __thiscall HierarchyLinearNode::~HierarchyLinearNode(void)
public: class HierarchyLinearNode & __thiscall HierarchyLinearNode::operator=(class HierarchyLinearNode const &)
public: virtual bool __thiscall HierarchyLinearNode::AddObject(class HierarchyNode *)
public: virtual bool __thiscall HierarchyLinearNode::GetObjects(class viSearch_Implement *,enum IntersectionType)
public: virtual bool __thiscall HierarchyLinearNode::RemoveObject(class HierarchyNode *)
public: virtual class Box const & __thiscall HierarchyLinearNode::GetBox(void)const 
public: virtual unsigned int __thiscall HierarchyLinearNode::GetCount(void)
public: virtual void __thiscall HierarchyLinearNode::DeleteObjects(void)
protected: bool __thiscall HierarchyLinearNode::WasInSearch(class viSearch *)
protected: virtual bool __thiscall HierarchyLinearNode::PreserveHere(class HierarchyNode *)
const HierarchyLinearNode::`vftable'
};

#endif

