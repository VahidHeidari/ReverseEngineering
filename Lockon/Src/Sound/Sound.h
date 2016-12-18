#ifndef SOUND_H_
#define SOUND_H_

IID_IBleeper
IID_IRecorder
IID_ISignal

namespace EagleDynamics
{

namespace Sound
{

class EagleDynamics::Sound::IEffector * __cdecl EagleDynamics::Sound::getEffector(void)
class EagleDynamics::Sound::IInsonifier * __cdecl EagleDynamics::Sound::getInsonifier(struct HWND__ *)
class EagleDynamics::Sound::IManager * __cdecl EagleDynamics::Sound::getManager(struct HWND__ *)
class EagleDynamics::Sound::Musician * __cdecl EagleDynamics::Sound::getMusician(void)

class IBleeper
{
public: __thiscall EagleDynamics::Sound::IBleeper::IBleeper(class EagleDynamics::Sound::IBleeper const &)
public: __thiscall EagleDynamics::Sound::IBleeper::IBleeper(void)
public: virtual __thiscall EagleDynamics::Sound::IBleeper::~IBleeper(void)
public: class EagleDynamics::Sound::IBleeper & __thiscall EagleDynamics::Sound::IBleeper::operator=(class EagleDynamics::Sound::IBleeper const &)
const EagleDynamics::Sound::IBleeper::`vftable'
};

class ICapturer
{
public: __thiscall EagleDynamics::Sound::ICapturer::ICapturer(class EagleDynamics::Sound::ICapturer const &)
public: __thiscall EagleDynamics::Sound::ICapturer::ICapturer(void)
public: class EagleDynamics::Sound::ICapturer & __thiscall EagleDynamics::Sound::ICapturer::operator=(class EagleDynamics::Sound::ICapturer const &)
const EagleDynamics::Sound::ICapturer::`vftable'
};

class IEffector
{
public: __thiscall EagleDynamics::Sound::IEffector::IEffector(class EagleDynamics::Sound::IEffector const &)
public: __thiscall EagleDynamics::Sound::IEffector::IEffector(void)
public: virtual __thiscall EagleDynamics::Sound::IEffector::~IEffector(void)
public: class EagleDynamics::Sound::IEffector & __thiscall EagleDynamics::Sound::IEffector::operator=(class EagleDynamics::Sound::IEffector const &)
const EagleDynamics::Sound::IEffector::`vftable'
};

class IEffectorListener
{
public: __thiscall EagleDynamics::Sound::IEffectorListener::IEffectorListener(class EagleDynamics::Sound::IEffectorListener const &)
public: __thiscall EagleDynamics::Sound::IEffectorListener::IEffectorListener(void)
public: class EagleDynamics::Sound::IEffectorListener & __thiscall EagleDynamics::Sound::IEffectorListener::operator=(class EagleDynamics::Sound::IEffectorListener const &)
public: virtual void __thiscall EagleDynamics::Sound::IEffectorListener::onFinish(class EagleDynamics::Sound::Order *)
const EagleDynamics::Sound::IEffectorListener::`vftable'
};

class IFile
{
public: __thiscall EagleDynamics::Sound::IFile::IFile(class EagleDynamics::Sound::IFile const &)
public: __thiscall EagleDynamics::Sound::IFile::IFile(void)
public: virtual __thiscall EagleDynamics::Sound::IFile::~IFile(void)
public: class EagleDynamics::Sound::IFile & __thiscall EagleDynamics::Sound::IFile::operator=(class EagleDynamics::Sound::IFile const &)
public: static class EagleDynamics::Sound::IFile * __cdecl EagleDynamics::Sound::IFile::create(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,bool)
const EagleDynamics::Sound::IFile::`vftable'
};

class IInsonifier
{
public: __thiscall EagleDynamics::Sound::IInsonifier::IInsonifier(class EagleDynamics::Sound::IInsonifier const &)
public: __thiscall EagleDynamics::Sound::IInsonifier::IInsonifier(void)
public: virtual __thiscall EagleDynamics::Sound::IInsonifier::~IInsonifier(void)
public: class EagleDynamics::Sound::IInsonifier & __thiscall EagleDynamics::Sound::IInsonifier::operator=(class EagleDynamics::Sound::IInsonifier const &)
const EagleDynamics::Sound::IInsonifier::`vftable'
};

class IListener
{
public: __thiscall EagleDynamics::Sound::IListener::IListener(class EagleDynamics::Sound::IListener const &)
public: __thiscall EagleDynamics::Sound::IListener::IListener(void)
public: class EagleDynamics::Sound::IListener & __thiscall EagleDynamics::Sound::IListener::operator=(class EagleDynamics::Sound::IListener const &)
const EagleDynamics::Sound::IListener::`vftable'
};

class IManager
{
public: __thiscall EagleDynamics::Sound::IManager::IManager(class EagleDynamics::Sound::IManager const &)
public: __thiscall EagleDynamics::Sound::IManager::IManager(void)
public: virtual __thiscall EagleDynamics::Sound::IManager::~IManager(void)
public: class EagleDynamics::Sound::IManager & __thiscall EagleDynamics::Sound::IManager::operator=(class EagleDynamics::Sound::IManager const &)
const EagleDynamics::Sound::IManager::`vftable'
};

class IMixer
{
public: __thiscall EagleDynamics::Sound::IMixer::IMixer(class EagleDynamics::Sound::IMixer const &)
public: __thiscall EagleDynamics::Sound::IMixer::IMixer(void)
public: virtual __thiscall EagleDynamics::Sound::IMixer::~IMixer(void)
public: class EagleDynamics::Sound::IMixer & __thiscall EagleDynamics::Sound::IMixer::operator=(class EagleDynamics::Sound::IMixer const &)
const EagleDynamics::Sound::IMixer::`vftable'
};

class IRecorder
{
public: __thiscall EagleDynamics::Sound::IRecorder::IRecorder(class EagleDynamics::Sound::IRecorder const &)
public: __thiscall EagleDynamics::Sound::IRecorder::IRecorder(void)
public: virtual __thiscall EagleDynamics::Sound::IRecorder::~IRecorder(void)
public: class EagleDynamics::Sound::IRecorder & __thiscall EagleDynamics::Sound::IRecorder::operator=(class EagleDynamics::Sound::IRecorder const &)
const EagleDynamics::Sound::IRecorder::`vftable'
};

class ISignal
{
public: __thiscall EagleDynamics::Sound::ISignal::ISignal(class EagleDynamics::Sound::ISignal const &)
public: __thiscall EagleDynamics::Sound::ISignal::ISignal(void)
public: virtual __thiscall EagleDynamics::Sound::ISignal::~ISignal(void)
public: class EagleDynamics::Sound::ISignal & __thiscall EagleDynamics::Sound::ISignal::operator=(class EagleDynamics::Sound::ISignal const &)
const EagleDynamics::Sound::ISignal::`vftable'
};

class IWave
{
public: __thiscall EagleDynamics::Sound::IWave::IWave(class EagleDynamics::Sound::IWave const &)
public: __thiscall EagleDynamics::Sound::IWave::IWave(void)
public: virtual __thiscall EagleDynamics::Sound::IWave::~IWave(void)
public: class EagleDynamics::Sound::IWave & __thiscall EagleDynamics::Sound::IWave::operator=(class EagleDynamics::Sound::IWave const &)
public: static void __cdecl EagleDynamics::Sound::IWave::create(class EagleDynamics::Sound::IWave * *,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,bool)
const EagleDynamics::Sound::IWave::`vftable'
};

class Musician
{
public: __thiscall EagleDynamics::Sound::Musician::Musician(class EagleDynamics::Sound::Musician const &)
public: __thiscall EagleDynamics::Sound::Musician::Musician(void)
public: __thiscall EagleDynamics::Sound::Musician::~Musician(void)
public: class EagleDynamics::Sound::Musician & __thiscall EagleDynamics::Sound::Musician::operator=(class EagleDynamics::Sound::Musician const &)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall EagleDynamics::Sound::Musician::getName(void)
public: virtual float __thiscall EagleDynamics::Sound::Musician::getVolume(void)
public: virtual void __thiscall EagleDynamics::Sound::Musician::play(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall EagleDynamics::Sound::Musician::setMusic(bool)
public: virtual void __thiscall EagleDynamics::Sound::Musician::setVolume(float)
public: virtual void __thiscall EagleDynamics::Sound::Musician::stop(void)
const EagleDynamics::Sound::Musician::`vftable'
};

class Order
{
public: __thiscall EagleDynamics::Sound::Order::Order(class EagleDynamics::Sound::Order const &)
public: __thiscall EagleDynamics::Sound::Order::Order(void)
public: class EagleDynamics::Sound::Order & __thiscall EagleDynamics::Sound::Order::operator=(class EagleDynamics::Sound::Order const &)
const EagleDynamics::Sound::Order::`vftable'
};

}		/// namespace Sound

}		/// namespace EagleDynamics

#endif

