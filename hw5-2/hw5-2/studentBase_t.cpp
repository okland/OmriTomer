//
//  studentBase_t.cpp
//  hw5-2
//
//  Created by Omri Klinger on 6/8/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#include "studentBase_t.h"
using namespace std;

StudentBase_t::StudentBase_t(const string _name){
    name=_name;
};

string StudentBase_t::GetFaculty() const {
    return faculty;
}

string StudentBase_t::GetName()const {
    return name;
}

void StudentBase_t::SetFaculty(const string _faculty){
    faculty=_faculty;
}