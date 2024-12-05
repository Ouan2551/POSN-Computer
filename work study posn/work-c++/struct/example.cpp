#include <iostream>
#include <string>
using namespace std;
int main()
{
    //ประกาศโครงสร้าง
    struct student
    {
        string name;
        int age;
        float weight;
        float height;
    };
    struct student std1;
    getline(cin, std1.name);
    cin >> std1.age;
    cin >> std1.weight;
    cin >> std1.height;
    cout << std1.name << endl;
    cout << std1.age << endl;
    cout << std1.weight << endl;
    cout << std1.height << endl;
    return 0;
}