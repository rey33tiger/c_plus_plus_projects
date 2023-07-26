// Online C++ compiler to run C++ program online
#include <iostream>

void input_output(std::string &first, std::string &second) {
        std::cout << "Type First Number: ";
        std::cin >> first;
        std::cout << "Type Second Number: ";
        std::cin >> second;
}
int main() {
    std::string first_num;
    std::string second_num;
    char operand;
    input_output(first_num, second_num);
    bool x = true;
    while (x == true) {
        for (int i = 0; i < first_num.size(); ++i) {
            if (isdigit(first_num[i]) == false) {
                std::cout << "Invalid first number\n\n";
                input_output(first_num, second_num);
            }
        }
        for (int i = 0; i < second_num.size(); ++i) {
            if (isdigit(second_num[i]) == false) {
                std::cout << "Invalid second number\n\n";
                input_output(first_num, second_num);
            }
        }
        std::cout << "Type Operater(+, -, /, or *): ";
        std::cin >> operand;
        double first_double = std::stod(first_num);
        double second_double = std::stod(second_num);
        switch (operand) {
            case '+':
                std::cout << "The answer is: " << first_double + second_double;
                x = false;
                break;
            case '-':
                std::cout << "The answer is: " << first_double - second_double;
                x = false;
                break;
            case '/':
                if (second_double == 0) {
                    std::cout << "Can not divide by zero \n\n";
                    break;
                }
                else {
                    std::cout << "The answer is: " << first_double / second_double;
                    x = false;
                    break;
                }
            case '*':
                std::cout << "The answer is: " << first_double * second_double;
                x = false;
                break;
            default:
                std::cout  << "Type a valid operator \n\n";
                break;
        }
    }
    return 0;
}
