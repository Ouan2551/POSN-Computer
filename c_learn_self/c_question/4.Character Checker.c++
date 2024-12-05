#include <iostream>
#include <cctype> // function for isupper and islower
#include <string>

int main() {
    std::string input;
    std::cin >> input;

    bool allUpper = true;
    bool allLower = true;

    for (char ch : input) {
        if (!isupper(ch)) {
            allUpper = false;
        }
        if (!islower(ch)) {
            allLower = false;
        }
    }

    if (allUpper) {
        std::cout << "All Capital Letter" << std::endl;
    } else if (allLower) {
        std::cout << "All Small Letter" << std::endl;
    } else {
        std::cout << "Mix" << std::endl;
    }

    return 0;
}