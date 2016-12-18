#ifndef NET_H_
#define NET_H_

namespace Net
{

class Address
{
public: __thiscall Net::Address::Address(bool)
public: __thiscall Net::Address::Address(class Net::Address const &)
public: virtual __thiscall Net::Address::~Address(void)
public: class Net::Address & __thiscall Net::Address::operator=(class Net::Address const &)
public: bool __thiscall Net::Address::getType(void)const 
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Net::Address::getHostName(void)const 
public: void __thiscall Net::Address::setHostName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
const Net::Address::`vftable'
};

class BaseEvent
{
public: __thiscall Net::BaseEvent::BaseEvent(class Net::BaseEvent const &)
public: __thiscall Net::BaseEvent::BaseEvent(void)
public: virtual __thiscall Net::BaseEvent::~BaseEvent(void)
public: class Net::BaseEvent & __thiscall Net::BaseEvent::operator=(class Net::BaseEvent const &)
const Net::BaseEvent::`vftable'
};

class BaseSamplingNotificator
{
public: __thiscall Net::BaseSamplingNotificator::BaseSamplingNotificator(class Net::BaseSamplingNotificator const &)
public: __thiscall Net::BaseSamplingNotificator::BaseSamplingNotificator(void)
public: virtual __thiscall Net::BaseSamplingNotificator::~BaseSamplingNotificator(void)
public: class Net::BaseSamplingNotificator & __thiscall Net::BaseSamplingNotificator::operator=(class Net::BaseSamplingNotificator const &)
public: virtual bool __thiscall Net::BaseSamplingNotificator::add(class Net::SamplingListener *,class Net::BaseEvent const *,class EagleDynamics::Common::Identifier const *)
public: virtual bool __thiscall Net::BaseSamplingNotificator::exclude(class Net::SamplingListener *,class Net::BaseEvent const &,class EagleDynamics::Common::Identifier const *)
public: virtual bool __thiscall Net::BaseSamplingNotificator::include(class Net::SamplingListener *,class Net::BaseEvent const &,class EagleDynamics::Common::Identifier const *)
public: virtual bool __thiscall Net::BaseSamplingNotificator::notify(class Net::BaseSamplingNotifier *,class Net::BaseEvent *,class EagleDynamics::Common::Identifier const *)
public: virtual bool __thiscall Net::BaseSamplingNotificator::remove(class Net::SamplingListener *,class Net::BaseEvent const *,class EagleDynamics::Common::Identifier const *)
public: virtual void __thiscall Net::BaseSamplingNotificator::cancel(void)
const Net::BaseSamplingNotificator::`vftable'{for `Net::BaseSamplingNotifier'}
const Net::BaseSamplingNotificator::`vftable'{for `Net::SamplingNotificator<class Net::SamplingListener,class Net::Event<unsigned long>,class EagleDynamics::Common::Identifier>'}
};

class BaseSamplingNotifier
{
public: __thiscall Net::BaseSamplingNotifier::BaseSamplingNotifier(class Net::BaseSamplingNotifier const &)
public: __thiscall Net::BaseSamplingNotifier::BaseSamplingNotifier(void)
public: virtual __thiscall Net::BaseSamplingNotifier::~BaseSamplingNotifier(void)
public: class Net::BaseSamplingNotifier & __thiscall Net::BaseSamplingNotifier::operator=(class Net::BaseSamplingNotifier const &)
const Net::BaseSamplingNotifier::`vftable'
};

class Connector
{
public: __thiscall Net::Connector::Connector(class Net::Connector const &)
public: __thiscall Net::Connector::Connector(struct _GUID const &,bool)
public: virtual __thiscall Net::Connector::~Connector(void)
public: bool __thiscall Net::Connector::isConnected(bool,class Net::Address const *)
public: bool __thiscall Net::Connector::isHost(void)const 
public: class std::list<class Net::Address *,class std::allocator<class Net::Address *> > const & __thiscall Net::Connector::getConnected(bool)const 
public: virtual class Net::Address * __thiscall Net::Connector::createAddress(bool,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,long)
public: virtual void __thiscall Net::Connector::destroyAddress(class Net::Address *)
public: void __thiscall Net::Connector::close(void)
public: void __thiscall Net::Connector::open(class Net::Session const &)
protected: bool __thiscall Net::Connector::getCurrentStatus(void)const 
protected: virtual bool __thiscall Net::Connector::appendConnectionPoint(bool,class Net::Address *)
protected: virtual bool __thiscall Net::Connector::removeConnectionPoint(bool,class Net::Address *)
const Net::Connector::`vftable'{for `Net::BaseSamplingNotifier'}
const Net::Connector::`vftable'{for `Net::SamplingListener'}
const Net::Connector::`vftable'{for `Net::SamplingNotificator<class Net::SamplingListener,class Net::Event<unsigned long>,class EagleDynamics::Common::Identifier>'}
const Net::Connector::`vftable'{for `System'}
};

