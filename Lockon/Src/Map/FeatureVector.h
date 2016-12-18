#ifndef FEATUREVECTOR_H_
#define FEATUREVECTOR_H_

class FeatureVector
{
public: __thiscall FeatureVector::FeatureVector(class FeatureVector const &)
public: __thiscall FeatureVector::FeatureVector(void)
public: __thiscall FeatureVector::~FeatureVector(void)
public: class FeatureVector & __thiscall FeatureVector::operator=(class FeatureVector const &)
public: class DrawFeature * __thiscall FeatureVector::findFirst(int)
public: class DrawFeature * __thiscall FeatureVector::getFeature(int)
public: class DrawFeature const * __thiscall FeatureVector::getFeature(int)const 
public: int const __thiscall FeatureVector::getFeaturesCount(void)const 
public: void __thiscall FeatureVector::addFeature(class DrawFeature *)
public: void __thiscall FeatureVector::clearFeatures(void)
public: void __thiscall FeatureVector::insertFeature(int,class DrawFeature *)
public: void __thiscall FeatureVector::removeFeature(class DrawFeature *)
public: void __thiscall FeatureVector::removeFeature(int)
};

#endif

