// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on December 17 2020
// this program prints out integers from 1000 to 200 with five integers
// per line
#include <iostream>

int main() {
    // this program prints out integers from 1000 to 200 with five integers
    // per line
    int counter;

    // process and output
    for (counter = 1000; counter < 2001; counter++) {
        if ((counter + 1) % 5 == 0) {
                std::cout << counter << std::endl;
        } else {
            std::cout << counter << " ";
        }
    }
}
