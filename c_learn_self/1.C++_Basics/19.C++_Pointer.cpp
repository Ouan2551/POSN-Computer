#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  // Creating Pointers
  string food = "KFC";  // just string variable
  string* ptr = &food;
  // pointer variable that stores the address of food
  // prt just variable to store memory address

  // Output the value of food
  cout << "food : " << food << "\n";

  // Output the memory address of food
  cout << "&food : " << &food << "\n";

  // Output the memory address of food with the pointer
  cout << "ptr : " << ptr << "\n";

  // Output value
  cout << "*ptr : " << *ptr << endl;

  //change the value of the pointer
  *ptr = "Pizza";

  //output new value of pointer
  cout << "*ptr : " << *ptr << endl;

  //output memory address new value
  cout << "ptr : " << ptr << endl;

  //and then you will get new value of variables name food
  cout << "food : " << food << endl;

  return 0;

  // What does a pointer store in C++
  // The memory address of another variable
}