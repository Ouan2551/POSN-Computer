#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // #include <stack> for use stack in program

    // stack => last in, first out (just imagine how to prepare and eat pancake)
    // LIFT => last in, first out

    // declare stack
    stack<string> cars;

    // Add elements to the stack
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");

    // stack<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    // if you declare stack with element stack will error
    
    // add elements
    cars.push("Ferrari");
    cars.push("Toyota");
    cout << "test : " << cars.top() << '\n';
    
    // change top elements
    cars.top() = "Tesla";
    cout << "after add element to top : " << cars.top() << '\n';

    // remove last elements
    cars.pop();
    cout << "after pop element from top : " << cars.top() << '\n';

    // get size stack
    cout << "size stack : " << cars.size() << '\n';

    // check stack is empty or not
    cout << "chk_empty (true = 1, false = 0) : " << cars.empty() << '\n';
    return 0;
}