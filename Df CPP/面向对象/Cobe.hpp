//
//  Cobe.hpp
//  面向对象
//
//  Created by lintechnology on 2018/7/23.
//  Copyright © 2018年 lintechnology. All rights reserved.
//

#ifndef Cobe_hpp
#define Cobe_hpp

#include <stdio.h>

class Cobe
{
public:
    inline void setLen(int len){m_len = len;};
    
    inline void setWidth(int width){m_width = width;};
    
    inline void setHeight(int height){m_height = height;};
    
    inline int getLen(){return m_len;};
    
    inline int getWidth(){return m_width;};
    
    inline int getHeight(){return m_height;};
    
    int calCobeVolume();
private:
    int m_len;
    int m_width;
    int m_height;
};

#endif /* Cobe_hpp */
