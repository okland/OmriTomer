//
//  Student_t.h
//  Ex5
//
//  Created by Tomer on 6/9/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#ifndef __Ex5__Student_t__
#define __Ex5__Student_t__

#include <iostream>
#include "ImpStudent_t.h"
#include "Observer_t.h"

using namespace std;
class ImpStudent_t;

class Student_t{
    friend class StudentFactory_t;
public:
    virtual void AttachTo(Subject_t *_subject){
        theStudent->AttachTo(_subject);
    };
    virtual void DetachTo(Subject_t *_subject){
        theStudent->DetachTo(_subject);
    };
    virtual void Update(Subject_t *_subject){
        theStudent->Update(_subject);
    };
    
    Student_t(const string _name,const string _faculty){
        theStudent=new ImpStudent_t(_name,_faculty);
    };
    const string GetName()const;
    const string GetFaculty()const;
    void SetFaculty(const string _faculty);
    
    ~Student_t(void){
        delete theStudent;
    };
    
protected:
    ImpStudent_t* theStudent;
    
    Student_t(void){};
    
    Student_t(ImpStudent_t* _theStudent){
        theStudent=_theStudent;
    };
    
};

#endif /* defined(__Ex5__Student_t__) */
