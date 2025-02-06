#include "Client.h"

Client::~Client()
{
	delete eventUI1;
	delete eventUI2;
	delete event1Voice1;
	delete event1Voice2;
	delete event2Voice1;
	delete event2Voice2;
	delete event2Voice3;
	delete event1;
	delete event2;
}

void Client::ClientCode()
{
	//subject->CreateMessage("Hello World! :D");
	//observer3->RemoveMeFromTheList();
	//
	//subject->CreateMessage("The weather is hot today! :p");
	//observer4 = new Observer(*subject);
	//
	//observer2->RemoveMeFromTheList();
	//observer5 = new Observer(*subject);
	//
	//subject->CreateMessage("My new car is great! ;");
	//observer5->RemoveMeFromTheList();
	//
	//observer4->RemoveMeFromTheList();
	//observer1->RemoveMeFromTheList();

	eventUI1Voice1->CreateMessage("Volume levels set at: ", -4.75f);
	eventUI1->CreateMessage("Volume levels set at: ", -1.0f);

	eventUI2Voice1->CreateMessage("Volume levels set at: ", -3.75f);
	eventUI2->CreateMessage("Volume levels set at: ", -2.0f);

	// an example of how this could look within engine
	//eventUI1->CreateMessage(dearimgui::volSlider, dearimgui::pitchControl, dearimgui::panControl)
}
