#ifndef PILOTLOGBOOK_H_
#define PILOTLOGBOOK_H_

class PilotLogBook
{
public: __thiscall PilotLogBook::PilotLogBook(class PilotLogBook const &)
public: __thiscall PilotLogBook::PilotLogBook(void)
public: virtual __thiscall PilotLogBook::~PilotLogBook(void)
public: class PilotLogBook & __thiscall PilotLogBook::operator=(class PilotLogBook const &)
public: bool __thiscall PilotLogBook::AddMissionRecords(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::vector<struct MissionRecord,class std::allocator<struct MissionRecord> > &)
public: bool __thiscall PilotLogBook::GetPilotData(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,struct PilotRecord *)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall PilotLogBook::GetCurrentPilotName(void)
public: class std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > > __thiscall PilotLogBook::GetPilotNames(void)
public: virtual bool __thiscall PilotLogBook::initialize(void)
public: virtual bool __thiscall PilotLogBook::process(void)
public: virtual bool __thiscall PilotLogBook::uninitialize(void)
public: virtual enum Status __thiscall PilotLogBook::getStatus(void)const 
public: virtual void __thiscall PilotLogBook::setStatus(enum Status const &)
const PilotLogBook::`vftable'
};

#endif

