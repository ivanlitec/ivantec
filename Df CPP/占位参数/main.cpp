//
//  main.cpp
//  占位参数
//
//  Created by lintechnology on 2018/7/22.
//  Copyright © 2018年 lintechnology. All rights reserved.
//

#include <iostream>

using namespace std;

//占位参数
void funct(int a, int = 10)
{
    
}

//
void func(int a = 10)
{
    cout << a << endl;
}

//默认占位参数必须从右向左设置,因为传参的时候,都是最后的参数默认不写. 一旦有一个参数有默认参数,那后面的参数一定需要默认参数.
int cal(int len, int width = 10, int height = 20)
{
    return len * width * height;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    funct(10);
    
    func();
    
    cout << cal(10) << endl;
    
    return 0;
}
