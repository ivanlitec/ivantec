//
//  main.cpp
//  函数指针重载
//
//  Created by lintechnology on 2018/7/22.
//  Copyright © 2018年 lintechnology. All rights reserved.
//

#include <iostream>
using namespace std;
void func(int a, int b)
{
    cout << a << b <<endl;
}

void func(int a, int b, int c)
{
    cout << a << b << c << endl;
}

typedef void(myFuncType)(int, int); //定义一个函数类型 类型为 void()(int,int)
typedef void(*myFuncType_pt)(int, int); //定义一个函数指针类型 类型为 void(*)(int,int)



int main(int argc, const char * argv[]) {
    // insert code here...
    
    myFuncType *pt = NULL;
    pt = func;
    pt(10,20);
    
    myFuncType_pt pt2 = NULL;
    pt2 = func;
    pt2(10, 10);
    
    void(*func_pt)(int, int) = func;
    func_pt(10,30);
    
    //函数指针,不能发生重载,函数重载实质上是不同的函数类型和函数入口.一个函数指针,只对应一个函数入口
    
    void(*func_pt1)(int, int, int) = func; //找到特定的重载函数.
    func_pt1(10,10,10);
    
    return 0;
}
