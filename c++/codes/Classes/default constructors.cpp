// classes and default constructors
#include <iostream>
#include <string>
using namespace std;

class Example3{
        string data;
    public:
        Example3(const string& str):data(str){} // 带参数的构造函数
        Example3(){}            // 定义了默认构造函数
        const string& content() const{ return data; }
};

int main()
{
    Example3 foo;
    Example3 bar("Example");

    cout << "bar's content: " << bar.content() << '\n';
    return 0;
}