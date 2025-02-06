#pragma once
#include "Observer.h"
#include "Subject.h"



class Client
{
public:
	~Client();

	void ClientCode();

private:
	// one subject per event or per voice
	Subject *eventUI1 = new Subject;
	Observer *event1 = new Observer(*eventUI1);
	Subject *eventUI1Voice1 = new Subject;
	Observer *event1Voice1 = new Observer(*eventUI1Voice1);
	Subject *eventUI1Voice2 = new Subject;
	Observer *event1Voice2 = new Observer(*eventUI1Voice2);

	// one subject for all voices
	Subject *eventUI2 = new Subject;
	Observer *event2 = new Observer(*eventUI2);
	Subject *eventUI2Voice1 = new Subject;
	Observer *event2Voice1 = new Observer(*eventUI2Voice1);
	Observer *event2Voice2 = new Observer(*eventUI2Voice1);
	Observer *event2Voice3 = new Observer(*eventUI2Voice1);
};

