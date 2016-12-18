#ifndef MODELTIMEQUANTIZER_H_
#define MODELTIMEQUANTIZER_H_

class ModelTimeQuantizer
{
public: __thiscall ModelTimeQuantizer::ModelTimeQuantizer(void)
public: __thiscall ModelTimeQuantizer::~ModelTimeQuantizer(void)
public: class ModelTimeQuantizer & __thiscall ModelTimeQuantizer::operator=(class ModelTimeQuantizer const &)
public: bool __thiscall ModelTimeQuantizer::freezed(void)
public: double __thiscall ModelTimeQuantizer::getAcceleration(void)
public: double __thiscall ModelTimeQuantizer::getDeltaTime(void)
public: double __thiscall ModelTimeQuantizer::getFinishTime(void)
public: double __thiscall ModelTimeQuantizer::getLateness(void)
public: double __thiscall ModelTimeQuantizer::getRealFinishTime(void)
public: double __thiscall ModelTimeQuantizer::getRealFreezeTime(void)
public: double __thiscall ModelTimeQuantizer::getRealStartTime(void)
public: double __thiscall ModelTimeQuantizer::getRealUnfreezeTime(void)
public: double __thiscall ModelTimeQuantizer::getStartTime(void)
public: void __thiscall ModelTimeQuantizer::accelerate(void)
public: void __thiscall ModelTimeQuantizer::decelerate(void)
public: void __thiscall ModelTimeQuantizer::freeze(void)
public: void __thiscall ModelTimeQuantizer::initialize(double,bool)
public: void __thiscall ModelTimeQuantizer::initialize(double,double,bool)
public: void __thiscall ModelTimeQuantizer::nextStep(double)
public: void __thiscall ModelTimeQuantizer::nextStep(void)
public: void __thiscall ModelTimeQuantizer::setAcceleration(double)
public: void __thiscall ModelTimeQuantizer::setFinishTime(double)
public: void __thiscall ModelTimeQuantizer::unfreeze(void)
};

class ModelTimeQuantizer * globalModelTimeQuantizer

#endif

