#include <iostream>
#include <string>

std::string reverseString(const std::string &str) {
    // TODO: Implement the reverseString function
    std::string reversedStr;

    // Iterate through the characters of the input string in reverse order
    for (int i = str.length() - 1; i >= 0; --i) {
        // Append each character to the reversed string
        reversedStr += str[i];
    }

    // Return the reversed string
    return reversedStr;
}

int main() {
    // TODO: Implement the main method
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    // Calling the reverseString function and displaying the result
    std::string reversed = reverseString(str);
    std::cout << "Reversed string: " << reversed << std::endl;
}

