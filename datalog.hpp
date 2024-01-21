#ifndef CPPREVIEW_DATALOG_HPP
#define CPPREVIEW_DATALOG_HPP

#include <time.h>
#include <iostream>
#define BSZ 10

class datapoint {
    tm Tm;
    char Latitude[BSZ], Longitude[BSZ];
    double Depth, Temperature;

public:
    tm Time();
    void Time(tm T);
    const char* latitude();
    void latitude(const char* l);
    const char* longitude();
    void longitude(const char* l);
    double depth();
    void depth(double d);
    double temperature();
    void temperature(double t);
    void print(std::ostream& os);
};


#endif //CPPREVIEW_DATALOG_HPP
