#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);
    // Queue => first in, first out (FIFO)
    // imagine by compare to people stand in line wait to buy item

    //#include <queue> include for use queue

    // declare queue
    queue<string> cars; // same as stack you can't add element from declare queue

    // Add elements to the queue
    cars.push("Volvo");
    cars.push("BMW");
    cars.push("Ford");
    cars.push("Mazda");
    
    // access front and back element
    cout << "Front element : " << cars.front() << '\n';
    cout << "Back element : " << cars.back() << '\n';

    // change front and back element
    cars.front() = "Tesla";
    cars.back() = "Ferrari";
    cout << "AFTER Front element : " << cars.front() << '\n';
    cout << "AFTER Back element : " << cars.back() << '\n';

    // Remove element
    cars.pop();
    cout << "Front element (after pop first out) : " << cars.front() << '\n';

    // Get size queue
    cout << "Size queue : " << cars.size() << '\n';

    // Check is empty or not
    cout << "chk_empty (0 = false, 1 = true) : " << cars.empty() << '\n';
    return 0;
}