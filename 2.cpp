#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;

public:
    Time(int h = 0, int m = 0) {
        hours = h;
        minutes = m;
    }

    Time operator+(const Time& t) {
        Time sum;
        sum.minutes = minutes + t.minutes;
        sum.hours = hours + t.hours + (sum.minutes / 60);
        sum.minutes %= 60;
        return sum;
    }

    void display() {
        cout << hours << "hrs " << minutes << "mts" << endl;
    }
};

int main() {
    Time t1(11, 56);
    Time t2(2, 10);
    Time sum = t1 + t2;
    sum.display();
    return 0;
}