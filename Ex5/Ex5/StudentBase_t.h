//
//  StudentBase_t.h
//  Ex5
//
//  Created by Tomer on 6/9/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#ifndef __Ex5__StudentBase_t__
#define __Ex5__StudentBase_t__

#include <iostream>
#include "ImpStudent_t.h"

using namespace std;

class StudentBase_t:
public ImpStudent_t{
public:
    StudentBase_t(const string _name,const string faculty);
    ~StudentBase_t(void){};
    
    virtual const string GetName() const;
    virtual const string GetFaculty() const;
    virtual void SetFaculty(const string _faculty);
    
private:
    //not allowed to be called
    StudentBase_t(void);
    
    string name;
    string faculty;
};
#endif /* defined(__Ex5__StudentBase_t__) */
