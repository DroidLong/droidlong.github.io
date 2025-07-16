#include <iostream>
#include <limits>


int main()
{
    float firstNum, secondNum, overall;

    char operation;
    
    char repeat = 'Y';

    std::cout << "Welcome! Please enter two numbers: " << std::endl;

    std::cin >> firstNum >> secondNum;

    while (repeat == 'y' || repeat == 'Y')
    {
        if (std::cin.fail ())
        {
            std::cout << "Invalid input. Please enter numbers." << std::endl;

            std::cin.clear();  // Clear error flag

            std::cin.ignore (std::numeric_limits <std::streamsize> ::max(), '\n');  // Ignore bad input
            
            continue;  // Skip this iteration and prompt again
        }
        
        std::cout << "What kind of operations would like to perfom on the two numbers?" << std::endl;

        std::cout << "You have 4 choices: addition (+), subtraction (-), multiplication (*), and division (/)" << std::endl;

        std::cin >> operation;

        switch (operation)
        {
            case '+':
                overall = firstNum + secondNum;

                std::cout << "Here is your result: " << overall << std::endl;

                break;
            
            case '-':
                overall = firstNum - secondNum;

                std::cout << "Here is your result: " << overall << std::endl;

                break;

            case '*':
                overall = firstNum * secondNum;

                std::cout << "Here is your result: " << overall << std::endl;

                break;

            case '/':
                if (secondNum == 0)
                {
                    std::cout << "Error: Cannot divide by zero." << std::endl;

                    continue;
                }

                else
                {
                    overall = firstNum / secondNum;
                    
                    std::cout << "Here is your result: " << overall << std::endl;
                }

                break;

            default:
                std::cout << "Sorry, you would have to pick an operation: +, -, *, /" << std::endl;

                break;
        }

        std::cout << "Would you like to perform another operation? (y/n): " << std::endl;

        std::cin >> repeat;
    }

    std::cout << "Thank you for using the calculator!" << std::endl;

    return 0;
}
