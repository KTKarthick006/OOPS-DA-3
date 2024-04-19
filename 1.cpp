#include <iostream>
#include <string>
using namespace std ;

template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 10, num2 = 20;
    float float1 = 3.14, float2 = 2.71;
    std::string str1 = "Hello", str2 = "World";

    cout << "Before swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    cout << "float1 = " << float1 << ", float2 = " << float2 << endl;
    cout << "str1 = " << str1 << ", str2 = " << str2 << endl;

    std::swap(num1, num2);
    std::swap(float1, float2);
    std::swap(str1, str2);

    cout << "After swapping:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
    cout << "float1 = " << float1 << ", float2 = " << float2 << endl;
    cout << "str1 = " << str1 << ", str2 = " << str2 << endl;

    return 0;
}