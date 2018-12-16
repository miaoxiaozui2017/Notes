// rememb-o-matic
#include <iostream>
#include <new>
using namespace std;

int main()
{
    int i,n;
    int * p;
    cout << "How many numbers would you like to type? ";
    cin >> i;
    p = new (nothrow) int[i];   // 动态分配内存，这里i是根据用户输入确定的，不是常量表达式
    if (p == nullptr)
        cout << "Error:memory could not be allocated";  // 无法分配内存时报错，或者采用异常机制
    else
    {
        for (n=0;n<i;n++)
        {
            cout << "Enter number: ";
            cin >> p[n];
        }
        cout << "You have entered: ";
        for (n=0;n<i;n++)
            cout << p[n] << ", ";
        delete[] p;
    }
    return 0;
}