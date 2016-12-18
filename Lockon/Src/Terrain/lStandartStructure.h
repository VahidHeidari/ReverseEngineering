#ifndef LSTANDARTSTRUCTURE_H_
#define LSTANDARTSTRUCTURE_H_

class lStandardStructure
{
public: __thiscall lStandartStructure::lStandartStructure(class lStandartStructure const &)
public: __thiscall lStandartStructure::lStandartStructure(void)
public: virtual __thiscall lStandartStructure::~lStandartStructure(void)
public: class lStandartStructure & __thiscall lStandartStructure::operator=(class lStandartStructure const &)
public: bool __thiscall lStandartStructure::IsFallInProgress(void)
public: static class lLandObject * __cdecl lStandartStructure::CreateObject(void)
public: virtual bool __thiscall lStandartStructure::FallDown(void)
public: virtual class Graphics::Model * __thiscall lStandartStructure::GetModel(void)
public: virtual class HeapVector<struct Graphics::DynamicParam> const & __thiscall lStandartStructure::GetDrawArguments(void)
public: virtual class Position3 const & __thiscall lStandartStructure::GetPosition(void)
public: virtual class cPosition & __thiscall lStandartStructure::Position(double)
public: virtual class gShapeObject * __thiscall lStandartStructure::Shape(double)
public: virtual void __thiscall lStandartStructure::Degrade(void)
public: virtual void __thiscall lStandartStructure::PostCollisionProcessing(struct wsCollisionData *,unsigned long)
protected: static void __cdecl lStandartStructure::RecalculateArgs(double)
protected: virtual void __thiscall lStandartStructure::CreateDynamicData(void)
protected: virtual void __thiscall lStandartStructure::CreateFires(void)
protected: virtual void __thiscall lStandartStructure::CreateSmokeCloud(void)
const lStandartStructure::`vftable'{for `Graphics::ModelInstance'}
const lStandartStructure::`vftable'{for `IwNetObject'}
const lStandartStructure::`vftable'{for `lLandObject'}
const lStandartStructure::`vftable'{for `viObject'}

public: static class RandomObject lStandartStructure::randomEvenly
protected: static class HeapVector<struct Graphics::DynamicParam> lStandartStructure::globalArgs
protected: static double lStandartStructure::argsTime
};

#endif

