#pragma once

#include "IObserver.h"

class ISubject
{
public:
	virtual ~ISubject(){};

	virtual void Attach(IObserver* observer) = 0; // subscribes an Observer to the Subject/Publisher
	virtual void Detach(IObserver* observer) = 0;// unsubscribes an Observer to the Subject/Publisher
	virtual void Notify() = 0; // Notifys changes made in the Publisher to all Subscribers/Observers
};