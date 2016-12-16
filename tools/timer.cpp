#include "timer.h"

Timer::Timer()
{

}

// Reset the timer
void Timer::reset()
{
    if (flgStart)
    {
        flgStart        = false;
        realTime        = 0.0;
        intgrTime       = 0;
        flgCountdown    = false;
        flgAlarm        = false;
    }
}

void Timer::set(Count direction)
{
    switch (direction)
    {
    case UP:
        flgCountdown    = false;
        break;
    case DOWN:
        flgCountdown    = true;
        break;
    }
}

// Start the timer
void Timer::start()
{
    flgStart = true;
}

// Do the time step
void Timer::step(double dT)
{
    if (flgStart)
    {
        timeIncr = dT;
        update();
    }
}

// Update current time
void Timer::update()
{
    if (flgCountdown)
        realTime -= timeIncr;
    else
        realTime += timeIncr;
}
