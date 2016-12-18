#ifndef TRACK_H_
#define TRACK_H_

class Track
{
public: __thiscall Track::Track(class Track const &)
public: __thiscall Track::Track(void)
public: virtual __thiscall Track::~Track(void)
public: class Track & __thiscall Track::operator=(class Track const &)
public: enum TrackMode const & __thiscall Track::getMode(void)const 
public: virtual void __thiscall Track::setMode(enum TrackMode const &)
protected: bool __thiscall Track::open(struct IStorage *,enum TrackMode const &,unsigned short const *)
protected: void __thiscall Track::closing(void)
const Track::`vftable'
};

#endif

