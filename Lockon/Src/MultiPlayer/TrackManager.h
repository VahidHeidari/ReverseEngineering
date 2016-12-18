#ifndef TRACKMANAGER_H_
#define TRACKMANAGER_H_

class TrackManager
{
public: __thiscall TrackManager::TrackManager(class TrackManager const &)
public: __thiscall TrackManager::TrackManager(void)
public: virtual __thiscall TrackManager::~TrackManager(void)
public: class TrackManager & __thiscall TrackManager::operator=(class TrackManager const &)
public: virtual bool __thiscall TrackManager::DeleteTrack(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall TrackManager::OpenTrack(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,struct IStream * *,bool)
public: virtual bool __thiscall TrackManager::SaveTrack(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall TrackManager::append(enum TrackPart const &,struct IStream *)
public: virtual bool __thiscall TrackManager::derive(enum TrackPart const &,struct IStream * *)
public: virtual bool __thiscall TrackManager::empty(enum TrackPart const &)const 
public: virtual bool __thiscall TrackManager::finish(bool,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual bool __thiscall TrackManager::flush(enum TrackPart const &)
public: virtual bool __thiscall TrackManager::get(enum TrackPart const &,struct IStream * *)
public: virtual bool __thiscall TrackManager::getFitFileName(int const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *)
public: virtual bool __thiscall TrackManager::isCycled(void)const 
public: virtual bool __thiscall TrackManager::isEditing(void)const 
public: virtual bool __thiscall TrackManager::isFullRedact(void)const 
public: virtual bool __thiscall TrackManager::isInvariabled(void)const 
public: virtual bool __thiscall TrackManager::isReading(void)const 
public: virtual bool __thiscall TrackManager::isStarted(void)const 
public: virtual bool __thiscall TrackManager::isWasEdited(void)const 
public: virtual bool __thiscall TrackManager::isWriting(void)const 
public: virtual bool __thiscall TrackManager::printSubtitle(bool,unsigned long const &,double const &)
public: virtual bool __thiscall TrackManager::pushSubtitle(bool,double const &)
public: virtual bool __thiscall TrackManager::put(enum TrackPart const &,struct IStream *)
public: virtual bool __thiscall TrackManager::reopen(void)
public: virtual bool __thiscall TrackManager::start(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,enum TrackMode const &,enum TrackType *,bool)
public: virtual class Track * __thiscall TrackManager::getTrackPart(enum TrackPart const &)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall TrackManager::getQuitStr(void)const 
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall TrackManager::getTrackPath(void)const 
public: virtual double const & __thiscall TrackManager::getFinishTime(void)const 
public: virtual enum TrackType const & __thiscall TrackManager::getType(void)const 
public: virtual int __thiscall TrackManager::getNextFileName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > *)
public: virtual long __thiscall TrackManager::getVersion(void)const 
public: virtual struct Reaction const & __thiscall TrackManager::bottom(void)const 
public: virtual struct Reaction const & __thiscall TrackManager::top(void)const 
public: virtual void __thiscall TrackManager::CloseTrack(void)
public: virtual void __thiscall TrackManager::cancelInterrupt(void)
public: virtual void __thiscall TrackManager::clear(enum TrackPart const &)
public: virtual void __thiscall TrackManager::displayCursor(bool)
public: virtual void __thiscall TrackManager::displayIcon(enum TrackIcon const &,bool)
public: virtual void __thiscall TrackManager::edit(void)
public: virtual void __thiscall TrackManager::interruptTracking(class ControlListener *,bool,bool)
public: virtual void __thiscall TrackManager::pop(void)
public: virtual void __thiscall TrackManager::push(struct Reaction const &)
public: virtual void __thiscall TrackManager::pushRedact(struct Reaction const &)
public: virtual void __thiscall TrackManager::setCycled(bool)
public: virtual void __thiscall TrackManager::setInvariabled(bool)
public: virtual void __thiscall TrackManager::setSuspended(bool)
protected: void __thiscall TrackManager::abnormal(void)
protected: void __thiscall TrackManager::eraseDirectory(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
const TrackManager::`vftable'
};

#endif

