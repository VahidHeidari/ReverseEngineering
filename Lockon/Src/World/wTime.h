#ifndef WTIME_H_
#define WTIME_H_

#include "Common.h"

class wTime
{
public: __thiscall wTime::wTime(class wTime const &)
public: __thiscall wTime::wTime(double)
public: __thiscall wTime::wTime(void)
public: virtual __thiscall wTime::~wTime(void)
public: static bool __cdecl wTime::CommandsTraceIsOn(void)
public: static bool __cdecl wTime::InsideTraceInterval(void)
public: static bool __cdecl wTime::ObjectsTraceIsOn(void)
public: static bool __cdecl wTime::RecordTrackByDefault(void)
public: static bool __cdecl wTime::TraceDurationIsOn(void)
public: static bool __cdecl wTime::TraceFramesIsOn(void)
public: static bool __cdecl wTime::TraceIsOn(void)
public: class wTime & __thiscall wTime::operator=(class wTime const &)
public: bool __thiscall wTime::IsActive(void)
public: static class EagleDynamics::Common::AsyncLogFile * __cdecl wTime::GetLog(void)
public: static class std::priority_queue<double,class std::vector<double,class std::allocator<double> >,struct std::greater<double> > wTime::stopTimes
public: static double __cdecl wTime::GetAbsoluteModelTime(void)
public: static double __cdecl wTime::GetConstTimeStep(void)
public: static double __cdecl wTime::GetModelTime(void)
public: static double __cdecl wTime::GetModelTime0(void)
public: static double __cdecl wTime::roundUp(double const &)
public: static void __cdecl wTime::Break(void)
public: static void __cdecl wTime::Clear(void)
public: static void __cdecl wTime::DoActionsUntil(double)
public: static void __cdecl wTime::KillMe(class Suicide *)
public: static void __cdecl wTime::ParseConfig(void)
public: static void __cdecl wTime::SetLogFile(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >)
public: static void __cdecl wTime::SetModelTime(double)
public: static void __cdecl wTime::SetModelTime0(double)
public: static void __cdecl wTime::SetTraceInterval(double,double)
public: static void __cdecl wTime::Start(void)
public: static void __cdecl wTime::Stop(void)
public: static void __cdecl wTime::TraceDurationOff(void)
public: static void __cdecl wTime::TraceDurationOn(void)
public: static void __cdecl wTime::TraceFramesOff(void)
public: static void __cdecl wTime::TraceFramesOn(void)
public: static void __cdecl wTime::TraceOff(void)
public: static void __cdecl wTime::TraceOn(void)
public: static void __cdecl wTime::serializeStatic(class EagleDynamics::Common::Serializer &)
public: virtual void __thiscall wTime::MissedEvent(void)
public: virtual void __thiscall wTime::NextEvent(void)
public: virtual void __thiscall wTime::Profile(struct TimeAndDuration &)
public: virtual void __thiscall wTime::serialize(class EagleDynamics::Common::Serializer &)
public: void __thiscall wTime::Cancel(void)
public: void __thiscall wTime::InsertToCalendar(void)
public: void __thiscall wTime::KillMe(void)
public: void __thiscall wTime::PutToSleep(void)
public: void __thiscall wTime::RemoveFromCalendar(void)
protected: static bool wTime::bCommandsTraceOn
protected: static bool wTime::bObjectsTraceOn
protected: static bool wTime::bRecordTrackByDefault
protected: static bool wTime::bTimeTraceOn
protected: static bool wTime::bTraceDuration
protected: static bool wTime::bTraceFrames
protected: static bool wTime::bTraceOn
protected: static double wTime::modelTime
protected: static double wTime::modelTime0
protected: static double wTime::stepMaxModelTime
protected: static double wTime::tConstStep
protected: static double wTime::tTraceBegin
protected: static double wTime::tTraceEnd
protected: static double wTime::traceDurationMin
protected: static bool __cdecl wTime::CheckTraceName(class wTime *)
protected: static class std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > wTime::excludeNames
protected: static class std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > wTime::traceNames
private: static class std::priority_queue<class wTimeNotifier *,class std::vector<class wTimeNotifier *,class std::allocator<class wTimeNotifier *> >,struct PtrGreater> wTime::calendar
private: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > wTime::logFile
private: static class std::stack<class Suicide *,class std::deque<class Suicide *,class std::allocator<class Suicide *> > > wTime::killStack
const wTime::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Serializable>'}
const wTime::`vftable'{for `Suicide'}

private: static class EagleDynamics::Common::AsyncLogFile * wTime::log
private: static class EagleDynamics::Common::ThreadLocker wTime::calendarLock
};

#endif

