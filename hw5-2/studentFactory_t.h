//
//  studentFactory_t.h
//  hw5-2
//
//  Created by Omri Klinger on 6/8/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#ifndef __hw5_2__studentFactory_t__
#define __hw5_2__studentFactory_t__

#include <iostream>
#include "student_t.h"
using namespace std;

class StudentFactory_t {
    public:
        static Student_t generateStudent(string _name,string _faculty);
    private:
        //has only static method not created and not eliminated
        StudentFactory_t(void);
        ~StudentFactory_t(void);
};
#endif /* defined(__hw5_2__studentFactory_t__) */
