//
//  studentFactory_t.cpp
//  hw5-2
//
//  Created by Omri Klinger on 6/8/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#include "studentFactory_t.h"



Student_t* studentFactory_t::generateStudent(string _name,string _faculty){
    ImpStudent_t temp = new studentBase_t(_name,_faculty);
    
    if(_faculty=="FOH"){
        return (Student_t*)new FOH_Student_t(temp);
    }else if(_faculty=="ESF"){
        return (Student_t*)new ESF_Student_t(temp);
    }
}
