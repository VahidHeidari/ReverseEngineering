#ifndef HIERARCHYLAYER_H_
#define HIERARCHYLAYER_H_

class HierarchyLayer
{
public: __thiscall HierarchyLayer::HierarchyLayer(class HierarchyLayer const &)
public: __thiscall HierarchyLayer::HierarchyLayer(void)
public: virtual __thiscall HierarchyLayer::~HierarchyLayer(void)
public: class HierarchyLayer & __thiscall HierarchyLayer::operator=(class HierarchyLayer const &)
public: virtual bool __thiscall HierarchyLayer::Subdivide(void)
public: virtual void __thiscall HierarchyLayer::Build(void)
public: virtual void __thiscall HierarchyLayer::CalculateBoxes(void)
public: void __thiscall HierarchyLayer::SetAcceptance(bool)
protected: virtual bool __thiscall HierarchyLayer::PreserveHere(class HierarchyNode *)
const HierarchyLayer::`vftable'
};

#endif

