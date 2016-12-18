#ifndef MAPOBJCONTAINER_H_
#define MAPOBJCONTAINER_H_

class MapObjContainer
{
public: __thiscall MapObjContainer::MapObjContainer(class MapObjContainer const &)
public: __thiscall MapObjContainer::MapObjContainer(void)
public: __thiscall MapObjContainer::~MapObjContainer(void)
public: class MapObjContainer & __thiscall MapObjContainer::operator=(class MapObjContainer const &)
public: class MapObj * & __thiscall MapObjContainer::back(void)
public: class MapObj * & __thiscall MapObjContainer::front(void)
public: class std::list<class MapObj *,class std::allocator<class MapObj *> >::const_iterator __thiscall MapObjContainer::begin(void)const 
public: class std::list<class MapObj *,class std::allocator<class MapObj *> >::const_iterator __thiscall MapObjContainer::end(void)const 
public: class std::list<class MapObj *,class std::allocator<class MapObj *> >::iterator __thiscall MapObjContainer::begin(void)
public: class std::list<class MapObj *,class std::allocator<class MapObj *> >::iterator __thiscall MapObjContainer::end(void)
public: class std::list<class MapObj *,class std::allocator<class MapObj *> >::iterator __thiscall MapObjContainer::erase(class std::list<class MapObj *,class std::allocator<class MapObj *> >::iterator)
public: class std::reverse_bidirectional_iterator<class std::list<class MapObj *,class std::allocator<class MapObj *> >::const_iterator,class MapObj *,class MapObj * const &,class MapObj * const *,int> __thiscall MapObjContainer::rbegin(void)const 
public: class std::reverse_bidirectional_iterator<class std::list<class MapObj *,class std::allocator<class MapObj *> >::const_iterator,class MapObj *,class MapObj * const &,class MapObj * const *,int> __thiscall MapObjContainer::rend(void)const 
public: class std::reverse_bidirectional_iterator<class std::list<class MapObj *,class std::allocator<class MapObj *> >::iterator,class MapObj *,class MapObj * &,class MapObj * *,int> __thiscall MapObjContainer::rbegin(void)
public: class std::reverse_bidirectional_iterator<class std::list<class MapObj *,class std::allocator<class MapObj *> >::iterator,class MapObj *,class MapObj * &,class MapObj * *,int> __thiscall MapObjContainer::rend(void)
public: unsigned int __thiscall MapObjContainer::size(void)const 
public: void __thiscall MapObjContainer::clear(void)
public: void __thiscall MapObjContainer::pop_back(void)
public: void __thiscall MapObjContainer::pop_front(void)
public: void __thiscall MapObjContainer::push_back(class MapObj *)
public: void __thiscall MapObjContainer::push_front(class MapObj *)
};

#endif

