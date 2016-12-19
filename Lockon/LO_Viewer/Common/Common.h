#ifndef COMMON_H_
#define COMMON_H_

#include <map>
#include <string>

namespace EagleDynamics
{

namespace Common
{

class AsyncLogFile * EagleDynamics::Common::globalLog
class FactoryManager * EagleDynamics::Common::globalFactoryManager

unsigned int __cdecl mb2uni(unsigned char const * &)
int __cdecl uni2mb(unsigned char * &,unsigned int)
int __cdecl mbstrlen(unsigned char const *)
class AsyncLogFile & __cdecl EagleDynamics::Common::getSystemLog(void)
void __cdecl getRegistry(class FactoryManager * *)

class Activator
{
public: __thiscall Activator(class Activator const &)
public: __thiscall Activator(void)
public: virtual __thiscall ~Activator(void)
public: static unsigned long __stdcall body(void *)
public: class Activator & __thiscall operator=(class Activator const &)
const EagleDynamics::Common::Activator::`vftable'
};

class AsyncLogFile
{
public: __thiscall AsyncLogFile(class AsyncLogFile const &)
public: __thiscall AsyncLogFile(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,bool)
public: __thiscall ~AsyncLogFile(void)
public: class AsyncLogFile & __thiscall operator=(class AsyncLogFile const &)
public: bool __thiscall clear(void)
public: void __cdecl compose(char const *,...)
public: bool __thiscall enabled(void)const
public: void __thiscall error(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,long)
public: bool __thiscall finish(void)
public: virtual void __thiscall onTime(void)
public: bool __thiscall start(void)
public: void __cdecl write(char const *,...)
public: void __thiscall write(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall AsyncLogFile::`default constructor closure'(void)
const EagleDynamics::Common::AsyncLogFile::`vftable'
};

class Bufferizer
{
public: __thiscall Bufferizer(class Bufferizer const &)
public: __thiscall Bufferizer(void const *,unsigned int)
public: __thiscall Bufferizer(void)
public: virtual __thiscall ~Bufferizer(void)
public: class Bufferizer & __thiscall operator=(class Bufferizer const &)
public: __thiscall operator bool(void)const
public: void __thiscall getBuffer(void const * &,unsigned int &)const
public: virtual bool __thiscall isLoading(void)
public: virtual void __thiscall serialize(void *,unsigned int)
public: void __thiscall setBuffer(void const *,unsigned int)
const EagleDynamics::Common::Bufferizer::`vftable'
};

class Cloneable
{
public: __thiscall Cloneable(class Cloneable const &)
public: __thiscall Cloneable(void)
public: class Cloneable & __thiscall operator=(class Cloneable const &)
const EagleDynamics::Common::Cloneable::`vftable'
};

class CommonBufferizer
{
public: __thiscall CommonBufferizer(class CommonBufferizer const &)
public: __thiscall CommonBufferizer(void)
public: virtual __thiscall ~CommonBufferizer(void)
public: class CommonBufferizer & __thiscall operator=(class CommonBufferizer const &)
public: void __thiscall Close(unsigned int &)
public: static class CommonBufferizer * __stdcall Create(void)
public: void __thiscall Open(enum Persistor::Mode,void *,unsigned int)
protected: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall EagleDynamics::Common::CommonBufferizer::allocate(class Identifier const &)
protected: virtual void __thiscall deallocate(class Identifier const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
protected: virtual void __thiscall fill(class EagleDynamics::Common::Persistable *)
protected: virtual void __thiscall serialize(void *,unsigned int)
const EagleDynamics::Common::CommonBufferizer::`vftable'
};

class CommonSerializer
{
protected: __thiscall CommonSerializer(struct IStorage *,struct IStream *,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,enum Persistor::Mode)
public: __thiscall CommonSerializer(class CommonSerializer const &)
public: __thiscall CommonSerializer(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: __thiscall CommonSerializer(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,enum EagleDynamics::Common::Persistor::Mode)
public: __thiscall CommonSerializer(void)
public: virtual __thiscall ~CommonSerializer(void)
public: class CommonSerializer & __thiscall operator=(class CommonSerializer const &)
public: virtual void __thiscall save(class Persistable *)
public: virtual void __thiscall clear(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall clear(void)
public: virtual void __thiscall close(void)
public: virtual bool __thiscall isLoading(void)
public: virtual bool __thiscall isOpened(void)
public: virtual void __thiscall load(class Persistable *)
public: virtual void __thiscall open(struct IUnknown *,enum Persistor::Mode)
public: virtual bool __thiscall open(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,enum Persistor::Mode)
public: virtual void __thiscall persist(class Persistable * &)
protected: virtual void __thiscall serialize(void *,unsigned int)
protected: void __thiscall setName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
protected: void __thiscall write(unsigned long &)
protected: void __thiscall write(class std::map<class EagleDynamics::Common::Identifier,class std::map<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,unsigned long,struct std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class std::allocator<unsigned long> >,struct std::less<class EagleDynamics::Common::Identifier>,class std::allocator<class std::map<class std::basic_string<c		> >)		/// Not closed properly. I have to add some > >) for folding!
protected: enum Persistor::Mode __thiscall GetMode(void)
protected: void __thiscall SetMode(enum Persistor::Mode)
protected: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall EagleDynamics::Common::CommonSerializer::allocate(class EagleDynamics::Common::Identifier const &)
protected: virtual void __thiscall deallocate(class Identifier const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
protected: virtual void __thiscall fill(class Persistable *)
protected: virtual void __thiscall openStream(enum Persistor::Mode,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,struct IStream * *)
protected: void __thiscall read(unsigned long &)
protected: void __thiscall read(class std::map<class Identifier,class std::map<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> >,unsigned long,struct std::less<class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > >,class std::allocator<unsigned long> >,struct std::less<class Identifier>,class std::allocator<class std::map<class std::basic_string<c												> > > >)		/// Not closed properly. I have to add some > > >) for folding
const EagleDynamics::Common::CommonSerializer::`vftable'
};

class Customer
{
public: __thiscall Customer(class Customer const &)
public: __thiscall Customer(class Factory *)
public: __thiscall Customer(void)
public: virtual __thiscall ~Customer(void)
public: class Customer & __thiscall operator=(class Customer const &)
public: virtual void __thiscall setFactory(class EagleDynamics::Common::Factory *)
public: virtual void __thiscall getFactory(class EagleDynamics::Common::Factory * *)
public: virtual class Factory * __thiscall getFactory(void)const
const EagleDynamics::Common::Customer::`vftable'
};

class Event
{
public: __thiscall Event(bool,enum Event::Light)
public: __thiscall ~Event(void)
public: class Event & __thiscall operator=(class Event const &)
public: void * __thiscall getHandle(void)
public: void __thiscall green(void)
public: void __thiscall red(void)
public: bool __thiscall wait(unsigned long)
public: void __thiscall EagleDynamics::Common::Event::`default constructor closure'(void)
};

class Factory
{
public: __thiscall Factory(class Factory const &)
public: __thiscall Factory(void)
public: virtual __thiscall ~Factory(void)
public: class Factory & __thiscall operator=(class Factory const &)
public: virtual long __stdcall CreateInstance(struct IUnknown *,struct _GUID const &,void * *)
public: virtual long __stdcall CreateInstance(struct IUnknown *,class EagleDynamics::Common::Identifier const &,void * *)
public: virtual long __stdcall LockServer(int)
public: virtual void __thiscall add(class Identifier const &)
public: virtual class Identifiable * __thiscall clone(class Identifiable *)
public: virtual void __thiscall create(class Identifier const &,class Identifiable * *)
public: virtual void __thiscall destroy(class Identifiable *)
public: virtual bool __thiscall isPresent(class Identifier const &)
public: virtual void __thiscall remove(class Identifier const &)
public: virtual class std::list<class Identifier,class std::allocator<class Identifier> > const & __thiscall Factory::requestIdentifiers(void)const
const EagleDynamics::Common::Factory::`vftable'
};

class FactoryManager
{
public: __thiscall FactoryManager(class FactoryManager const &)
public: __thiscall FactoryManager(void)
public: virtual __thiscall ~FactoryManager(void)
public: class FactoryManager & __thiscall operator=(class FactoryManager const &)
public: virtual void __thiscall add(class EagleDynamics::Common::Factory *)
public: virtual void __thiscall addFactory(class EagleDynamics::Common::Factory *)
public: virtual void __thiscall remove(class EagleDynamics::Common::Factory *)
public: virtual void __thiscall removeFactory(class EagleDynamics::Common::Factory *)
public: virtual long __stdcall CreateInstance(struct IUnknown *,class EagleDynamics::Common::Identifier const &,void * *)
public: virtual void __thiscall clear(void)
public: virtual class Identifiable * __thiscall create(class Identifier const &)
public: virtual void __thiscall destroy(class EagleDynamics::Common::Identifiable *)
public: class std::vector<class ATL::CComPtr<class Factory>,class std::allocator<class ATL::CComPtr<class Factory> > > const & __thiscall FactoryManager::getFactories(void)const
const EagleDynamics::Common::FactoryManager::`vftable'

class FactoryManager * registry
};

class IManager
{
public: __thiscall IManager(class IManager const &)
public: __thiscall IManager(void)
public: class IManager & __thiscall operator=(class IManager const &)
const EagleDynamics::Common::IManager::`vftable'

class IManager * globalFileManager
};

class IReader
{
public: __thiscall IReader(class IReader const &)
public: __thiscall IReader(void)
public: virtual __thiscall ~IReader(void)
public: class IReader & __thiscall operator=(class IReader const &)
const EagleDynamics::Common::IReader::`vftable'
};

class Identifiable
{
public: __thiscall Identifiable(class Identifiable const &)
public: __thiscall Identifiable(void)
public: virtual __thiscall ~Identifiable(void)
public: class Identifiable & __thiscall operator=(class Identifiable const &)
public: virtual void __thiscall setIdentifier(class Identifier const &)
public: virtual class Identifier & __thiscall getIdentifier(void)
public: virtual class Identifier const & __thiscall getIdentifier(void)const
const EagleDynamics::Common::Identifiable::`vftable'
};

class Identifier
{
public: __thiscall Identifier(struct _GUID const &)
public: __thiscall Identifier(class Identifier const &)
public: __thiscall Identifier(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: __thiscall Identifier(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,struct _GUID const &)
public: __thiscall Identifier(char const *)
public: __thiscall Identifier(void)
public: __thiscall ~Identifier(void)
public: class Identifier const & __thiscall operator=(class Identifier const &)
public: bool __thiscall operator==(class Identifier const &)const
public: bool __thiscall operator!=(class Identifier const &)const
public: bool __thiscall operator<(class Identifier const &)const
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall getClassName(void)const
public: struct _GUID const & __thiscall getGUID(void)const
public: void __thiscall getClassName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall getGUID(struct _GUID const &)
};

class Localizer
{
public: __thiscall Localizer(class Localizer const &)
public: __thiscall Localizer(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: __thiscall ~Localizer(void)
public: class Localizer & __thiscall operator=(class Localizer const &)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl localize(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: static class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __cdecl localizeWithoutAdding(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall get(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall getWithoutAdding(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
protected: void __thiscall convert(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &)
};

class Lockable
{
public: __thiscall Lockable(class Lockable const &)
public: __thiscall Lockable(void)
public: virtual __thiscall ~Lockable(void)
public: class Lockable & __thiscall operator=(class Lockable const &)
public: virtual bool __thiscall interlock(void)
public: virtual bool __thiscall locked(void)
const EagleDynamics::Common::Lockable::`vftable'
};

class Manager
{
public: __thiscall Manager(class Manager const &)
public: __thiscall Manager(void)
public: class Manager & __thiscall operator=(class Manager const &)
public: virtual void __thiscall destroyReader(class IReader *)
public: virtual class IReader * __thiscall createReader(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
const EagleDynamics::Common::Manager::`vftable'
};

class NamedEvent
{
public: __thiscall NamedEvent(char const *)
public: __thiscall NamedEvent(char const *,bool,enum NamedEvent::Light)
public: __thiscall ~NamedEvent(void)
public: class NamedEvent & __thiscall operator=(class NamedEvent const &)
public: void __thiscall green(void)
public: void __thiscall red(void)
public: bool __thiscall wait(unsigned long)
};

class ObjectLock
{
public: __thiscall ObjectLock(class Lockable &)
public: __thiscall ObjectLock(class Lockable *)
public: __thiscall ~ObjectLock(void)
};

class Parallelizer
{
public: __thiscall Parallelizer(class Parallelizer const &)
public: __thiscall Parallelizer(void)
public: virtual __thiscall ~Parallelizer(void)
public: class Parallelizer & __thiscall operator=(class Parallelizer const &)
protected: virtual void __thiscall activate(void)
public: virtual void __thiscall finalize(void)
public: virtual void __thiscall go(void)
const EagleDynamics::Common::Parallelizer::`vftable'{for `EagleDynamics::Common::Thread'}
const EagleDynamics::Common::Parallelizer::`vftable'{for `EagleDynamics::Common::ThreadLocker'}
};

class Persistable
{
public: __thiscall Persistable(class Persistable const &)
public: __thiscall Persistable(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: __thiscall Persistable(class Persistor *)
public: __thiscall Persistable(class Persistor *,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: __thiscall Persistable(void)
public: virtual __thiscall ~Persistable(void)
public: class Persistable & __thiscall operator=(class Persistable const &)
public: class Persistor * __thiscall getPersistor(void)const
public: virtual void __thiscall load(void)
public: virtual void __thiscall save(void)
public: void __thiscall setName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall setPersistor(class Persistor *)
public: virtual void __thiscall allocate(class Persistable *)
public: virtual void __thiscall clear(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall clear(void)
public: virtual void __thiscall close(void)
public: virtual void __thiscall commit(void)
public: virtual void __thiscall deallocate(class Persistable *)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __thiscall getName(void)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall getName(void)const
const EagleDynamics::Common::Persistable::`vftable'
};

class Persistor
{
public: __thiscall Persistor(class Persistor const &)
public: __thiscall Persistor(void)
public: virtual __thiscall ~Persistor(void)
public: class Persistor & __thiscall operator=(class Persistor const &)
public: virtual void __thiscall load(class Identifier const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class Persistable * *)
public: virtual void __thiscall deallocate(class Identifier const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall Persistor::allocate(class Identifier const &)
public: virtual bool __thiscall isLoading(void)
public: virtual bool __thiscall isOpened(void)
public: virtual void __thiscall load(class Persistable *)
public: virtual void __thiscall open(struct IUnknown *,enum Persistor::Mode)
public: virtual bool __thiscall open(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,enum EagleDynamics::Common::Persistor::Mode)
public: virtual void __thiscall persist(class Persistable * &)
public: virtual void __thiscall save(class Persistable *)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > & __thiscall getName(void)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall getName(void)const
const EagleDynamics::Common::Persistor::`vftable'
};

class PersistorsManager
{
public: __thiscall PersistorsManager(class PersistorsManager const &)
public: __thiscall PersistorsManager(void)
public: virtual __thiscall ~PersistorsManager(void)
public: class PersistorsManager & __thiscall operator=(class PersistorsManager const &)
public: virtual void __thiscall add(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class Identifier const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,bool)
public: virtual void __thiscall clear(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall getPath(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall query(class EagleDynamics::Common::Persistor * *,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,enum Persistor::Mode)
public: virtual void __thiscall remove(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
const EagleDynamics::Common::PersistorsManager::`vftable'

class PersistorsManager * globalPersistorsManager
};

class Process
{
public: __thiscall Process(class Process const &)
public: __thiscall Process(void)
public: virtual __thiscall ~Process(void)
public: class Process & __thiscall operator=(class Process const &)
const EagleDynamics::Common::Process::`vftable'
};

class ProcessLocker
{
public: __thiscall ProcessLocker(class ProcessLocker const &)
public: __thiscall ProcessLocker(void)
public: virtual __thiscall ~ProcessLocker(void)
public: class ProcessLocker & __thiscall operator=(class ProcessLocker const &)
public: virtual void __thiscall ProcessLocker::lock(void)
public: virtual void __thiscall ProcessLocker::unlock(void)
const EagleDynamics::Common::ProcessLocker::`vftable'
};

class Profiler
{
public: __thiscall Profiler(class Profiler const &)
public: __thiscall Profiler(unsigned long,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,unsigned long)
public: __thiscall ~Profiler(void)
public: class Profiler & __thiscall operator=(class Profiler const &)
public: void __thiscall activate(void)
public: void __thiscall begin(unsigned long)
public: void __thiscall begin(void)
public: void __thiscall deactivate(void)
public: void __thiscall disable(unsigned long)
public: void __thiscall enable(unsigned long)
public: void __thiscall end(unsigned long)
public: void __thiscall end(void)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall EagleDynamics::Common::Profiler::getName(void)const
public: double __thiscall getPercent(void)const
public: double __thiscall getRate(void)const
public: unsigned long __thiscall getSize(void)const
public: bool __thiscall isEnabled(unsigned long)
public: void __thiscall process(void)
public: void __thiscall set(unsigned long,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
};

class ProfilersManager
{
public: __thiscall ProfilersManager(class ProfilersManager const &)
public: __thiscall ProfilersManager(void)
public: virtual __thiscall ~ProfilersManager(void)
public: class ProfilersManager & __thiscall operator=(class ProfilersManager const &)
public: virtual void __thiscall add(class Profiler *)
public: virtual void __thiscall remove(class Profiler *)
public: virtual void __thiscall update(class Profiler *)
const EagleDynamics::Common::ProfilersManager::`vftable'

class ProfilersManager * globalProfilersManager
};

class RandomTimeKeeper
{
public: __thiscall RandomTimeKeeper(class RandomTimeKeeper const &)
public: __thiscall RandomTimeKeeper(void)
public: virtual __thiscall ~RandomTimeKeeper(void)
public: class RandomTimeKeeper & __thiscall operator=(class RandomTimeKeeper const &)
protected: static void __stdcall TimerProc(unsigned int,unsigned int,unsigned long,unsigned long,unsigned long)
protected: virtual void __thiscall engine(void)
protected: unsigned int const & __thiscall getID(void)const
protected: unsigned long __thiscall intervalRand(unsigned long const &,unsigned long const &,bool)
public: virtual bool __thiscall kill(class TimeListener *)
protected: virtual void __thiscall next(void)
public: virtual bool __thiscall set(class TimeListener *,struct TimerRand const &)
const EagleDynamics::Common::RandomTimeKeeper::`vftable'
};

class Record
{
public: __thiscall Record(struct Record const &)
public: __thiscall Record(class Identifier const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: __thiscall Record(void)
public: __thiscall Record(void)
public: struct Record & __thiscall operator=(struct Record const &)
public: bool __thiscall operator<(struct Record const &)const
};

class Registrator
{
public: __thiscall Registrator(void (__cdecl*)(class FactoryManager * *),class Factory *)
public: class Registrator & __thiscall operator=(class Registrator const &)
};

class Serializable
{
public: __thiscall Serializable(class Serializable const &)
public: __thiscall Serializable(void)
public: virtual __thiscall ~Serializable(void)
public: class Serializable & __thiscall operator=(class Serializable const &)
public: virtual void __thiscall serialize(class Serializer &)
const EagleDynamics::Common::Serializable::`vftable'
};

class Serializer
{
public: __thiscall Serializer(class Serializer const &)
public: __thiscall Serializer(void)
public: virtual __thiscall ~Serializer(void)
public: class Serializer & __thiscall operator=(class Serializer const &)
public: virtual class Serializer & __thiscall operator<<(char &)
public: virtual class Serializer & __thiscall operator<<(unsigned char &)
public: virtual class Serializer & __thiscall operator<<(short &)
public: virtual class Serializer & __thiscall operator<<(unsigned short &)
public: virtual class Serializer & __thiscall operator<<(int &)
public: virtual class Serializer & __thiscall operator<<(unsigned int &)
public: virtual class Serializer & __thiscall operator<<(long &)
public: virtual class Serializer & __thiscall operator<<(unsigned long &)
public: virtual class Serializer & __thiscall operator<<(float &)
public: virtual class Serializer & __thiscall operator<<(double &)
public: virtual class Serializer & __thiscall operator<<(long double &)
public: virtual class Serializer & __thiscall operator<<(class Serializable &)
public: virtual class Serializer & __thiscall operator<<(bool &)
public: class Serializer & __thiscall serialize(char &)
public: class Serializer & __thiscall serialize(short &)
public: class Serializer & __thiscall serialize(int &)
public: class Serializer & __thiscall serialize(long &)
public: class Serializer & __thiscall serialize(float &)
public: class Serializer & __thiscall serialize(double &)
public: class Serializer & __thiscall serialize(long double &)
public: class Serializer & __thiscall serialize(bool &)
public: virtual void __thiscall serialize(void *,unsigned int)
const EagleDynamics::Common::Serializer::`vftable'
};

class StorageSerializer
{
protected: __thiscall StorageSerializer(struct IStorage *,struct IStream *,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,enum Persistor::Mode)
public: __thiscall StorageSerializer(class StorageSerializer const &)
public: __thiscall StorageSerializer(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: __thiscall StorageSerializer(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,enum Persistor::Mode)
public: __thiscall StorageSerializer(void)
public: virtual __thiscall ~StorageSerializer(void)
public: class StorageSerializer & __thiscall operator=(class StorageSerializer const &)
public: virtual void __thiscall clear(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: virtual void __thiscall clear(void)
public: virtual void __thiscall close(void)
public: virtual void __thiscall commit(void)
public: virtual bool __thiscall isLoading(void)
public: virtual bool __thiscall isOpened(void)
public: virtual void __thiscall load(class Persistable *)
public: virtual void __thiscall open(struct IUnknown *,enum Persistor::Mode)
public: virtual bool __thiscall open(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,enum Persistor::Mode)
public: virtual void __thiscall persist(class Persistable * &)
public: virtual void __thiscall save(class Persistable *)
protected: virtual void __thiscall deallocate(class Identifier const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
protected: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall allocate(class Identifier const &)
protected: virtual class Serializer & __thiscall operator<<(class Serializable &)
protected: enum Persistor::Mode __thiscall GetMode(void)
protected: void __thiscall SetMode(enum Persistor::Mode)
protected: void __thiscall defer(void)
protected: virtual void __thiscall fill(class Persistable *)
protected: virtual void __thiscall openStream(enum Persistor::Mode,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,struct IStream * *)
protected: void __thiscall read(unsigned long &)
protected: void __thiscall read(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &)
protected: void __thiscall read(class std::map<struct Record,unsigned long,struct std::less<struct Record>,class std::allocator<unsigned long> > &)
protected: virtual void __thiscall read(class Persistable * &,bool)
protected: virtual void __thiscall serialize(void *,unsigned int)
protected: void __thiscall setName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
protected: void __thiscall write(unsigned long &)
protected: void __thiscall write(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > &)
protected: void __thiscall write(class std::map<struct Record,unsigned long,struct std::less<struct Record>,class std::allocator<unsigned long> > &)
protected: virtual void __thiscall write(class EagleDynamics::Common::Persistable *,bool)
const EagleDynamics::Common::StorageSerializer::`vftable'
};

class StreamSerializer
{
public: __thiscall StreamSerializer(class StreamSerializer const &)
public: __thiscall StreamSerializer(void)
public: virtual __thiscall ~StreamSerializer(void)
public: class StreamSerializer & __thiscall operator=(class StreamSerializer const &)
public: void __thiscall Close(void)
public: static class StreamSerializer * __stdcall Create(void)
public: void __thiscall Open(enum Persistor::Mode,struct IStream *)
protected: virtual void __thiscall deallocate(class Identifier const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
protected: virtual class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > __thiscall allocate(class Identifier const &)
protected: virtual void __thiscall fill(class Persistable *)
protected: virtual void __thiscall serialize(void *,unsigned int)
const EagleDynamics::Common::StreamSerializer::`vftable'
};

class Thread
{
public: __thiscall Thread(class Thread const &)
public: __thiscall Thread(bool)
public: virtual __thiscall ~Thread(void)
public: class Thread & __thiscall operator=(class Thread const &)
public: void __thiscall setPriority(int)
public: void __thiscall suspend(void)
public: virtual void __thiscall activate(void)
public: int __thiscall getPriority(void)
public: unsigned long __thiscall getThreadId(void)
public: void * __thiscall getHandle(void)
public: void __thiscall resume(void)
public: void __thiscall EagleDynamics::Common::Thread::`default constructor closure'(void)
const EagleDynamics::Common::Thread::`vftable'
};

class ThreadLocker
{
public: __thiscall ThreadLocker(class ThreadLocker const &)
public: __thiscall ThreadLocker(void)
public: virtual __thiscall ~ThreadLocker(void)
public: class ThreadLocker & __thiscall operator=(class ThreadLocker const &)
public: virtual void __thiscall lock(void)
public: virtual void __thiscall unlock(void)
const EagleDynamics::Common::ThreadLocker::`vftable'
};

class TimeKeeper
{
public: __thiscall TimeKeeper(class TimeKeeper const &)
public: __thiscall TimeKeeper(void)
public: virtual __thiscall ~TimeKeeper(void)
public: class TimeKeeper & __thiscall operator=(class TimeKeeper const &)
public: virtual bool __thiscall kill(class TimeListener *)
public: virtual bool __thiscall set(class TimeListener *,bool,unsigned int const &,unsigned int const &)
protected: static void __stdcall TimerProc(unsigned int,unsigned int,unsigned long,unsigned long,unsigned long)
protected: virtual void __thiscall engine(void)
protected: unsigned int const & __thiscall getID(void)const
const EagleDynamics::Common::TimeKeeper::`vftable'
};

}		/// Common

}		/// EgaleDynamics

#endif

