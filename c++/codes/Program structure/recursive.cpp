// factorial calculator --- recursivity
#include <iostream>
using namespace std;

long factorial(long a)
{
    if (a > 1)
        return (a * factorial(a-1));
    else
        return 1;
}

int main()
{
    long number = 9;
    cout << number << "! = " << factorial(number);
    return 0;
}

// 问题：传入的参数大于1.否则，该函数会执行一个无限递归循环。
// 一旦参数为0，它将继续乘以负数，可能引发堆栈在运行时溢出。