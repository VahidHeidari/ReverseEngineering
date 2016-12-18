#ifndef USERINTERFACE_H_
#define USERINTERFACE_H_

struct HINSTANCE__ * __cdecl getDllHandle(char const *)
void __cdecl deleteHint(void)
void __cdecl getProcessorsRegistry(class EagleDynamics::Common::FactoryManager * *)
void __cdecl hideHint(bool)
void __cdecl paintHint(void)
void __cdecl setControlManager(class ControlManager *)
void __cdecl showHint(char const *,class Control *)
bool __cdecl operator!=(class TPoint<float> const &,class TPoint<float> const &)
class Hint * __cdecl getHint(void)
double __cdecl getDistance(class TPoint<float> const &,class TPoint<float> const &)
double __cdecl getDistanceToSegment(class TPoint<float> const &,class TPoint<float> const &,class TPoint<float> const &)
int __cdecl GetNearestInt(double)
class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl makePath(char const *,char const *)

class TPoint<float> __cdecl operator+(class TPoint<float> const &,class TPoint<float> const &)
class TPoint<float> __cdecl operator/(class TPoint<float> const &,class TPoint<float> const &)
public: union DWord & __thiscall DWord::operator=(union DWord const &)

#endif
