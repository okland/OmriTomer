//
//  StudentFactory_t.h
//  Ex5
//
//  Created by Tomer on 6/9/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#ifndef __Ex5__StudentFactory_t__
#define __Ex5__StudentFactory_t__

#include <iostream>
#include <string>
#include "ImpStudent_t.h"
#include "ESF_Student_t.h"
#include "FOH_Student_t.h"
#include "Student_t.h"


using namespace std;

class StudentFactory_t {
public:
     static ImpStudent_t* generateStudent(const string _name,const string _faculty);
private:
    //has only static method not created and not eliminated
    StudentFactory_t(void);
    ~StudentFactory_t(void);
};
#endif /* defined(__Ex5__StudentFactory_t__) */
