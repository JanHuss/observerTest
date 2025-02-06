#include "Subject.h"

Subject::Subject()
{
	std::cout << "Subject Volume: " << volume_ << std::endl;
}

Subject::~Subject()
{
	std::cout << "Goodbye, I was the Subject.\n";
	
}

void Subject::Attach(IObserver* observer)
{
	list_observer_.push_back(observer);
}

void Subject::Detach(IObserver* observer)
{
	list_observer_.remove(observer);
}

void Subject::Notify()
{
	std::list<IObserver*>::iterator iterator = list_observer_.begin();
	HowManyObservers();

	while (iterator != list_observer_.end())
	{
		(*iterator)->Update(message_, volume_);
		++iterator;
	}
}

void Subject::CreateMessage(std::string message, float vol)
{
	this->message_ = message;
	this->volume_ = vol;
	Notify();
}

void Subject::HowManyObservers()
{
	std::cout << "There are " << list_observer_.size() << " observers in the list.\n";
}

void Subject::SomeBusinessLogic()
{
	this->message_ = "change message message";
	Notify();
	std::cout << "I'm about to do some thing important.\n";
}

