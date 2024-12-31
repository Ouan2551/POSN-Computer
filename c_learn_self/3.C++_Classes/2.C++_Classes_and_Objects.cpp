#include <bits/stdc++.h>
using namespace std;
// this is how to creat class
// but in this lesson i will use mutiple class
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
}; // Don't forget semicolon ";" over there

class Car {
  public:
    string brand;   
    string model;
    int year;
};

int main()
{
  ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  // C++ is associated with classes and objects
  // example: in real life, a car is an object. The car has attributes, such as weight and color

  // Creat class
  MyClass myObj;  // Create an object of 
  Car myObj1; // after you creat name of class you can't use same name of class

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Tom";

  myObj1.brand = "Ferrari";
  myObj1.model = "Super Sport";

  // Print attribute values
  cout << myObj.myNum << endl;
  cout << myObj.myString << endl;

  cout << myObj1.brand << endl;
  cout << myObj1.model;

  // What is the role of a class in C++?
  // Ans. To define a template or blueprint for creating objects
  return 0;
}