//
//  ImpStudent_t.h
//  Ex5
//
//  Created by Tomer on 6/9/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#ifndef __Ex5__ImpStudent_t__
#define __Ex5__ImpStudent_t__

#include <iostream>
#include <string>

using namespace std;

class ImpStudent_t{
public:
    virtual const string GetName()const=0;
    virtual const string GetFaculty()const=0;
    virtual void SetFaculty(const string _faculty)const=0;
    ~ImpStudent_t(void){};
protected:
    ImpStudent_t(void){};
};
#endif /* defined(__Ex5__ImpStudent_t__) */
