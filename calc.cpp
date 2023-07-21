// Online C++ compiler to run C++ program online
#include <iostream>
int main() {
    bool x = true;
    while (x == true) {
        std::string first_num;
        std::string second_num;
        char operand;
        std::cout << "Type First Number: ";
        std::cin >> first_num;
        std::cout << "Type Second Number: ";
        std::cin >> second_num;
        for (int i = 0; i < first_num.size(); ++i) {
            if (isdigit(first_num[i]) == false or isdigit(second_num[i]) == false) {
                std::cout << "Invalid first number or Invalid second number \n\n";
                break;
            }
            else {
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
        }
    }
    return 0;
}
