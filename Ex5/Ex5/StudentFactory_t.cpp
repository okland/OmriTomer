//
//  StudentFactory_t.cpp
//  Ex5
//
//  Created by Tomer on 6/9/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#include "StudentFactory_t.h"

using namespace std;

Student_t* StudentFactory_t::generateStudent(const string _name,const string _faculty){
    ImpStudent_t* temp = new StudentBase_t(_name,_faculty);
    Student_t* Student=0;
    if(_faculty=="FOH"){
        return Student=new FOH_Student_t(temp);
    }else if(_faculty=="ESF"){
        return Student=new ESF_Student_t(temp);
    }
    
}
