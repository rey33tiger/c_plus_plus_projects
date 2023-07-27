#include <iostream>
//get input from user and put into the variables
void input_output(std::string &first, std::string &second) {
        std::cout << "Type First Number: ";
        std::cin >> first;
        std::cout << "Type Second Number: ";
        std::cin >> second;
}

//main function where everything starts
int main() {
    
    std::string first_num;
    std::string second_num;
    char operand;
    input_output(first_num, second_num);
    bool x = true;
    
    //function to continue until valid inputs are given
    while (x == true) {
        int e = 0;
        int dot = 0;
        //checking if first number is valid
        for (int i = 0; i < first_num.size(); ++i) {
            
            if (isdigit(first_num[0]) or first_num[0] == '-' or first_num[0] == '+') {
                if (first_num[i] == 'e') {
                    e += 1;
                    if (e > 1) {
                        std::cout << "Invalid first number\n\n";
                        input_output(first_num, second_num);
                    }
                }
                else if (first_num[i] == '.') {
                    dot += 1;
                    if (dot > 1) {
                        std::cout << "Invalid first number\n\n";
                        input_output(first_num, second_num);
                    }
                }
                else if (isdigit(first_num[i]) == false) {
                    std::cout << "Invalid first number\n\n";
                    input_output(first_num, second_num);
                    }
                }
                
            else {
                std::cout << "Invalid first number\n\n";
                input_output(first_num, second_num);
            }
        }
        
        //checking if second number is valid
        for (int i = 0; i < second_num.size(); ++i) {
            //checking for scientific notataion
            if (isdigit(second_num[0]) and second_num[1] == 'e' and isdigit(second_num[2]) and second_num.size() == 3) {
                break;
            }
            
            if (isdigit(second_num[i]) == false and second_num[i] != '.') {
                std::cout << "Invalid second number\n\n";
                input_output(first_num, second_num);
            }
        }
        
        //get operater
        std::cout << "Type Operater(+, -, /, or *): ";
        std::cin >> operand;
        double first_double = std::stod(first_num);
        double second_double = std::stod(second_num);
        
        //figure which operation to use and if operation is valid
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
            
            //if operand is invalid
            default:
                std::cout  << "Type a valid operator \n\n";
                break;
        }
    }
    return 0;
}
