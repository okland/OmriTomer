//
//  ESF_Student_t.cpp
//  hw5-2
//
//  Created by Omri Klinger on 6/8/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#include "ESF_Student_t.h"

void ESF_Student_t::updateAll(Subject_t* _subject){
  cout<< "Student " << theStudent->getName()
    << "From ESF was signald that the tommorow lecture would be canceld" <<endl;
};

ESF_Student_t::ESF_Student_t(ImpStudent_t* _theStudent):
    Student_t(_theStudent){
    theStudent->SetFaculty("ESF");
}
