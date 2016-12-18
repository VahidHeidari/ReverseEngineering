#ifndef VIOBJECTNODE_H_
#define VIOBJECTNODE_H_

class viObjectNode
{
public: __thiscall viObjectNode::viObjectNode(class viObjectNode const &)
public: __thiscall viObjectNode::viObjectNode(unsigned long,class viObjectNode *)
public: virtual __thiscall viObjectNode::~viObjectNode(void)
public: class viObjectNode & __thiscall viObjectNode::operator=(class viObjectNode const &)
public: class viObjectNode * __thiscall viObjectNode::Child(int)const 
public: class viObjectNode * __thiscall viObjectNode::Parent(void)const 
public: int __thiscall viObjectNode::ChildCount(void)const 
public: virtual bool __thiscall viObjectNode::UseChildren(double,enum viArgumentPurpose)
public: virtual void __thiscall viObjectNode::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall viObjectNode::ChangeParent(class viObjectNode *)
private: int __thiscall viObjectNode::AddChild(class viObjectNode *)
private: void __thiscall viObjectNode::NullParent(void)
private: void __thiscall viObjectNode::RemoveChild(int)
public: void __thiscall viObjectNode::`default constructor closure'(void)
const viObjectNode::`vftable'{for `Graphics::ModelInstance'}
const viObjectNode::`vftable'{for `viObject'}
};

#endif

