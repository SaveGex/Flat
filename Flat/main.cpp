#include <iostream>
#include <format>
#include "Flat.h"

using namespace std;

int main() {
    Flat obj1(20);
    Flat obj2(20);
    Flat obj3(30);

    cout << format("obj1 == obj2 {}", (obj1 == obj2) ? "true" : "false");
    cout << format("\nobj1 > obj2 {}", (obj1 > obj2) ? "true" : "false");
    cout << format("\nobj1 < obj3 {}", (obj1 < obj3) ? "true" : "false");
    return 0;
}