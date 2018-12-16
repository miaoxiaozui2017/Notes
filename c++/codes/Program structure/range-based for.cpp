// range-based for loop
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str {"Hello!"};
    for (char c : str)
    {
        cout << "[" << c << "]";
    }
    // 等价于
    /*
    for (auto c : str)
        cout << "[" << c << "]";    //c的类型被自动推断为str中元素的类型
    */
    cout << '\n';
}