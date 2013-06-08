//
//  FOH_Student_t.h
//  hw5-2
//
//  Created by Omri Klinger on 6/8/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#ifndef __hw5_2__FOH_Student_t__
#define __hw5_2__FOH_Student_t__

#include <iostream>
#include "student_t.h"
#include "Subject_t.h"

using namespace std;
class FOH_Student_t:
public Student_t{
    friend class StudentFactory_t;
    public:
        ~FOH_Student_t(){};
    private:
        //only created by factory
        FOH_Student_t(const string name){};
        FOH_Student_t(void){};
};

#endif /* defined(__hw5_2__FOH_Student_t__) */
