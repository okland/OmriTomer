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
    Appointment(float st,float en,string sub){from=st;till=en;subjet=sub;};
    ~Appointment(){};
    
    const int sort(const Appointment app);
    
    const float getFrom(){
        return from;
    };
    
    const float getTill(){
        return from;
    }
    
private:
    float from;
    float till;
    string subjet;
};

#endif /* defined(__ex3__Appointment__) */
