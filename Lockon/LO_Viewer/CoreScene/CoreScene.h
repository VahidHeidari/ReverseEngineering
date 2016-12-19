#ifndef CORESCENE_H_
#define CORESCENE_H_

namespace misc
{

class CoreObject
{
public: __thiscall CoreObject(class CoreObject const &)
public: __thiscall CoreObject(void)
public: virtual __thiscall ~CoreObject(void)
public: class CoreObject & __thiscall operator=(class CoreObject const &)
public: class Node * __thiscall getNode(void)
private: void __thiscall setNode(class misc::Node *)
protected: virtual bool __thiscall update(class CoreObject *)
const misc::CoreObject::`vftable'
};

class Export
{
public: __thiscall Export(class misc::Export const &)
public: __thiscall Export(void)
public: virtual __thiscall ~Export(void)
public: class Export & __thiscall operator=(class Export const &)
public: void __thiscall cancel(void)
public: bool __thiscall export(class Scene *,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: class Scene * __thiscall getScene(void)
public: bool __thiscall isCancel(void)
protected: virtual class CoreObject * __thiscall convert(class CoreObject *)
protected: virtual bool __thiscall exportNode(class Node *,class Node *,class Node *)
protected: virtual bool __thiscall isValidInputData(class Scene *,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
protected: virtual void __thiscall postExport(void)
protected: virtual void __thiscall preExport(void)
protected: virtual void __thiscall preSave(void)
private: void __thiscall buildValidity(void)
private: void __thiscall reset(void)
const misc::Export::`vftable'
};

class Node
{
public: __thiscall Node(class Node const &)
public: virtual __thiscall ~Node(void)
public: class Node & __thiscall operator=(class Node const &)
public: bool __thiscall attach(class Node *,class Node *)
public: bool __thiscall attachChild(class Node *,class Node *)
public: class Node * __thiscall child(void)
public: bool __thiscall detach(void)
public: bool __thiscall detachChild(class Node *)
public: int __thiscall getNumberOfChildren(void)
public: class CoreObject * __thiscall getObject(void)
public: class Node * __thiscall getParent(void)
public: class Scene * __thiscall getScene(void)
public: int __thiscall index(void)
public: bool __thiscall isInHierarchy(void)
public: bool __thiscall isRoot(void)
public: class Node * __thiscall next(void)
public: class CoreObject * __thiscall setObject(class CoreObject *)
public: bool __thiscall update(class Node *)
private: __thiscall Node(class CoreObject *)
private: __thiscall Node(void)
private: void __thiscall setScene(class Scene *)
const misc::Node::`vftable'
};

class Scene
{
public: __thiscall Scene(class Scene const &)
public: __thiscall Scene(void)
public: virtual __thiscall ~Scene(void)
public: class Scene & __thiscall operator=(class Scene const &)
public: class Node * __thiscall getLastTreeNode(void)
public: class Node * __thiscall getRootNode(void)
public: void __thiscall init(void)
public: class Node * __thiscall nextBranchNode(class Node *)
public: class Node * __thiscall prevBranchNode(class Node *)
public: class Node * __thiscall registerNode(class CoreObject *)
public: virtual void __thiscall reset(void)
public: class CoreObject * __thiscall unregisterNode(class Node *,class std::set<class Node *,struct std::less<class Node *>,class std::allocator<class Node *> > *)
public: bool __thiscall update(void)
protected: void __thiscall deleteNode(class Node *)
private: bool __thiscall attachNode(class Node *,class Node *,class Node *)
private: bool __thiscall detachNode(class Node *)
private: bool __thiscall isInitialized(void)
const misc::Scene::`vftable'
};

}		/// misc

#endif

