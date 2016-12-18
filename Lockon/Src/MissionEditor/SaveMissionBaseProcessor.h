#ifndef SAVEMISSIONBASEPROCESSOR_H_
#define SAVEMISSIONBASEPROCESSOR_H_

class SaveMissionBaseProcessor
{
public: __thiscall SaveMissionBaseProcessor::SaveMissionBaseProcessor(class SaveMissionBaseProcessor const &)
public: __thiscall SaveMissionBaseProcessor::SaveMissionBaseProcessor(enum UI_STRINGS,char const *,char const *)
public: virtual __thiscall SaveMissionBaseProcessor::~SaveMissionBaseProcessor(void)
public: class SaveMissionBaseProcessor & __thiscall SaveMissionBaseProcessor::operator=(class SaveMissionBaseProcessor const &)
public: bool __thiscall SaveMissionBaseProcessor::InitTheData(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,int,class std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > > >,class std::vector<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,class std::allocator<class std:
public: bool __thiscall SaveMissionBaseProcessor::SaveCampaign(char const *,class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
public: bool __thiscall SaveMissionBaseProcessor::SaveMission(char const *)
public: bool __thiscall SaveMissionBaseProcessor::SaveTrack(char const *)
public: static bool __cdecl SaveMissionBaseProcessor::SaveMissionInFile(char const *,class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >,class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
public: virtual bool __thiscall SaveMissionBaseProcessor::FileWasChoosed(char const *,char const *,char const *,enum TwoWayProcessor::TwoWayProcessorFlags)
public: virtual bool __thiscall SaveMissionBaseProcessor::initialize(void)
public: virtual bool __thiscall SaveMissionBaseProcessor::uninitialize(void)
public: virtual void __thiscall SaveMissionBaseProcessor::Notify(bool)
public: virtual void __thiscall SaveMissionBaseProcessor::OnClose(void)
public: virtual void __thiscall SaveMissionBaseProcessor::onCreate(void)
public: virtual void __thiscall SaveMissionBaseProcessor::onPaint(void)
public: void __thiscall SaveMissionBaseProcessor::OnCancel(void)
public: void __thiscall SaveMissionBaseProcessor::OnDelete(void)
public: void __thiscall SaveMissionBaseProcessor::OnSave(void)
public: void __thiscall SaveMissionBaseProcessor::`vbase destructor'(void)
public: void __thiscall SaveMissionBaseProcessor::onClose(void)
public: void __thiscall SaveMissionBaseProcessor::onKeyDown(int,int)
protected: class _bstr_t __thiscall SaveMissionBaseProcessor::StringById(long)const 
protected: virtual struct MSGTABLE const * __thiscall SaveMissionBaseProcessor::getMessageTable(void)const 
protected: void __thiscall SaveMissionBaseProcessor::SetParentProcessor(class TwoWayProcessor const *)
protected: void __thiscall SaveMissionBaseProcessor::shiftProcessor(float,float)
private: bool __thiscall SaveMissionBaseProcessor::ScanFileContent(void)
private: static class _bstr_t __cdecl SaveMissionBaseProcessor::StringById(long,class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
private: void __thiscall SaveMissionBaseProcessor::Finalize(void)
const SaveMissionBaseProcessor::`vbtable'
const SaveMissionBaseProcessor::`vftable'{for `Control'}
const SaveMissionBaseProcessor::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Identifiable>'}
const SaveMissionBaseProcessor::`vftable'{for `Parentable'}
const SaveMissionBaseProcessor::`vftable'{for `System'}
const SaveMissionBaseProcessor::`vftable'{for `TwoWayProcessor'}
const SaveMissionBaseProcessor::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const SaveMissionBaseProcessor::messageTable
private: static struct MSGTABLE_ENTRY const * const SaveMissionBaseProcessor::messageEntries
};

#endif

