#pragma once
#include <string>

class IObserver
{
public: 
	virtual ~IObserver(){};
	virtual void Update(const std::string &messageFromSubject, float &volume) = 0;
};