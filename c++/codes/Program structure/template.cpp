// function template
#include <iostream>
using namespace std;

template <class T>
T sum(T a,T b)
{
    T result;       // 用泛型声明局部变量
    result = a + b;
    return result;
}

int main()
{
    int i=5,j=6,k;
    double f=2.0,g=0.5,h;
    k=sum<int>(i,j);    //有的编译器可以自动推断类型，但显式地指定类型是好的
    h=sum<double>(f,g);
    cout << k << '\n';
    cout << h << '\n';
    return 0;
}