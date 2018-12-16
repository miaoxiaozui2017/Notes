// class type-casting
#include <iostream>
using namespace std;

class Dummy{
    double i,j;
};

class Addition{
        int x,y;
    public:
        Addition(int a,int b){x=a;y=b;}
        int result(){ return x+y; }
};

int main()
{
    Dummy d;
    Addition * padd;
    padd = (Addition*) &d;  
    // 指向加法的指针，使用显式类型转换后，被赋值为另一个无关类型的对象的引用
    // 将产生运行时错误或其他意外结果
    cout << padd->result();
    return 0;
}