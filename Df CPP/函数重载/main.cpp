//
//  main.cpp
//  函数重载
//
//  Created by lintechnology on 2018/7/22.
//  Copyright © 2018年 lintechnology. All rights reserved.
//

#include <iostream>

using namespace std;

void func(int a) //void()(int) 把所有的变量名去掉,就是函数的类型. void(*fp)(int) 函数指针
{
    cout << "func 1" << endl;
    cout << a << endl;
}

void func(char a)
{
    
}

//函数重载,就是对象参数列表不同,函数返回值一样,函数名字一样.
//重载是对一个函数,添加不同的实现.
void func(int a, int b = 20)
{
    cout << "func 2" << endl;
}

//这样是重定义,不是重载.
//char func(int a, int b)
//{
//
//}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    void (*fp)(int) = func; //函数返回值和参数列表确定一个函数指针.
    
    fp(10);
    
    //这样具有二义性,所以重载函数不要有默认参数
//    func(10);
    
    return 0;
}
