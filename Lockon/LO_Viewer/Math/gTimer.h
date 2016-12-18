#ifndef GTIMER_H_
#define GTIMER_H_

class gTimer
{
public: __thiscall gTimer::gTimer(void)
public: __thiscall gTimer::~gTimer(void)
public: class gTimer & __thiscall gTimer::operator=(class gTimer const &)
public: float __thiscall gTimer::result(void)
public: void __thiscall gTimer::clear(void)
public: void __thiscall gTimer::start(void)
public: void __thiscall gTimer::stop(void)
private: __int64 __cdecl gTimer::GetTSC(void)
private: float __cdecl gTimer::GetTSCinterval(void *)
private: static float gTimer::m_constCPUfactor
private: static float gTimer::m_constCPUspeed
};

#endif

