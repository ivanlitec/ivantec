//
//  quote.cpp
//  Df CPP
//
//  Created by lintechnology on 2018/6/16.
//  Copyright © 2018年 lintechnology. All rights reserved.
//

#include "quote.hpp"
#include <iostream>

void my_swap(int a, int b)
{
    int c = 0;
    c = a;
    a = b;
    b = c;
}

void my_swap01(int *a, int *b)
{
    int c = 0;
    c = *a;
    *a = *b;
    *b = c;
}

void my_swap02(int &a, int &b)
{
    int c = 0;
    c = a;
    a = b;
    b = c;
}

struct Teacher{
    char name[50];
    int age;
};

void printT(Teacher *t)
{
    t->age = 12;
//    std::cout<<t->age<<std::endl;
}

void printT1(Teacher &t)
{
    t.age = 13;
    
}

void printT2(Teacher t)
{
    t.age =20;
//    std::cout<<t.age<<std::endl;
}

struct Teacher1 {
    char name[64];
    int age;
    double &a; //很像指针占的内存空间大小,引用也分配内存
    int &b;
};

//引用就是一个常量指针 Type &name === Type * const name

void quote_test2()
{
    printf("sizoof = %lu\n",sizeof(Teacher1));
}

void quote_test1()
{
    int a = 10;
    
    int &b = a;
    
    printf("a = %d, b = %d\n",a, b);
    
    b = 200;
    
    printf("a = %d, b = %d\n",a, b);
    
    a = 300;
    
    printf("a = %d, b = %d\n",a, b);
    
//    int &c; //普通引用必须用其他变量赋值
    
    int x = 10;
    int y = 20;
    my_swap(x, y);
    printf("x = %d, y = %d\n",x, y);
    
    my_swap01(&x ,&y);
    printf("x = %d, y = %d\n",x, y);
    
    my_swap02(x, y); //直接赋值引用,引用就是变量的别名,指向同一块地址,就是一个变量
    printf("x = %d, y = %d\n",x, y);
    
    Teacher t1;
    t1.age = 11;
    
    printT(&t1);
    std::cout<<t1.age<<std::endl;
    printT1(t1);
    std::cout<<t1.age<<std::endl;
    printT2(t1);
    std::cout<<t1.age<<std::endl;
    
    quote_test2();
}
