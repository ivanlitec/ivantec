//
//  main.cpp
//  内联函数
//
//  Created by lintechnology on 2018/7/22.
//  Copyright © 2018年 lintechnology. All rights reserved.
//

#include <iostream>

using namespace std;

//内联函数:不能有循环,过度的判断语句,函数体不能庞大,
//内联函数,不存在压栈出栈,直接在调用处,展开没有函数入口,所有不能取函数地址.
//内联函数,函数声明和实现都需要写上inline关键字,不然不会被编译器优化为内联函数
//如果函数体的执行开销远大于压栈,跳转,返回的开销,那么内联将无意义.
//适用场景,函数体小,并频繁调用.
inline int getABValue(int a, int b)
{
    return (a < b ? a : b);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int a = 10;
    int b = 20;
    
    int c = getABValue(a, b);
    /* 直接在这里展开
     return (a < b ? a : b);
     */
    
    cout << c << endl;
    
    
    return 0;
}
