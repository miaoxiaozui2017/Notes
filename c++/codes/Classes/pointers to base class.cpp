// pointers to base class
#include <iostream>
using namespace std;

class Polygon{
    protected:
        int width,height;
    public:
        void set_values(int a,int b){ width=a; height=b; }
};

class Rectangle:public Polygon{
    public:
        int area(){ return width*height; }
};

class Triangle:public Polygon{
    public:
        int area(){ return width*height/2; }
};

int main()
{
    Rectangle rect;
    Triangle trgl;
    Polygon * ppoly1 = &rect;       // 只能访问从多边形继承来的成员
    Polygon * ppoly2 = &trgl;
    ppoly1->set_values(4,5);        // 等价于rect.set_values(4,5);
    ppoly2->set_values(4,5);
    cout << rect.area() << '\n';    // 指向基类的指针不能访问区域成员
    cout << trgl.area() << '\n';
    return 0;
}