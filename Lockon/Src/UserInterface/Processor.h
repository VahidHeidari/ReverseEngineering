#ifndef PROCESSOR_H_
#define PROCESSOR_H_

class Processor
{
public: __thiscall Processor::Processor(class Processor const &)
public: __thiscall Processor::Processor(void)
public: virtual __thiscall Processor::~Processor(void)
public: class Processor & __thiscall Processor::operator=(class Processor const &)
public: virtual bool __thiscall Processor::initialize(void)
public: virtual bool __thiscall Processor::uninitialize(void)
public: virtual void __thiscall Processor::log(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall Processor::setIdentifier(class EagleDynamics::Common::Identifier const &)
const Processor::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Identifiable>'}
const Processor::`vftable'{for `System'}
};

#endif
