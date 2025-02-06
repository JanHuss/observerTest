#include "Observer.h"

Observer::Observer(Subject &subject): subject_(subject)
{
	this->subject_.Attach(this);
	std::cout << "Hi, I'm the Observer \"" << ++Observer::staticNumber_ << "\".\n";
	this->number_ = Observer::staticNumber_;

	setVolume(0);
	std::cout << "Volume Init: " << getVolume() << std::endl;
}

Observer::~Observer()
{
	std::cout << "Goodbye, I was the Observer \"" << this->number_ << "\".\n";
}

void Observer::Update(const std::string& messageFromSubject, float &volume)
{
	messageFromSubject_ = messageFromSubject;
	setVolume(volume);
	PrintInfo();
}

void Observer::RemoveMeFromTheList()
{
	subject_.Detach(this);
	std::cout << "Observer \"" << number_ << "\" removed from the list.\n";
}

void Observer::PrintInfo()
{
	std::cout << "Observer \"" << this->number_ << "\": a new message is available --> " << this->messageFromSubject_ << getVolume() << "\n";
}

void Observer::setVolume(float v)
{
	volume = v;
}

float Observer::getVolume()
{
	return volume;
}

