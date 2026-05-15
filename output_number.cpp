// Q2 - Write a Program to Read and Print Number Input from the User.

#include <iostream> 

int main() {
    double num_from_user{};
    std::cout << "Please enter a number: ";
    std::cin >> num_from_user;

    std::cout << "Entered number: " << num_from_user << std::endl;
}