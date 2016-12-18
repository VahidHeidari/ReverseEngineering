#ifndef NL_H_
#define NL_H_

namespace nl
{

class lRegion
{
public: __thiscall nl::lRegion::lRegion(class nl::lRegion const &)
public: __thiscall nl::lRegion::lRegion(void)
public: virtual __thiscall nl::lRegion::~lRegion(void)
public: class nl::lRegion & __thiscall nl::lRegion::operator=(class nl::lRegion const &)
public: class nl::lSquare & __thiscall nl::lRegion::getSubSquare(int)
public: class nl::lSquare & __thiscall nl::lRegion::getSubSquare(int,int)
public: float __thiscall nl::lRegion::Distance2(class cPosition *)
public: int __thiscall nl::lRegion::getSubSquareCount(void)
public: virtual void __thiscall nl::lRegion::Init(void)
const nl::lRegion::`vftable'
};

class lSquare
{
public: __thiscall nl::lSquare::lSquare(class nl::lSquare const &)
public: __thiscall nl::lSquare::lSquare(void)
public: virtual __thiscall nl::lSquare::~lSquare(void)
public: class nl::lSquare & __thiscall nl::lSquare::operator=(class nl::lSquare const &)
public: class cPosition const & __thiscall nl::lSquare::GetPos(void)
public: float __thiscall nl::lSquare::GetMaxY(void)
public: virtual void __thiscall nl::lSquare::Init(void)
const nl::lSquare::`vftable'
};

}		/// namespace nl

#endif

