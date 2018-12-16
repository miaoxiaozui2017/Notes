// function example
#include <iostream>
using namespace std;

int addition(int a,int b)
{
    int r;
    r=a+b;
    return r;
}

int main()
{
    // 唯一自动调用的函数
    int z;
    z = addition(5,3);
    cout << "The result is " << z;
}