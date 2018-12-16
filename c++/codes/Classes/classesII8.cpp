// overloading operators example
#include <iostream>
using namespace std;

class CVector{
    public:
        int x,y;
        //CVector(){};    // 这里的;没有解释，理论上不应该这么写，大概又是风格问题？
        CVector(){}        // 构造函数
        CVector(int a,int b):x(a),y(b){}    // 构造函数
        CVector operator + (const CVector&);     // 函数返回名为CVector
};

CVector CVector::operator+(const CVector& param)
{
    CVector temp;   
    temp.x = x + param.x;
    temp.y = y + param.y;
    return temp;
}

int main()
{
    CVector foo(3,1);
    CVector bar(1,2);
    CVector result;
    result = foo + bar;
    cout << result.x << ',' << result.y << '\n';
    return 0;
}