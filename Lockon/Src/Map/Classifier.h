#ifndef CLASSIFIER_H_
#define CLASSIFIER_H_

class Classifier
{
public: __thiscall Classifier::Classifier(class Classifier const &)
public: class Classifier & __thiscall Classifier::operator=(class Classifier const &)
public: bool __thiscall Classifier::isFeaturesCorrect(class MapObj const *)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Classifier::getName(unsigned int const &)const 
public: static class Classifier * __cdecl Classifier::instance(void)
public: static void __cdecl Classifier::deleteInstance(void)
public: struct Classifier::sFeatureInfo const * __thiscall Classifier::getFeatureInfo(unsigned int)const 
public: unsigned int __thiscall Classifier::findObjId(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: unsigned int __thiscall Classifier::getObjId(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall Classifier::setFeatureInfo(unsigned int,struct Classifier::sFeatureInfo *)
public: void __thiscall Classifier::traceTable(void)
protected: __thiscall Classifier::Classifier(void)
protected: __thiscall Classifier::~Classifier(void)

protected: static class Classifier * Classifier::theClassifier
};

#endif

