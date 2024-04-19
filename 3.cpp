#include <iostream>
using namespace std;

template <typename T>
T sum(T num1, T num2, T num3) {
    return num1 + num2 + num3;
}

int main() {
    int num1 = 5;
    int num2 = 10;
    int num3 = 15;
    cout << "Sum of three integers: " << sum(num1, num2, num3) << endl;

    float num4 = 2.5;
    float num5 = 3.7;
    float num6 = 1.2;
    cout << "Sum of three floats: " << sum(num4, num5, num6) << endl;

    return 0;
}