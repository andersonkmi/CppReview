#include <datalog.hpp>
#include <iomanip>
#include <string>

tm datapoint::Time() {
    return Tm;
}

void datapoint::Time(tm t) {
    Tm = t;
}

const char* datapoint::latitude() {
    return Latitude;
}

void datapoint::latitude(const char* l) {
    Latitude[BSZ -1] = 0;
    strncpy(Latitude, l, BSZ - 1);
}

const char* datapoint::longitude() {
    return Longitude;
}

void datapoint::longitude(const char *l) {
    Longitude[BSZ -1] = 0;
    strncpy(Longitude, l, BSZ - 1);
}

double datapoint::depth() {
    return Depth;
}

void datapoint::depth(double d) {
    Depth = d;
}

double datapoint::temperature() {
    return Temperature;
}

void datapoint::temperature(double t) {
    Temperature = t;
}

void datapoint::print(std::ostream& os) {
    // Empty still
    os << "Empty" << std::endl;
}