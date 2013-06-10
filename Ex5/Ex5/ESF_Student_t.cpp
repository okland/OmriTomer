//
//  ESF_Student_t.cpp
//  Ex5
//
//  Created by Tomer on 6/9/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#include "ESF_Student_t.h"

void ESF_Student_t::updateAll(Subject_t* _subject){
    cout<< "Student " << name
    << " from ESF was signaled that the tommorrow lecture would be canceled" <<endl;
};

ESF_Student_t::ESF_Student_t(const string _name):ImpStudent_t(_name,"ESF"){
}
