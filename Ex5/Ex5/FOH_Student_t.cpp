//
//  FOH_Student_t.cpp
//  Ex5
//
//  Created by Tomer on 6/9/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#include "FOH_Student_t.h"

FOH_Student_t::FOH_Student_t(ImpStudent_t* _impStudent): Student_t(_impStudent){
    theStudent->SetFaculty("FOH");
}
