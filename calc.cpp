// Online C++ compiler to run C++ program online
#include <iostream>
int main() {
    double first_num;
    double second_num;
    char operand;
    bool x = true;
    while (x == true) {
        std::cout << "Type First Number: ";
        std::cin >> first_num;
        std::cout << "Type Second Number: ";
        std::cin >> second_num;
        std::cout << "Type Operater(+, -, /, or *): ";
        std::cin >> operand;
        switch (operand) {
            case '+':
                std::cout << "The answer is: " << first_num + second_num;
                x = false;
                break;
            case '-':
                std::cout << "The answer is: " << first_num - second_num;
                x = false;
                break;
            case '/':
                std::cout << "The answer is: " << first_num / second_num;
                x = false;
                break;
            case '*':
                std::cout << "The answer is: " << first_num * second_num;
                x = false;
                break;
            default:
                std::cout  << "Type a valid operator \n\n";
                break;
        }
    }
    return 0;
}