class ConnectorManager
{
public: __thiscall Net::ConnectorManager::ConnectorManager(class Net::ConnectorManager const &)
public: __thiscall Net::ConnectorManager::ConnectorManager(void)
public: class Net::ConnectorManager & __thiscall Net::ConnectorManager::operator=(class Net::ConnectorManager const &)
const Net::ConnectorManager::`vftable'
};

class GroupsManager
{
public: __thiscall Net::GroupsManager::GroupsManager(class Net::GroupsManager const &)
public: __thiscall Net::GroupsManager::GroupsManager(void)
public: class Net::GroupsManager & __thiscall Net::GroupsManager::operator=(class Net::GroupsManager const &)
const Net::GroupsManager::`vftable'
};

class NetSerializersManager
{
public: __thiscall Net::NetSerializersManager::NetSerializersManager(class Net::NetSerializersManager const &)
public: class Net::NetSerializersManager & __thiscall Net::NetSerializersManager::operator=(class Net::NetSerializersManager const &)
public: bool __thiscall Net::NetSerializersManager::destroyNetSerializer(class EagleDynamics::Common::Serializer *)
public: class EagleDynamics::Common::Serializer * __thiscall Net::NetSerializersManager::createNetSerializer(void)
public: static class Net::NetSerializersManager * __cdecl Net::NetSerializersManager::instance(void)
private: static class Net::NetSerializersManager * Net::NetSerializersManager::theInstance
protected: __thiscall Net::NetSerializersManager::NetSerializersManager(void)
protected: virtual __thiscall Net::NetSerializersManager::~NetSerializersManager(void)
const Net::NetSerializersManager::`vftable'
};

class PlayersManager
{
public: __thiscall Net::PlayersManager::PlayersManager(class Net::PlayersManager const &)
public: __thiscall Net::PlayersManager::PlayersManager(void)
public: virtual __thiscall Net::PlayersManager::~PlayersManager(void)
public: class Net::PlayersManager & __thiscall Net::PlayersManager::operator=(class Net::PlayersManager const &)
const Net::PlayersManager::`vftable'
};

class SamplingListener
{
public: __thiscall Net::SamplingListener::SamplingListener(class Net::SamplingListener const &)
public: __thiscall Net::SamplingListener::SamplingListener(void)
public: class Net::SamplingListener & __thiscall Net::SamplingListener::operator=(class Net::SamplingListener const &)
const Net::SamplingListener::`vftable'
};

class Worker
{
public: __thiscall Net::Worker::Worker(class Net::Worker const &)
public: __thiscall Net::Worker::Worker(struct _GUID const &)
public: virtual __thiscall Net::Worker::~Worker(void)
public: struct _GUID const & __thiscall Net::Worker::getMode(void)const 
const Net::Worker::`vftable'{for `Net::BaseSamplingNotifier'}
const Net::Worker::`vftable'{for `Net::SamplingListener'}
const Net::Worker::`vftable'{for `Net::SamplingNotificator<class Net::SamplingListener,class Net::Event<unsigned long>,class EagleDynamics::Common::Identifier>'}
const Net::Worker::`vftable'{for `System'}
};

