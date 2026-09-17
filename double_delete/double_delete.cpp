#include <iostream>

int main() {
    int* arr = new int[10]{};
    //int* brr = arr;
    delete[] arr;
    //delete[] brr;
    return 0;
}