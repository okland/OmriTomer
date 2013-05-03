//
//  Appointment.cpp
//  ex3
//
//  Created by Tomer on 5/3/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#include "Appointment.h"

int Appointment::sort(const Appointment app){
    int result;
    
    if(app.from>till){
        result = 1;
    }else if(app.till<from){
        result=-1;
    }else{
        result = 0;
    }
    return result;
}