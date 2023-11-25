#include <iostream>

//Calculator App
    // Prompt user to use calculator
    // Take user first integer
    // ask for what opperand they want to apply
    // ask for second integer
    // display results

int getFirstInput()
{
    std::cout << "Please enter a number to begin your calculation!" << "\n";
    int x{};
    std::cin >> x;
    return x;
}

char getOperation()
{
    std::cout << "Enter what opperand you want to use (+ , - , * , / , ect...)" << "\n";
    char operation{};
    std::cin >> operation;
    return operation;
}

int getSecondInput()
{
    std::cout << "Enter a second number" << "\n";
    int y{};
    std::cin >> y;
    return y;
}

int getResults(int x, char operation, int y)
{
    int result{};

    // give result based on operation
    switch (operation)
    {
    case '+':
        result = x + y;
        break;
    case '-':
        result = x - y;
        break;
    case '*':
        result = x * y;
        break;
    case '/':
        // check for divison by 0
        if (y != 0)
        {
            result = x / y;
        }
        else {
            std::cout << "Error: Divison by zero is not allowed";
            return 1; // returning 1 will exit with an error code
        }
        break;
    default:
        std::cout << "Error: Invalid opperator. \n";
    }

    // display the result
    std::cout << "The Result of " << x << " " << operation << " " << y << " is " << result;

    // keep the console window open after the last input
    std::cin.get();
}

int main()
{
    int x = getFirstInput();
    char operation = getOperation();
    int y = getSecondInput();
    getResults(x, operation, y);

    return 0;
}

