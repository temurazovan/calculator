#include <iostream>
#include <sstream>

int main() {
    double firstNumber;
    double secondNumber;
    char operation;
    double result = 0;
    std::string buffer;
    std::cin >> buffer;
    std::stringstream buffer_stream(buffer);
    buffer_stream >> firstNumber >> operation >> secondNumber;

    switch (operation) {
        case '*':
            result = firstNumber * secondNumber;
            break;
        case '+':
            result = firstNumber + secondNumber;
            break;
        case '-':
            result = firstNumber - secondNumber;
            break;
        case '/':
            result = firstNumber / secondNumber;
            break;
    }
    std::cout << firstNumber << operation << secondNumber << "=" << result;

    return 0;
}
