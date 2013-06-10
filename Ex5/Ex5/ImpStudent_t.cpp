//
//  ImpStudent_t.cpp
//  Ex5
//
//  Created by Tomer on 6/9/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#include "ImpStudent_t.h"

void ImpStudent_t::AttachTo(Subject_t* _subject){
    _subj=_subject;
};

void ImpStudent_t::DetachTo(Subject_t* _subject){
    _subj=0;
};

void ImpStudent_t::Update(Subject_t* _subject){
    cout<< name << " got notified about the raising prices" << endl;
};

const string ImpStudent_t::GetName() const{
    return name;
};

const string ImpStudent_t::GetFaculty() const{
    return faculty;
};

void ImpStudent_t::SetFaculty(const string _faculty){
     faculty=_faculty;
};