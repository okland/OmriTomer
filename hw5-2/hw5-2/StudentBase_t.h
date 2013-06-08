//
//  studentBase_t.h
//  hw5-2
//
//  Created by Omri Klinger on 6/8/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#ifndef __hw5_2__studentBase_t__
#define __hw5_2__studentBase_t__

#include <iostream>
using namespace std; 

class StudentBase_t:
    public ImpStudent_t{
    public:
        StudentBase_t(string _name);
        ~StudentBase_t(){};
    
        virtual const string GetName() const;
        virtual const string GetFaculty() const;
        virtual void SetFaculty(const string _faculty);

    private:
        //not allowed to be called
        StudentBase_t(void){};
    
        string name;
        string faculty;
};
#endif /* defined(__hw5_2__studentBase_t__) */
