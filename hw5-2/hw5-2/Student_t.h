//
//  student_t.h
//  hw5-2
//
//  Created by Omri Klinger on 6/8/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#ifndef __hw5_2__student_t__
#define __hw5_2__student_t__

#include <iostream>
#include "ImpStudent_t.h"
#include "Observer_t.h"


class Student_t:
    public Observer_t{
        friend class StudentFactory_t;
    public:
        virtual void AttachTo(Subject_t *_subject);
        virtual void DetachTo(Subject_t *_subject);
        virtual void Update(Subject_t *_subject);
        
        virtual string GetName()const;
        virtual string GetFaculty()const;
        virtual void SetFaculty(const string _faculty);
        
        ~Student_t(void){
            delete theStudent;
        };
        
    private:
        ImpStudent_t* theStudent;
        
        Student_t(void){};
        
        Student_t(ImpStudent_t* _theStudent){
            theStudent=_theStudent;
        };
        
};

#endif /* defined(__hw5_2__student_t__) */
