#ifndef GROUPPROCESSOR_H_
#define GROUPPROCESSOR_H_

class GroupProcessor
{
public: __thiscall GroupProcessor::GroupProcessor(class GroupProcessor const &)
public: __thiscall GroupProcessor::GroupProcessor(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,unsigned long,int)
public: virtual __thiscall GroupProcessor::~GroupProcessor(void)
public: class GroupProcessor & __thiscall GroupProcessor::operator=(class GroupProcessor const &)
public: bool __thiscall GroupProcessor::switchTargeting(bool)
public: bool __thiscall GroupProcessor::zoom100(void)
public: bool __thiscall GroupProcessor::zoomBackward(void)
public: bool __thiscall GroupProcessor::zoomForward(void)
public: bool __thiscall GroupProcessor::zoomModeOff(bool)
public: bool __thiscall GroupProcessor::zoomModeOn(bool)
public: class _com_ptr_t<class _com_IIID<struct ICountry,&struct __s_GUID _GUID_3704fc6b_41cc_408a_b5f0_d962d92ed09f> > __thiscall GroupProcessor::getCountry(void)
public: class _com_ptr_t<class _com_IIID<struct IGroup,&struct __s_GUID _GUID_5db2dc56_6086_430b_bab5_89e7f2713e3c> > __thiscall GroupProcessor::addGroup(double const &,double const &,double const &)
public: class _com_ptr_t<class _com_IIID<struct IGroup,&struct __s_GUID _GUID_5db2dc56_6086_430b_bab5_89e7f2713e3c> > __thiscall GroupProcessor::addGroup(void)
public: class _com_ptr_t<class _com_IIID<struct IGroup,&struct __s_GUID _GUID_5db2dc56_6086_430b_bab5_89e7f2713e3c> > __thiscall GroupProcessor::getGroup(void)
public: class _com_ptr_t<class _com_IIID<struct IGroups,&struct __s_GUID _GUID_fd7ee3df_b013_495e_b14d_3127b9c04ec7> > __thiscall GroupProcessor::getGroups(void)
public: class _com_ptr_t<class _com_IIID<struct ISkill,&struct __s_GUID _GUID_0c811ed3_3c8b_4386_995d_186bc080eb2e> > __thiscall GroupProcessor::getSkill(void)
public: class _com_ptr_t<class _com_IIID<struct ISubGroup,&struct __s_GUID _GUID_1412e78f_49a3_48dd_b837_06f96aebeeb5> > __thiscall GroupProcessor::addSubgroup(void)
public: class _com_ptr_t<class _com_IIID<struct ISubGroup,&struct __s_GUID _GUID_1412e78f_49a3_48dd_b837_06f96aebeeb5> > __thiscall GroupProcessor::getSubgroup(void)
public: class _com_ptr_t<class _com_IIID<struct ISubGroups,&struct __s_GUID _GUID_757afdc9_daf6_4d84_9611_b34975aa0f9d> > __thiscall GroupProcessor::getSubgroups(void)
public: class _com_ptr_t<class _com_IIID<struct ITask,&struct __s_GUID _GUID_0d65cbd5_1a48_4db6_b773_d1e05023263d> > __thiscall GroupProcessor::getTask(void)
public: class _com_ptr_t<class _com_IIID<struct IUnit,&struct __s_GUID _GUID_b201985d_cc3e_4aa1_aca6_5b77c761821a> > __thiscall GroupProcessor::addUnit(int,long)
public: class _com_ptr_t<class _com_IIID<struct IUnit,&struct __s_GUID _GUID_b201985d_cc3e_4aa1_aca6_5b77c761821a> > __thiscall GroupProcessor::getUnit(void)
public: class _com_ptr_t<class _com_IIID<struct IUnit,&struct __s_GUID _GUID_b201985d_cc3e_4aa1_aca6_5b77c761821a> > __thiscall GroupProcessor::replaceUnit(int,bool)
public: class _com_ptr_t<class _com_IIID<struct IUnitSpecification,&struct __s_GUID _GUID_282f8931_af69_44df_87f5_c6bb8dcaf7f9> > __thiscall GroupProcessor::getType(void)
public: class _com_ptr_t<class _com_IIID<struct IUnits,&struct __s_GUID _GUID_ab20b8c0_0c75_4691_9814_59196b9b8792> > __thiscall GroupProcessor::getUnits(void)
public: double __thiscall GroupProcessor::getRouteAngle(void)
public: int __thiscall GroupProcessor::getEnemyType(void)
public: int __thiscall GroupProcessor::getGroupsQuantity(void)
public: static class GroupProcessor * __cdecl GroupProcessor::find(void)
public: static class GroupProcessor * __cdecl GroupProcessor::open(unsigned long)
public: static void __cdecl GroupProcessor::syncAllAircraftCarrierInGroup(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >,bool)
public: static void __cdecl GroupProcessor::syncWithAircraftCarrier(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >,bool)
public: virtual bool __thiscall GroupProcessor::initialize(void)
public: virtual bool __thiscall GroupProcessor::process(void)
public: virtual bool __thiscall GroupProcessor::uninitialize(void)
public: virtual void __thiscall GroupProcessor::onPaint(void)
public: virtual void __thiscall GroupProcessor::place(long,long,long)
public: virtual void __thiscall GroupProcessor::setGroupType(unsigned long)
public: void __thiscall GroupProcessor::clearRouteAngle(void)
public: void __thiscall GroupProcessor::hideGroup(class _com_ptr_t<class _com_IIID<struct IGroup,&struct __s_GUID _GUID_5db2dc56_6086_430b_bab5_89e7f2713e3c> >)
public: void __thiscall GroupProcessor::hideGroup(void)
public: void __thiscall GroupProcessor::onHideTheGroup(void)
public: void __thiscall GroupProcessor::removeGroup(class _com_ptr_t<class _com_IIID<struct IGroup,&struct __s_GUID _GUID_5db2dc56_6086_430b_bab5_89e7f2713e3c> >)
public: void __thiscall GroupProcessor::removeGroup(void)
public: void __thiscall GroupProcessor::removeSubgroup(class _com_ptr_t<class _com_IIID<struct ISubGroup,&struct __s_GUID _GUID_1412e78f_49a3_48dd_b837_06f96aebeeb5> >)
public: void __thiscall GroupProcessor::removeSubgroup(void)
public: void __thiscall GroupProcessor::removeUnit(class _com_ptr_t<class _com_IIID<struct IUnit,&struct __s_GUID _GUID_b201985d_cc3e_4aa1_aca6_5b77c761821a> >)
public: void __thiscall GroupProcessor::removeUnit(void)
public: void __thiscall GroupProcessor::setAllGroups(void)
public: void __thiscall GroupProcessor::setCountry(class _com_ptr_t<class _com_IIID<struct ICountry,&struct __s_GUID _GUID_3704fc6b_41cc_408a_b5f0_d962d92ed09f> >)
public: void __thiscall GroupProcessor::setCurrentSkill(class _com_ptr_t<class _com_IIID<struct ISkill,&struct __s_GUID _GUID_0c811ed3_3c8b_4386_995d_186bc080eb2e> >)
public: void __thiscall GroupProcessor::setEnemyType(int)
public: void __thiscall GroupProcessor::setExistingGroup(class _com_ptr_t<class _com_IIID<struct IGroup,&struct __s_GUID _GUID_5db2dc56_6086_430b_bab5_89e7f2713e3c> >)
public: void __thiscall GroupProcessor::setGroup(class _com_ptr_t<class _com_IIID<struct IGroup,&struct __s_GUID _GUID_5db2dc56_6086_430b_bab5_89e7f2713e3c> >,bool)
public: void __thiscall GroupProcessor::setGroups(class _com_ptr_t<class _com_IIID<struct IGroups,&struct __s_GUID _GUID_fd7ee3df_b013_495e_b14d_3127b9c04ec7> >)
public: void __thiscall GroupProcessor::setSkill(class _com_ptr_t<class _com_IIID<struct ISkill,&struct __s_GUID _GUID_0c811ed3_3c8b_4386_995d_186bc080eb2e> >)
public: void __thiscall GroupProcessor::setSubgroup(class _com_ptr_t<class _com_IIID<struct ISubGroup,&struct __s_GUID _GUID_1412e78f_49a3_48dd_b837_06f96aebeeb5> >)
public: void __thiscall GroupProcessor::setSubgroups(class _com_ptr_t<class _com_IIID<struct ISubGroups,&struct __s_GUID _GUID_757afdc9_daf6_4d84_9611_b34975aa0f9d> >)
public: void __thiscall GroupProcessor::setTask(class _com_ptr_t<class _com_IIID<struct ITask,&struct __s_GUID _GUID_0d65cbd5_1a48_4db6_b773_d1e05023263d> >)
public: void __thiscall GroupProcessor::setType(class _com_ptr_t<class _com_IIID<struct IUnitSpecification,&struct __s_GUID _GUID_282f8931_af69_44df_87f5_c6bb8dcaf7f9> >)
public: void __thiscall GroupProcessor::setUnit(class _com_ptr_t<class _com_IIID<struct IUnit,&struct __s_GUID _GUID_b201985d_cc3e_4aa1_aca6_5b77c761821a> >)
public: void __thiscall GroupProcessor::setUnits(class _com_ptr_t<class _com_IIID<struct IUnits,&struct __s_GUID _GUID_ab20b8c0_0c75_4691_9814_59196b9b8792> >)
public: void __thiscall GroupProcessor::updateCountry(void)
public: void __thiscall GroupProcessor::updateCountryList(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall GroupProcessor::updateGroup(void)
public: void __thiscall GroupProcessor::updateGroupType(void)
public: void __thiscall GroupProcessor::updateGroups(void)
public: void __thiscall GroupProcessor::updateSkill(class _com_ptr_t<class _com_IIID<struct ISkill,&struct __s_GUID _GUID_0c811ed3_3c8b_4386_995d_186bc080eb2e> >)
public: void __thiscall GroupProcessor::updateSubgroup(void)
public: void __thiscall GroupProcessor::updateSubgroups(void)
public: void __thiscall GroupProcessor::updateTask(void)
public: void __thiscall GroupProcessor::updateType(void)
public: void __thiscall GroupProcessor::updateUnit(void)
public: void __thiscall GroupProcessor::updateUnits(void)
protected: bool __thiscall GroupProcessor::getHumanCurrentSkillAllowedMode(void)const 
protected: bool __thiscall GroupProcessor::isPermittedType(class _com_ptr_t<class _com_IIID<struct IUnitSpecification,&struct __s_GUID _GUID_282f8931_af69_44df_87f5_c6bb8dcaf7f9> > const &)
protected: static class _com_ptr_t<class _com_IIID<struct ITask,&struct __s_GUID _GUID_0d65cbd5_1a48_4db6_b773_d1e05023263d> > __cdecl GroupProcessor::getPreferedTask(class std::map<long,class _com_ptr_t<class _com_IIID<struct ITask,&struct __s_GUID _GUID_0d65cbd5_1a48_4db6_b773_d1e05023263d> >,struct std::less<long>,class std::allocator<class _com_ptr_t<class _com_IIID<struct ITask,&struct __s_GUID _GUID_0d65cbd5_1a48_4db6_b773_d1e05023263d> > > > const &)
protected: virtual struct MSGTABLE const * __thiscall GroupProcessor::getMessageTable(void)const 
protected: void __thiscall GroupProcessor::changeCategory(int,bool)
protected: void __thiscall GroupProcessor::fillTypeComboBox(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >,int)
protected: void __thiscall GroupProcessor::onCategory(void)
protected: void __thiscall GroupProcessor::onClient(void)
protected: void __thiscall GroupProcessor::onClose(void)
protected: void __thiscall GroupProcessor::onCountry(void)
protected: void __thiscall GroupProcessor::onDelete(void)
protected: void __thiscall GroupProcessor::onDialogs(void)
protected: void __thiscall GroupProcessor::onGroup(void)
protected: void __thiscall GroupProcessor::onGroupName(void)
protected: void __thiscall GroupProcessor::onGroupNameChange(void)
protected: void __thiscall GroupProcessor::onHeadingHeader(void)
protected: void __thiscall GroupProcessor::onHeadingSpinEdit(void)
protected: void __thiscall GroupProcessor::onIntellect(void)
protected: void __thiscall GroupProcessor::onLeader(void)
protected: void __thiscall GroupProcessor::onPayload(void)
protected: void __thiscall GroupProcessor::onRoute(void)
protected: void __thiscall GroupProcessor::onSkill(void)
protected: void __thiscall GroupProcessor::onSubgroup(void)
protected: void __thiscall GroupProcessor::onSubgroupName(void)
protected: void __thiscall GroupProcessor::onSubgroups(void)
protected: void __thiscall GroupProcessor::onSummary(void)
protected: void __thiscall GroupProcessor::onTarget(void)
protected: void __thiscall GroupProcessor::onTask(void)
protected: void __thiscall GroupProcessor::onType(void)
protected: void __thiscall GroupProcessor::onUnit(void)
protected: void __thiscall GroupProcessor::onUnitName(void)
protected: void __thiscall GroupProcessor::onUnitNameChange(void)
protected: void __thiscall GroupProcessor::onUnits(void)
protected: void __thiscall GroupProcessor::setForReadOnlyMission(bool)
protected: void __thiscall GroupProcessor::setHumanCurrentSkillAllowedMode(bool)
protected: void __thiscall GroupProcessor::setMissionDirtyFlag(bool)
private: void __thiscall GroupProcessor::editCoalition(class _com_ptr_t<class _com_IIID<struct ICountry,&struct __s_GUID _GUID_3704fc6b_41cc_408a_b5f0_d962d92ed09f> >,class _com_ptr_t<class _com_IIID<struct ICountry,&struct __s_GUID _GUID_3704fc6b_41cc_408a_b5f0_d962d92ed09f> >)
private: void __thiscall GroupProcessor::fillSubgroupComboBox(void)
private: void __thiscall GroupProcessor::fillUnitComboBoxAndSetSelectedRow(void)
private: void __thiscall GroupProcessor::onHeading(class UI::Tuner *)
private: void __thiscall GroupProcessor::setClientButton(int)
private: void __thiscall GroupProcessor::setColorToHumanPlane(class _com_ptr_t<class _com_IIID<struct IUnitSpecification,&struct __s_GUID _GUID_282f8931_af69_44df_87f5_c6bb8dcaf7f9> >,int)
private: void __thiscall GroupProcessor::setGroupName(void)
private: void __thiscall GroupProcessor::setLeaderButton(long)
public: void __thiscall GroupProcessor::`vbase destructor'(void)
const GroupProcessor::`vbtable'
const GroupProcessor::`vftable'{for `Control'}
const GroupProcessor::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Identifiable>'}
const GroupProcessor::`vftable'{for `MapPlacerProcessor::Listener'}
const GroupProcessor::`vftable'{for `Parentable'}
const GroupProcessor::`vftable'{for `System'}
const GroupProcessor::`vftable'{for `UI::Element'}

protected: static long * GroupProcessor::categoriesID
protected: static struct MSGTABLE const GroupProcessor::messageTable
private: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > * GroupProcessor::country_index
private: static struct MSGTABLE_ENTRY const * const GroupProcessor::messageEntries
};

#endif

