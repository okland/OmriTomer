//
//  FOH_Student_t.cpp
//  hw5-2
//
//  Created by Omri Klinger on 6/8/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#include "FOH_Student_t.h"

FOH_Student_t::FOH_Student_t(ImpStudent_t* _impStudent): Student_t(_impStudent){
    theStudent->setFaculty("FOH");    
}
