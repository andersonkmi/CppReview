#include <datalog.hpp>
#include <iomanip>
#include <string>

using namespace std;

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
    os.setf(ios::fixed, ios::floatfield);
    os.precision(4);
    os.fill('0');
    os << setw(2) << Time().tm_mon << '\\'
       << setw(2) << Time().tm_mday << '\\'
       << setw(2) << Time().tm_year << ' '
       << setw(2) << Time().tm_hour << ':'
       << setw(2) << Time().tm_min << ':'
       << setw(2) << Time().tm_sec;
    os.fill(' ');
    os << " Lat:" << setw(9) << latitude()
       << ", Long:" << setw(9) << longitude()
       << ", depth:" << setw(9) << depth()
       << ", temp:" << setw(9) << temperature()
       << endl;
}