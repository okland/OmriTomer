//
//  StudentBase_t.cpp
//  Ex5
//
//  Created by Tomer on 6/9/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#include "StudentBase_t.h"
using namespace std;

StudentBase_t::StudentBase_t(const string _name,const string _faculty){
    name=_name;
    faculty=_faculty;
};

const string StudentBase_t::GetFaculty() const {
    return faculty;
}

const string StudentBase_t::GetName()const {
    return name;
}

void StudentBase_t::SetFaculty(const string _faculty){
    faculty=_faculty;
}