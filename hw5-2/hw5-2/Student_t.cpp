//
//  student_t.cpp
//  hw5-2
//
//  Created by Omri Klinger on 6/8/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#include "Student_t.h"

void Student_t::AttachTo(Subject_t* _subject){
    sbj=_subject;
};

void Student_t::DetachTo(Subject_t* _subject){
    sbj=0;
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