class WorkersManager
{
public: __thiscall Net::WorkersManager::WorkersManager(class Net::WorkersManager const &)
public: __thiscall Net::WorkersManager::WorkersManager(void)
public: class Net::WorkersManager & __thiscall Net::WorkersManager::operator=(class Net::WorkersManager const &)
const Net::WorkersManager::`vftable'
};

class Connection
{
public: __thiscall Net::Connection::Connection(void)
public: class Net::Connection & __thiscall Net::Connection::operator=(class Net::Connection const &)
public: struct Net::Statistic const & __thiscall Net::Connection::getBytesStats(void)const 
public: struct Net::Statistic const & __thiscall Net::Connection::getMessagesStats(void)const 
public: struct Net::Statistic const & __thiscall Net::Connection::getPacketsStats(void)const 
public: unsigned char const & __thiscall Net::Connection::getLossRate(void)const 
public: unsigned long const & __thiscall Net::Connection::getRTT(void)const 
public: unsigned long const & __thiscall Net::Connection::getThroughtput(bool)const 
public: unsigned long const & __thiscall Net::Connection::getTimeouted(void)const 
};

class Delivery
{
public: __thiscall Net::Delivery::Delivery(void)
public: struct Net::Delivery & __thiscall Net::Delivery::operator=(struct Net::Delivery const &)
};

class Envelope
{
public: __thiscall Net::Envelope::Envelope(class Net::Envelope const &)
public: __thiscall Net::Envelope::Envelope(void)
public: __thiscall Net::Envelope::~Envelope(void)
public: class Net::Envelope & __thiscall Net::Envelope::operator=(class Net::Envelope const &)
public: bool __thiscall Net::Envelope::addRecipient(class Net::Player *)
public: bool __thiscall Net::Envelope::addRecipients(class std::list<class Net::Player *,class std::allocator<class Net::Player *> > &)
public: bool __thiscall Net::Envelope::isSendAll(void)const 
public: bool __thiscall Net::Envelope::operator<(class Net::Envelope const &)const 
public: bool __thiscall Net::Envelope::operator==(class Net::Envelope const &)const 
public: bool __thiscall Net::Envelope::removeRecipient(class Net::Player const *)
public: bool __thiscall Net::Envelope::setEnvelope(class Net::Message const *,struct Net::Delivery const *)
public: bool __thiscall Net::Envelope::setEnvelope(class Net::Player *,class Net::Message const *,struct Net::Delivery const *)
public: bool __thiscall Net::Envelope::setEnvelope(class std::list<class Net::Player *,class std::allocator<class Net::Player *> > const &,class Net::Message const *,struct Net::Delivery const *)
public: class Net::Message const & __thiscall Net::Envelope::getMessage(void)const 
public: class std::list<class Net::Player *,class std::allocator<class Net::Player *> > const & __thiscall Net::Envelope::getRecipients(void)const 
public: struct Net::Delivery const & __thiscall Net::Envelope::getDelivery(void)const 
public: void __thiscall Net::Envelope::setDelivery(struct Net::Delivery const &)
public: void __thiscall Net::Envelope::setMessage(class Net::Message const *)
};

class Group
{
public: __thiscall Net::Group::Group(class Net::Group const &)
public: __thiscall Net::Group::Group(unsigned long const &,class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: __thiscall Net::Group::~Group(void)
public: class Net::Group & __thiscall Net::Group::operator=(class Net::Group const &)
public: bool __thiscall Net::Group::addPlayer(class Net::Player *)
public: bool __thiscall Net::Group::playerInGroup(unsigned long const &)
public: bool __thiscall Net::Group::removePlayer(class Net::Player *)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Net::Group::getName(void)const 
public: class std::list<class Net::Player *,class std::allocator<class Net::Player *> > const & __thiscall Net::Group::enumeratePlayers(void)const 
public: unsigned long const & __thiscall Net::Group::getID(void)const 
public: void __thiscall Net::Group::empty(void)
};

class Letter
{
public: __thiscall Net::Letter::Letter(class Net::Letter const &)
public: __thiscall Net::Letter::Letter(void)
public: __thiscall Net::Letter::~Letter(void)
public: class Net::Letter & __thiscall Net::Letter::operator=(class Net::Letter const &)
public: bool __thiscall Net::Letter::operator<(class Net::Letter const &)const 
public: bool __thiscall Net::Letter::setLetter(unsigned long const &,enum Net::Priority const &,class Net::Message const *)
public: class Net::Message const & __thiscall Net::Letter::getMessage(void)const 
public: enum Net::Priority const & __thiscall Net::Letter::getPriority(void)const 
public: unsigned long const & __thiscall Net::Letter::getSenderID(void)const 
public: void __thiscall Net::Letter::setMessage(class Net::Message const *)
public: void __thiscall Net::Letter::setPriority(enum Net::Priority const &)
public: void __thiscall Net::Letter::setSenderID(unsigned long const &)
};

class Message
{
public: __thiscall Net::Message::Message(class Net::Message const &)
public: __thiscall Net::Message::Message(void)
public: __thiscall Net::Message::~Message(void)
public: class Net::Message & __thiscall Net::Message::operator=(class Net::Message const &)
public: unsigned long const & __thiscall Net::Message::getEvent(void)const 
public: void __thiscall Net::Message::free(unsigned char *)
public: void __thiscall Net::Message::get(unsigned long *,class std::vector<unsigned char,class std::allocator<unsigned char> > *)
public: void __thiscall Net::Message::get(unsigned long *,unsigned long *,unsigned char * *)
public: void __thiscall Net::Message::pushback(unsigned long const &,unsigned char *)
public: void __thiscall Net::Message::pushfront(unsigned long const &,unsigned char *)
public: void __thiscall Net::Message::set(unsigned long const &,class std::vector<unsigned char,class std::allocator<unsigned char> > const &)
public: void __thiscall Net::Message::set(unsigned long const &,unsigned long const &,unsigned char *)
public: void __thiscall Net::Message::setEvent(unsigned long const &)
};

class Player
{
public: __thiscall Net::Player::Player(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &,unsigned long const &,class Net::Address const *)
public: __thiscall Net::Player::~Player(void)
public: bool __thiscall Net::Player::isLocal(void)const 
public: class Net::Address const * __thiscall Net::Player::getAddress(void)const 
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Net::Player::getName(void)const 
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Net::Player::getStringAddress(void)const 
public: unsigned long const & __thiscall Net::Player::getID(void)const 
public: void __thiscall Net::Player::setAddress(class Net::Address const *)
public: void __thiscall Net::Player::setID(unsigned long const &)
public: void __thiscall Net::Player::setName(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: void __thiscall Net::Player::setStringAddress(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
};

class Session
{
public: __thiscall Net::Session::Session(class Net::Session const &)
public: __thiscall Net::Session::Session(class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &)
public: __thiscall Net::Session::~Session(void)
public: class Net::Session & __thiscall Net::Session::operator=(class Net::Session const &)
public: class std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const & __thiscall Net::Session::getSessionName(void)const 
public: unsigned long const & __thiscall Net::Session::getMaxPingTime(void)const 
public: unsigned long const & __thiscall Net::Session::getMaxPlayers(void)const 
public: unsigned long const & __thiscall Net::Session::getTimeInterval(bool)const 
public: void __thiscall Net::Session::setMaxPingTime(unsigned long const &)
public: void __thiscall Net::Session::setMaxPlayers(unsigned long const &)
public: void __thiscall Net::Session::setSessionName(char const *)
public: void __thiscall Net::Session::setTimeWaitIntervals(unsigned long const &,unsigned long const &)
public: void __thiscall Net::Session::`default constructor closure'(void)
};

