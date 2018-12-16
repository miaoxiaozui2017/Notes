// using standard exceptions
#include <iostream>
#include <exception>
using namespace std;

class myexception:public exception
{
    virtual const char* what() const throw()
    {
        return "My exception happend";
    }
} myex;

int main()
{
    try
    {
        throw myex;
    }
    catch(exception& e) // 通过引用捕获异常对象，不仅可以捕获exception对象，还可以捕获其派生类的对象
    {
        cout << e.what() << '\n';
    }
    return 0;
}