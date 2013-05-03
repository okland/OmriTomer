//
//  Appointment.h
//  ex3
//
//  Created by Tomer on 5/3/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#ifndef __ex3__Appointment__
#define __ex3__Appointment__

#include <iostream>
using namespace std;

class Appointment
{
public:
    Appointment(float st,float en,string sub){start=st;end=en;subjet=sub;};
    ~Appointment(){};
    
    int sort(const Appointment app);
    
private:
    float start;
    float end;
    string subjet;
};

#endif /* defined(__ex3__Appointment__) */
