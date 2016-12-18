#ifndef BINARYSCENEANDTREE_H_
#define BINARYSCENEANDTREE_H_

namespace BinarySceneAndTree
{

class File
{
public: __thiscall BinarySceneAndTree::File::File(class BinarySceneAndTree::File const &)
public: __thiscall BinarySceneAndTree::File::File(void)
public: __thiscall BinarySceneAndTree::File::~File(void)
public: class BinarySceneAndTree::File & __thiscall BinarySceneAndTree::File::operator=(class BinarySceneAndTree::File const &)
public: class cPosition * __thiscall BinarySceneAndTree::File::getObjectById(unsigned long,char * &)
public: static class BinarySceneAndTree::File * __cdecl BinarySceneAndTree::File::BuildFile(class RegisterManager *,class ShapeQuadStorage &,class std::list<struct BinarySceneAndTree::LinkDecl,class std::allocator<struct BinarySceneAndTree::LinkDecl> > &,unsigned long,unsigned long,class misc::mmf_write &)
public: static class BinarySceneAndTree::File * __cdecl BinarySceneAndTree::File::Open(char const *,class misc::mmf &)
public: struct BinarySceneAndTree::LinkNode * __thiscall BinarySceneAndTree::File::getLinkNode(enum BinarySceneAndTree::LinkNodeType,char const *)
public: struct BinarySceneAndTree::LinkNode * __thiscall BinarySceneAndTree::File::getLinkNode(struct BinarySceneAndTree::LinkKeyNode const &)
public: struct BinarySceneAndTree::LinkNode * __thiscall BinarySceneAndTree::File::getLinkNode(unsigned long)
public: struct BinarySceneAndTree::Object * __thiscall BinarySceneAndTree::File::getObject(unsigned long)
public: void __thiscall BinarySceneAndTree::File::GetIdInterval(unsigned long &,unsigned long &)
protected: static void __cdecl BinarySceneAndTree::File::WriteNodeChilds(class BinarySceneAndTree::TreeNode *,class ShapeQuadTreeNode *,class std::list<struct BinarySceneAndTree::WriteNodeStr,class std::allocator<struct BinarySceneAndTree::WriteNodeStr> > &,class misc::mmf_write &)
};

class TreeNode
{
public: __thiscall BinarySceneAndTree::TreeNode::TreeNode(class BinarySceneAndTree::TreeNode *,class ShapeQuadTreeNode *,class std::list<struct BinarySceneAndTree::WriteNodeStr,class std::allocator<struct BinarySceneAndTree::WriteNodeStr> > &,class misc::mmf_write &)
public: __thiscall BinarySceneAndTree::TreeNode::TreeNode(class BinarySceneAndTree::TreeNode const &)
public: __thiscall BinarySceneAndTree::TreeNode::~TreeNode(void)
public: bool __thiscall BinarySceneAndTree::TreeNode::GetObjectList(class viSearch *,enum IntersectionType)
public: class BinarySceneAndTree::TreeNode & __thiscall BinarySceneAndTree::TreeNode::operator=(class BinarySceneAndTree::TreeNode const &)
public: class BinarySceneAndTree::TreeNode * __thiscall BinarySceneAndTree::TreeNode::getChild(int)
public: class BinarySceneAndTree::TreeNode * __thiscall BinarySceneAndTree::TreeNode::getParent(void)
public: int __thiscall BinarySceneAndTree::TreeNode::GetObjectList(class ClipVolume *,bool (__cdecl*)(unsigned long,void *),void *,enum IntersectionType)
public: struct std::pair<unsigned long,bool> * __thiscall BinarySceneAndTree::TreeNode::getObject(int)
public: unsigned int __thiscall BinarySceneAndTree::TreeNode::GetCount(void)
public: void __thiscall BinarySceneAndTree::TreeNode::GetStatistics(int *,int *,int *,int *,int *,float *)
public: void __thiscall BinarySceneAndTree::TreeNode::PrintToFile(struct _iobuf *,int)
};

}		/// namespace BinarySceneAndTree

#endif

