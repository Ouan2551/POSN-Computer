#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "KFC";  // A string variable
  string* ptr = &food;  // A pointer variable that stores the address of food

    // Output the value of food
    cout << food << "\n";

    // Output the memory address of food
    cout << &food << "\n";

    // Output the memory address of food with the pointer
    cout << ptr << "\n";

    // Output value
    cout << *ptr << endl;

    return 0;
}