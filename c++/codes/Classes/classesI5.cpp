// classes and uniform initialization
#include <iostream>
using namespace std;

class Circle{
        double radius;
    public:
        Circle(double r){ radius = r; }
        double circum(){ return 2*radius*3.14159265;} 
};

int main()
{
    Circle foo(10.0);   // 函数形式调用构造函数，方法一
    Circle bar = 20.0;  // 赋值初始化，方法二
    Circle baz{30.0};   // 统一初始化，方法三
    Circle qux = {40.0};// POD,方法四

    cout << "foo's circumference: " << foo.circum() << '\n';
    return 0;
}