// implicit conversion of classes
#include <iostream>
using namespace std;

class A{};

class B{
    public:
        // 从A的构造函数转换
        B(const A& x){}
        // 从赋值操作符转换
        B& operator= (const A& x){ return *this; }
        // 通过类型转换操作符转换到A
        operator A(){ return A(); } 
        /*
        类型转换操作符：返回类型是目标类型（此处为A），因此在运算符关键字前没有指定
        */
};

int main()
{
    A foo;
    B bar = foo;    // 调用构造函数
    bar = foo;      // 调用赋值
    foo = bar;      // 调用类型转换操作符
    return 0;
}