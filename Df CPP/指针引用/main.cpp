//
//  main.cpp
//  指针引用
//
//  Created by lintechnology on 2018/7/21.
//  Copyright © 2018年 lintechnology. All rights reserved.
//

#include <iostream>

using namespace std;

struct Teacher {
    int id;
    char name[10];
};

int getTeacher1(Teacher **pp)
{
    Teacher *p = NULL;
    p = (Teacher *)malloc(sizeof(Teacher));
    if (p == NULL) {
        cout << "error" << endl;
        return -1;
    }
    
    memset(p, 0, sizeof(Teacher));
    p->id = 20;
    strcpy(p->name, "zhang3");
    
    *pp = p;
    return 0;
}

int getTeacher2(Teacher *pp)
{
    Teacher *p = NULL;
    p = (Teacher *)malloc(sizeof(Teacher));
    if (p == NULL) {
        cout << "error" << endl;
        return -1;
    }
    
    memset(p, 0, sizeof(Teacher));
    p->id = 20;
    strcpy(p->name, "zhang3");
    
    *pp = *p;
    return 0;
}

int freeTeacher1(Teacher **pp)
{
    if (pp == NULL) {
        return -1;
    }
    
    Teacher *p = *pp;
    if (p != NULL) {
        free(p);
        *pp = NULL;
        return 0;
    }
    return -1;
}

int getTeacher3(Teacher* &pp)
{
    pp = (Teacher*)malloc(sizeof(Teacher));
    
    if (pp == NULL) {
        cout << "error" << endl;
        return -1;
    }
    memset(pp, 0, sizeof(Teacher));
    pp->id = 30;
    strcpy(pp->name, "li4");
    
    return 0;
}

int freeTeacher3(Teacher* &pp)
{
    if (pp == NULL) {
        return -1;
        
    }
    
    free(pp);
    pp = NULL;
    return 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Teacher *p = NULL;
    Teacher tt;
//    getTeacher1(&p);
//    getTeacher2(&tt);
    
    getTeacher3(p);
    
    cout << p->id << " " << p->name << endl;
//    cout << tt.id << " " << tt.name << endl;
    
//    freeTeacher1(&p);
    freeTeacher3(p);
    
    
    return 0;
}
