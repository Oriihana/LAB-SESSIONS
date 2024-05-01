#include <iostream>
#include <string>

int main() {
    // 1. Dynamically allocate an integer variable
    int* dynamicInteger = new int;

    // 2. Dynamically allocate a string variable
    std::string* dynamicString = new std::string;

    // 3. Prompt the user to input a value for the dynamically allocated integer variable
    std::cout << "Enter an integer value: ";
    std::cin >> *dynamicInteger;

    // 4. Prompt the user to input a value for the dynamically allocated string variable
    std::cout << "Enter a string value: ";
    std::cin.ignore(); // Ignore the newline character left in the input buffer
    std::getline(std::cin, *dynamicString);

    // 5. Output the value of the dynamically allocated integer variable to the console
    std::cout << "Dynamically allocated integer: " << *dynamicInteger << std::endl;

    // 6. Output the value of the dynamically allocated string variable to the console
    std::cout << "Dynamically allocated string: " << *dynamicString << std::endl;

    // Deallocate the dynamically allocated memory
    delete dynamicInteger;
    delete dynamicString;

    return 0;
}

