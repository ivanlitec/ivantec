//
//  main.cpp
//  引用返回值
//
//  Created by lintechnology on 2018/7/21.
//  Copyright © 2018年 lintechnology. All rights reserved.
//

#include <iostream>

using namespace std;

int& getValue1()
{
    int a = 10;
    return a;
}// int &temp = &a

int& getValue2()
{
    static int b = 20;
    return b;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int value_a = 0;
    value_a = getValue1(); //value_a = *temp 这是一个值拷贝
    
    int &r_a = getValue1(); //r_a = temp 这里只是引用赋值,没有值拷贝,但是里面的局部比变量a 已经释放了,引用指向的地址是无用地址.
    
    cout << r_a << endl;
    cout << r_a << endl;
    
    cout << value_a << endl;
    
    
    cout << "==========" << endl;
    
    int &r_b = getValue2();
    cout << r_b << endl;
    cout << r_b << endl;
    
    r_b = 2000;
    
    getValue2() = 3000;
    cout << getValue2() << endl;
    
    int value_b = getValue2();
    cout << value_b << endl;
    
    return 0;
}
