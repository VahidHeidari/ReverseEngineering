#ifndef PAYLOADPROCESSOR_H_
#define PAYLOADPROCESSOR_H_

class PayloadProcessor
{
public: __thiscall PayloadProcessor::PayloadProcessor(class PayloadProcessor const &)
public: __thiscall PayloadProcessor::PayloadProcessor(void)
public: virtual __thiscall PayloadProcessor::~PayloadProcessor(void)
public: class PayloadProcessor & __thiscall PayloadProcessor::operator=(class PayloadProcessor const &)
public: bool __thiscall PayloadProcessor::CalcAndSetTankFuelWeight(void)
public: bool __thiscall PayloadProcessor::SetBalance(long)
public: bool __thiscall PayloadProcessor::SetBaseWeights(float,float,float)
public: bool __thiscall PayloadProcessor::SetFuelWeight(float)
public: bool __thiscall PayloadProcessor::SetPlaneAndTask(class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >,class _com_ptr_t<class _com_IIID<struct IUnknown,&struct __s_GUID _GUID_00000000_0000_0000_c000_000000000046> >)
public: bool __thiscall PayloadProcessor::SetTotalWeight(float)
public: bool __thiscall PayloadProcessor::SetWeaponsWeight(float)
public: bool __thiscall PayloadProcessor::Zoom100Percent(void)
public: bool __thiscall PayloadProcessor::ZoomBackward(void)
public: bool __thiscall PayloadProcessor::ZoomForward(void)
public: bool __thiscall PayloadProcessor::ZoomModeOff(bool)
public: bool __thiscall PayloadProcessor::ZoomModeOn(bool)
public: virtual bool __thiscall PayloadProcessor::initialize(void)
public: virtual bool __thiscall PayloadProcessor::uninitialize(void)
public: virtual void __thiscall PayloadProcessor::onCreate(void)
public: virtual void __thiscall PayloadProcessor::onPaint(void)
public: void __thiscall PayloadProcessor::OnBalanceSlider(void)
public: void __thiscall PayloadProcessor::OnEmptyWeightEdit(void)
public: void __thiscall PayloadProcessor::OnFuelEdit(void)
public: void __thiscall PayloadProcessor::OnFuelSlider(void)
public: void __thiscall PayloadProcessor::OnFuelWeightEdit(void)
public: void __thiscall PayloadProcessor::OnMaxTotalWeightEdit(void)
public: void __thiscall PayloadProcessor::OnTotalWeightEdit(void)
public: void __thiscall PayloadProcessor::OnTotalWeightPercentEdit(void)
public: void __thiscall PayloadProcessor::OnTotalWeightPercentSlider(void)
public: void __thiscall PayloadProcessor::OnWeaponsWeightEdit(void)
public: void __thiscall PayloadProcessor::SetArtificalEventValue(bool)
public: void __thiscall PayloadProcessor::onClose(void)
protected: virtual struct MSGTABLE const * __thiscall PayloadProcessor::getMessageTable(void)const 
private: bool __thiscall PayloadProcessor::StringIsValid(char const *)
private: long __thiscall PayloadProcessor::CalcBalanceValueForSlider(long)
private: long __thiscall PayloadProcessor::GetCaptionFromEditBox(int)
private: void __thiscall PayloadProcessor::FuelSlider(void)
private: void __thiscall PayloadProcessor::TotalWeightPercentSlider(void)
public: void __thiscall PayloadProcessor::`vbase destructor'(void)
const PayloadProcessor::`vbtable'
const PayloadProcessor::`vftable'{for `Control'}
const PayloadProcessor::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Identifiable>'}
const PayloadProcessor::`vftable'{for `System'}
const PayloadProcessor::`vftable'{for `UI::Element'}

protected: static struct MSGTABLE const PayloadProcessor::messageTable
private: static struct MSGTABLE_ENTRY const * const PayloadProcessor::messageEntries
};

#endif

