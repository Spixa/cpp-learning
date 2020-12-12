/*

Calculator written in C++
You can distribute it just edit <your name> to your name
Made for everyone :D

One input only. Example:
2 + 2
3 - 1
7 * 2
8 / 2
Even without spaces:
5/3
6*3


You can customize the mesaages down below :)

*/

#include <string>
#include <iostream>

#define VERSION 1.0

std::string message[] {
    "Thanks for using my calculator. written by <your name> ", //Message Appends on end

};


class Calculator {

public:
    Calculator() {

    }
    int add(int x,int y) {
        return x + y;
    }
    int substract(int x,int y) {
        return x - y;
    }
    int multiply(int x,int y) {
        return x * y;
    }
    int devide(int x,int y) {
        return x / y;
    }


};



int main() {

    Calculator cal;

    int apple, lemon;
    int result;
    char orange;

    try {
           std::cout << "Enter equation >> ";
    std::cin >> apple >> orange >> lemon;
       } catch (...) {
              std::cout << "Equation failed.\n";
              return -1;
       }

       if (orange == '+') {
              result = cal.add(apple,lemon);
       } else
       if (orange == '-') {
              result = cal.substract(apple,lemon);
       } else
       if (orange == '*') {
              result = cal.multiply(apple,lemon);
       } else
       if (orange == '/') {
              result = cal.devide(apple,lemon);
       } else {
              std::cout << "Cannot do the operation: " << orange << "\n";
              return -1;
       }

    std::cout << apple << " " << orange << " " << lemon << " = " << result << std::endl;
    std::cout << message[0] << std::endl;

    return 0;
}
