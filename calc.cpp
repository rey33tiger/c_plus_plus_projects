#include <iostream>
//get input from user and put into the variables
void input_output(std::string &first, std::string &second) {
        std::cout << "Type First Number: ";
        std::cin >> first;
        std::cout << "Type Second Number: ";
        std::cin >> second;
}

int check_number(std::string &number, int &e, int &dot) {
    //check for first char (sign or digit)
    if (isdigit(number[0]) or number[0] == '-' or number[0] == '+') {
    
        //checking if first number is valid
        for (int i = 0; i < number.size(); ++i) {
            
            //check for scientific notation
            if (number[i] == 'e') {
                e += 1;
                if (e > 1) {
                    return 0;
                }
                if (isdigit(number[i-1]) == false) {
                    return 0;
                }
            }
            
            //check for decimal point
            else if (number[i] == '.') {
                dot += 1;
                if (dot > 1) {
                    return 0;
                }
            }
            
            else if (number[i] == '+' or number[i] == '-') {
                if (i != 0) {
                    return 0;
                }
            }
            
            // everything else is invalid
            else if (isdigit(number[i]) == false) {
                return 0;
            }
        }
        return 1;
    }    
    
    //if the first character is invalid
    else {
        return 0;
    }        
}
    

void calc() {
    
    std::string first_num;
    std::string second_num;
    std::string operand;
    input_output(first_num, second_num);
    bool x = true;
    
    //function to continue until valid inputs are given
    while (x == true) {
        int e = 0;
        int dot = 0;
        int e2 = 0;
        int dot2 = 0;
            
        //check first number
        if (check_number(first_num, e, dot) == 0) {
            std::cout << "Invalid first number \n\n";
            return;
        }
        
        //check first number
        if (check_number(second_num, e2, dot2) == 0) {
            std::cout << "Invalid second number \n\n";
            return;
        }
        
        //get operater
        std::cout << "Type Operater(+, -, /, or *): ";
        std::cin >> operand;
        if (operand.size() > 1) {
            std::cout << "Please enter only one thing for the operater \n\n";
            return;
        }
        
        char ch_operand = operand[1];
        double first_double = std::stod(first_num);
        double second_double = std::stod(second_num);
        
        //figure which operation to use and if operation is valid
        switch (ch_operand) {
            
            case '+':
                std::cout << "The answer is: " << first_double + second_double << "\n\n";
                x = false;
                break;
                
            case '-':
                std::cout << "The answer is: " << first_double - second_double << "\n\n";
                x = false;
                break;
                
            case '/':
            
                if (second_double == 0) {
                    std::cout << "Can not divide by zero \n\n";
                    break;
                }
                
                else {
                    std::cout << "The answer is: " << first_double / second_double << "\n\n";
                    x = false;
                    break;
                }
                
            case '*':
                std::cout << "The answer is: " << first_double * second_double << "\n\n";
                x = false;
                break;
            
            //if operand is invalid
            default:
                std::cout  << "Type a valid operator \n\n";
                break;
        }
    }
}

//main function where everything starts
int main() {
    while (true) {
        calc();
    }
    return 0;
}
