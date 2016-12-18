#ifndef TWOWAYPROCESSOR_H_
#define TWOWAYPROCESSOR_H_

class TwoWayProcessor
{
public: __thiscall TwoWayProcessor::TwoWayProcessor(class TwoWayProcessor const &)
public: __thiscall TwoWayProcessor::TwoWayProcessor(void)
public: virtual __thiscall TwoWayProcessor::~TwoWayProcessor(void)
public: class TwoWayProcessor & __thiscall TwoWayProcessor::operator=(class TwoWayProcessor const &)
public: virtual bool __thiscall TwoWayProcessor::FileWasChoosed(char const *,char const *,char const *,enum TwoWayProcessor::TwoWayProcessorFlags)
public: virtual bool __thiscall TwoWayProcessor::Notify(bool,char const *,char const *)
public: virtual void __thiscall TwoWayProcessor::Add(class Parentable *)
public: virtual void __thiscall TwoWayProcessor::Notify(bool)
public: virtual void __thiscall TwoWayProcessor::Notify(bool,class Parentable *)
public: virtual void __thiscall TwoWayProcessor::Notify(void)
public: virtual void __thiscall TwoWayProcessor::Remove(class Parentable *)
const TwoWayProcessor::`vftable'
};

#endif