class ConnectorsManager
{
public: static class Net::ConnectorManager * __cdecl Net::ConnectorsManager::instance(void)
public: static void __cdecl Net::ConnectorsManager::release(void)
};

class RealGroupsManager
{
public: static class Net::GroupsManager * __cdecl Net::RealGroupsManager::instance(class Net::Connector *)
public: static void __cdecl Net::RealGroupsManager::release(void)
};

class RealPlayersManager
{
public: static class Net::PlayersManager * __cdecl Net::RealPlayersManager::instance(class Net::Connector *)
public: static void __cdecl Net::RealPlayersManager::release(void)
};

class TransmittersManager
{
public: static class Net::WorkersManager * __cdecl Net::TransmittersManager::instance(void)
public: static void __cdecl Net::TransmittersManager::release(void)
};

class APP_PLAYER_INFO
{
public: struct Net::APP_PLAYER_INFO & __thiscall Net::APP_PLAYER_INFO::operator=(struct Net::APP_PLAYER_INFO const &)
};

class Statistic
{
public: struct Net::Statistic & __thiscall Net::Statistic::operator=(struct Net::Statistic const &)
};

class Transmission
{
public: struct Net::Transmission & __thiscall Net::Transmission::operator=(struct Net::Transmission const &)
};

}		/// namespace Net

#endif

