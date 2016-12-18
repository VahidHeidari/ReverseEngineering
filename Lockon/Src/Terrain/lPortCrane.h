#ifndef LPORTCRANE_H_
#define LPORTCRANE_H_

class lPortCrane
{
public: __thiscall lPortCrane::lPortCrane(class lPortCrane const &)
public: __thiscall lPortCrane::lPortCrane(void)
public: virtual __thiscall lPortCrane::~lPortCrane(void)
public: class lPortCrane & __thiscall lPortCrane::operator=(class lPortCrane const &)
public: static class lLandObject * __cdecl lPortCrane::CreateObject(void)
public: virtual class HeapVector<struct Graphics::DynamicParam> const & __thiscall lPortCrane::GetDrawArguments(void)
private: void __thiscall lPortCrane::RecalculateArgs(double)
const lPortCrane::`vftable'{for `Graphics::ModelInstance'}
const lPortCrane::`vftable'{for `IwNetObject'}
const lPortCrane::`vftable'{for `lLandObject'}
const lPortCrane::`vftable'{for `viObject'}

private: static double const lPortCrane::timeRotate180
private: static double const lPortCrane::timeStrelaDown
private: static double const lPortCrane::total_time
};

#endif

