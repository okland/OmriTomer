//
//  Day.h
//  ex3
//
//  Created by Tomer on 5/3/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#ifndef __ex3__Day__
#define __ex3__Day__

#include <iostream>
#include "Appointment.h"

class Day
{
    
public:
    //CTOR
	Day(){};
    
	//DTOR
	~Day()
	{
		cleanDay();
	};
    
    const int addAppointment (const float from, const float till,string subject){
        
    };
    const int removeAppointment(const float from){
        
    };
    void cleanDay(){
        
    };
    
    const Appointment findAppointment(const float from){
        
    };
    
    void printDay(){
        //TODO
    };
   	
private:
    
	int failed = -1;
    int success = 1;
};
#endif /* defined(__ex3__Day__) */
