// Q3 - Write a Program to Print the ASCII Value of a Character.

#include <iostream> 

int main() {

    char letter{};
    std::cout << "Please enter a single letter (either uppercase or lowercase)" << std::endl;
    std::cin >> letter; 
    std::cout << "Input = " << letter << std::endl;

    int ascii_value{int(letter)};

    std::cout << "Output: ASCII value of " << letter << " = " << ascii_value << std::endl;
}