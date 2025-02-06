#pragma once
#include "ISubject.h"
#include "IObserver.h"
#include <iostream>
#include <list>

class Subject :
    public ISubject
{
public: 
    Subject();
    virtual ~Subject();

    void Attach(IObserver* observer) override;
    void Detach(IObserver* observer) override;
    void Notify() override;

    void CreateMessage(std::string message = "Empty", float vol = 0);
    void HowManyObservers();
    void SomeBusinessLogic();

private:
    std::list<IObserver*> list_observer_;
    std::string message_;
    float volume_;

};

