//
// Created by Daniel Gallegos on 6/29/16.
//
#include <iostream>

int main() {
    int start = 0, end = 0, v1 = 0, v2 = 0;

    std::cout << "Enter two numbers" << std::endl;
    std::cin >> v1 >> v2;

    if (v1 < v2) {
        start = v1;
        end = v2;
    }
    else {
        end = v1;
        start = v2;
    }

    for (int i = start; i <= end; i++) {
        std::cout << i << std::endl;
    }
}
