#include <iostream>
#include <sstream>

int main() {
    std::stringstream ss;
    int arr[] = {60, 321, 5};

    for (unsigned i = 0; i < sizeof arr / sizeof arr [0]; ++i)
        ss << arr [i];

    int result;
    ss >> result;
    std::cout << result; //603215
}