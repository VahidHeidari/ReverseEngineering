#ifndef RECORDAVIPROCESSOR_H_
#define RECORDAVIPROCESSOR_H_

class RecordAviProcessor
{
public: __thiscall RecordAviProcessor::RecordAviProcessor(class RecordAviProcessor const &)
public: __thiscall RecordAviProcessor::RecordAviProcessor(void)
public: virtual __thiscall RecordAviProcessor::~RecordAviProcessor(void)
public: class RecordAviProcessor & __thiscall RecordAviProcessor::operator=(class RecordAviProcessor const &)
public: virtual bool __thiscall RecordAviProcessor::initialize(void)
public: virtual bool __thiscall RecordAviProcessor::uninitialize(void)
public: virtual void __thiscall RecordAviProcessor::onCreate(void)
public: virtual void __thiscall RecordAviProcessor::onPaint(void)
public: void __thiscall RecordAviProcessor::onClose(void)
public: void __thiscall RecordAviProcessor::onRate(void)
public: void __thiscall RecordAviProcessor::onRateEdit(void)
public: void __thiscall RecordAviProcessor::onStart(void)
protected: virtual struct MSGTABLE const * __thiscall RecordAviProcessor::getMessageTable(void)const 
public: void __thiscall RecordAviProcessor::`vbase destructor'(void)
const RecordAviProcessor::`vbtable'
const RecordAviProcessor::`vftable'
const RecordAviProcessor::`vftable'{for `Control'}
const RecordAviProcessor::`vftable'{for `EagleDynamics::Common::Unknown<class EagleDynamics::Common::Identifiable>'}
const RecordAviProcessor::`vftable'{for `System'}
const RecordAviProcessor::`vftable'{for `UI::Element'}

private: static struct MSGTABLE_ENTRY const * const RecordAviProcessor::messageEntries
protected: static struct MSGTABLE const RecordAviProcessor::messageTable
};

#endif

