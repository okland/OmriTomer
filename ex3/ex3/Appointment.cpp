//
//  Appointment.cpp
//  ex3
//
//  Created by Tomer on 5/3/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#include "Appointment.h"

const int Appointment::sort(const Appointment app){
    if(app.from>=till){
        return 1;
    }else if(app.till<=from){
        return -1;
    }else{
        return 0;
    }
}