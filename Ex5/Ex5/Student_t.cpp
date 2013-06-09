//
//  Student_t.cpp
//  Ex5
//
//  Created by Tomer on 6/9/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#include "Student_t.h"

void Student_t::AttachTo(Subject_t* _subject){
    _subj=_subject;
};

void Student_t::DetachTo(Subject_t* _subject){
    _subj=0;
};

void Student_t::Update(Subject_t* _subject){
    cout<< theStudent->GetName() << " got notified about the raising prices" << endl;
};

const string Student_t::GetName() const{
    return theStudent->GetName();
};

const string Student_t::GetFaculty() const{
    return theStudent->GetFaculty();
};

void Student_t::SetFaculty(const string _faculty) {
    return theStudent->SetFaculty(_faculty);
};