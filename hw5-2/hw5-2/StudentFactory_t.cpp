//
//  studentFactory_t.cpp
//  hw5-2
//
//  Created by Omri Klinger on 6/8/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#include "StudentFactory_t.h"



Student_t* studentFactory_t::generateStudent(const string _name,const string _faculty){
    ImpStudent_t temp = new studentBase_t(_name,_faculty);
    Student_t* Student=0
    if(_faculty=="FOH"){
       return Student=new FOH_Student_t(temp);
    }else if(_faculty=="ESF"){
        return Student=new ESF_Student_t(temp);
    }
    
}
