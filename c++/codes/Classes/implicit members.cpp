// default and delete implicit members
#include <iostream>
using namespace std;

class Rectangle{
        int width,height;
    public:
        Rectangle(int x,int y):width(x),height(y){}
        Rectangle() = default;  // 默认构造设置为默认，可用
        Rectangle(const Rectangle& other) = delete; // 设置为被删除，不能使用其他矩形类对象构造
        int area(){ return width*height;}
};

int main()
{
    Rectangle foo;
    Rectangle bar(10,20);
    //Rectangle baz(foo);       // 无效：相应的构造函数已删除，可以通过将其改为default来使用
    // 相当于Rectangle::Rectangle(const Rectangle& other):width(other.width),height(other.height){}

    cout << "bar's area: " << bar.area() << '\n';
    return 0;
}
