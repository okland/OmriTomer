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
#include "Observer_t.h"

using namespace std;

class ImpStudent_t : public Observer_t{
public:
    ImpStudent_t(const string _name,const string _faculty){
        name = _name;
        faculty = _faculty;
    }
    void AttachTo(Subject_t *_subject);
    void DetachTo(Subject_t *_subject);
    void Update(Subject_t *_subject);
    virtual const string GetName()const;
    virtual const string GetFaculty()const;
    virtual void SetFaculty(const string _faculty);
    ~ImpStudent_t(void){};
protected:
    ImpStudent_t(void){};
    string name;
    string faculty;
    
};
#endif /* defined(__Ex5__ImpStudent_t__) */
