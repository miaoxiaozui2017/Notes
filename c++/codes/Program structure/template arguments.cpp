// template arguments
#include <iostream>
using namespace std;

template <class T,int N>    // 可以把N当成常规函数参数使用，但有区别
T fixed_multiply(T val)
{
    return val * N;
}

int main()
{
    cout << fixed_multiply<int,2>(10) << '\n';
    cout << fixed_multiply<int,3>(10) << '\n';
}
// 模板参数的值在编译时决定生成不同的实例化，不在运行时处理