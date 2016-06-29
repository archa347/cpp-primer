//
// Created by Daniel Gallegos on 6/28/16.
//

#include <iostream>

int main() {
    int start=0, end=0;

    std::cout<<"Enter two numbers"<< std::endl;
    std::cin >> start >> end;

    for (int i = start; i <= end; i++) {
        std::cout << i << std::endl;
    }
}
