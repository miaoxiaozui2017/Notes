// dynamic_cast
#include <iostream>
#include <exception>
using namespace std;

class Base{ virtual void dummy(){} };
class Derived:public Base{ int a; };

int main()
{
    try
    {
        Base * pba = new Derived;
        Base * pbb = new Base;
        Derived * pd;

        pd = dynamic_cast<Derived*>(pba);
        if (pd==0) cout << "Null pointer on first type-cast.\n";    // 当指针是该类型的完整对象时，动态转换成功了

        pd = dynamic_cast<Derived*>(pbb);
        if (pd==0) cout << "Null pointer on second type-cast.\n";   // 当指针不是该类型的完整对象时，返回空指针表示失败
    } catch (exception& e) {cout << "Exception: " << e.what();}
    return 0;
}