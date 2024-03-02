#include <iostream>
#include <sstream>

using namespace std;

int main() {
    string a, hours, minutes, seconds, am_pm;

    cin >> a;

    for (auto &i : a) {
        if (i == ':')
            i = ' ';
    }

    istringstream iss(a);

    iss >> hours >> minutes >> seconds;

    am_pm = seconds.substr(seconds.length() - 2, seconds.length());

    seconds = seconds.substr(0, seconds.length() - 2);

    if ((am_pm == "AM" && stoi(hours) >= 12))
        hours = to_string(stoi(hours) - 12);

    if (am_pm == "PM" && stoi(hours) < 12)
        hours = to_string(stoi(hours) + 12);

    if (hours.length() == 1)
        hours = '0' + hours;

    cout << hours << ':' << minutes << ':' << seconds;
}