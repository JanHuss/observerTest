#pragma once
#include "IObserver.h"
#include "Subject.h"

class Observer :
    public IObserver
{
public:
    Observer(Subject &subject);
    virtual ~Observer();

    void Update (const std::string &messageFromSubject, float &volume) override;
    void RemoveMeFromTheList();
    void PrintInfo();

    void setVolume(float v);
    float getVolume();

private:
    std::string messageFromSubject_;
    Subject &subject_;
    static int staticNumber_;
    int number_;
    float volume;
};

