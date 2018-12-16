# Overloaded functions重载函数
两个不同的函数可以同名当它们参数列表不同（要么是参数数量不同，要么是参数类型不同）  
同名的函数最好是行为类似（重载函数），若只是同名而定义完全不同则是不同的函数。
>Note:  不能仅通过返回类型重载函数，至少一个参数必须具有不同的类型。

# Function templates函数模板
问题：重载函数主体内容不变  
解决方案：使用泛型（即函数模板）定义函数。  
定义函数模板遵循与普通函数相同的语法，详见如下：  
template \<template-parameters> function-declaration  
```c++
template <class SomeType>
SomeType sum(SomeType a,SomeType b)
{
    return a+b;
}
```  
泛型：在模板参数列表中用关键字class或typename指定都可以。在实例化模板时确定具体类型。    
实例化模板：使用模板参数的特定类型或值来应用模板创建函数。  
语法类似调用函数：  
name <template-arguments> (function-arguments)  
```c++
x = sum<int>(10,20)
//等价于定义了
/*
int sum (int a,int b)
{
    return a+b;
}
*/
```
可以有多个模板参数，也可以使用非模板类型。

# Non-type template arguments实模板参数
模板参数中还包含特定类型的表达式（通常是常量表达式，不能传递变量）。  