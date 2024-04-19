#include <iostream>
using namespace std;

template <typename T, int size>
class SmallestNumberFinder {
public:
    T findSmallest(T arr[size]) {
        T smallest = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] < smallest) {
                smallest = arr[i];
            }
        }
        return smallest;
    }
};

int main() {
    const int size = 5;
    int arr[size] = {10, 5, 8, 3, 12};

    SmallestNumberFinder<int, size> finder;
    int smallest = finder.findSmallest(arr);

    cout << "The smallest number in the array is: " << smallest << endl;

    return 0;
}