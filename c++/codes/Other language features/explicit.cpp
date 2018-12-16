// explicit
#include <iostream>
using namespace std;

class A {};

class B{
    public:
        explicit B (const A& x){}
        B& operator= (const A& x){ return *this; }
        operator A(){ return A(); }
};

void fn(B x){}

int main()
{
    A foo;
    B bar(foo); // 不能使用类似赋值的语法调用显式标记的构造函数，如B bar=foo;
    bar = foo;
    foo = bar;

    // fn(foo); // 不允许显式ctor
    fn(bar);

    return 0; 
}
// 类似地，类型转换成员函数也可以指定为显式的，与目标类型的显式定义构造函数相同。