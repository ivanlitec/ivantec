//
//  main.cpp
//  面向对象
//
//  Created by lintechnology on 2018/7/22.
//  Copyright © 2018年 lintechnology. All rights reserved.
//

#include <iostream>

using namespace std;

//结构体默认是public
//类默认是private
struct Hero{
private:
    int year;
    int month;
    int day;
};

#include "Cobe.hpp"

bool judge(Cobe &c1, Cobe &c2)
{
    if (c1.getLen() == c2.getLen() && c1.getWidth() == c2.getWidth() && c1.getHeight() == c2.getHeight()) {
        return true;
    }
    return false;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    struct Hero hero;
//    hero.year = 10;
    
    Cobe cobe;
    cobe.setLen(10);
    cobe.setWidth(10);
    cobe.setHeight(10);
    
    cout << cobe.calCobeVolume() << endl;
    
    
    return 0;
}
