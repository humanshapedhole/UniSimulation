#ifndef TIMER_H
#define TIMER_H

struct Time
{
    int hour;
    int min;
    int sec;
};

class Timer
{
private:

    Time    time;           // Time as a structure
    int     intgrTime;      // Integer seconds
    double  realTime;       // Real seconds

    bool flgStart;      // Start flag
    bool flgAlarm;      // Alarm flag
    bool flgCountdown;  // Countdown flag

    double timeIncr;    // Time increment

public:
    Timer();

    enum Count
    {
        UP      = 0,    // Countup direction
        DOWN    = 1     // Countdown direction
    };

    bool isStarted();

    void reset();
    void set(Count);
    void start();
    void step(double);  // Time step

private:
    void update();
};

#endif // TIMER_H
