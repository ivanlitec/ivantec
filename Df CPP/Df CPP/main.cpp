//
//  main.cpp
//  Df CPP
//
//  Created by lintechnology on 2018/6/4.
//  Copyright © 2018年 lintechnology. All rights reserved.
//

#include <iostream>
#include "quote.hpp"

struct Teacher {
    int age;
};

void const_test1(const Teacher *pt)
{
    //pt->age = 10; 这样在修改内存空间了
    pt = NULL;
}

void const_test2(Teacher *const pt)
{
    pt->age = 10;
//    pt = NULL;
}

void const_test3()
{
    // c++里const是一个真正的常量,不分配地址空间(取地址就分配了), C是分配内存空间.
    const int a = 10;
    int *p = NULL;
    *p = 20;
    printf("%d",a);
}



#define b 2
//const 和 define 都是编译预处理时候分配内存
//const 是编译器处理,提供类型检查和作用域检查
//define 是预处理器处理,单纯的文本替换,作用域就是声明开始到文件结束,或者undef结束.
void const_test4()
{
//    int a = 1;
//    int b = 2;
//    int arr[a+b] = 2; //变量的size不能初始化
    
    const int a = 1;
//    const int b = 2;
    int arr[a+b] = {1,2,3}; //常量的size可以初始化
}
#undef b

int main(int argc, const char * argv[]) {
    
    bool b1 = true;  //类型固定内存块大小的别名,告诉编译器分配1个字节大小的内存
    std::cout << "sizeof(b1):" <<sizeof(b1) << std::endl;
    
    int b2 = 10;
    std::cout << "b2:" <<b2 << std::endl;
    
    bool b3 = -10;
    std::cout << "b2:" <<b3 << std::endl;
    
    bool b4 = 0;
    std::cout << "b2:" <<b4 << std::endl;
    
    
    int b = 10;
    int c = 20;
    
    (b < c ? b : c) = 30; //c++是返回变量本身
    
    printf("b = %d, c = %d\n", b, c);
    
//    const_test3();
    
    quote_test1();
    
    
    
    return 0;
}





int f(int i)
{
    return 0;
}

