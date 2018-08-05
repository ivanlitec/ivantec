//
//  main.cpp
//  const引用
//
//  Created by lintechnology on 2018/7/21.
//  Copyright © 2018年 lintechnology. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    const int a = 10;
//    int &b = a;
    const int &b = a;
    
    int x = 3;
    const int &re = x; //一般用在函数参数.
    
    cout << x << " " << re << endl;
    
    x = 4;
//    re = 5;
    cout << x << " " << re << endl;
    
//    const int bb = 20;
    const int &bb = 20; //const int * const bb  //int temp = 20, const int &bb = temp
    cout << bb << endl;
    
//    int *p = &a;
//    *p = 20;
//    cout<< a << endl;
    
    
    return 0;
}
