#include <iostream> 

int main() {
    double first_num{};
    double second_num{};

    std::cout << "Enter two numbers: " << std::endl;

    std::cin >> first_num;
    std::cin >> second_num;

    std::cout << "Output a = " << first_num << '\n'
              << "Output b = "  << second_num << std::endl;

    std::cout << "Okay, swapping numbers now! " << std::endl;

    double swap_num_one{second_num};
    double swap_num_two(first_num);

    std::cout << "Output a = " << swap_num_one << '\n'
              << "Output b =  " << swap_num_two << std::endl;

}