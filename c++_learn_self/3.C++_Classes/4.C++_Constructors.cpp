#include <bits/stdc++.h>
using namespace std;
class Myclass
{
    public:
    // creat constructor use "parentheses ()"
    // <use the same name as class
    Myclass()
    {
        cout << "This is a class" << endl;
    }
}; // don't forget ";" overthere

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) // use correct data type
    { // Constructor with parameters
    brand = x;
    model = y;
    year = z;
    }
};

class Car1
{
    public:
    string brand;  // Attribute
    string model;  // Attribute
    int year;
    Car1(string x, string y, int z);
};
// constructor define outside class
Car1::Car1(string x, string y, int z)
{
    brand = x;
    model = y;
    year = z;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // constructor is a special method automatic call
    // when object of a class is created

    Myclass myobj;
    Car myobj1("Toyota", "Supra", 1999);

    cout << myobj1.brand << endl;
    cout << myobj1.model << endl;
    cout << myobj1.year << endl;
    return 0;
}