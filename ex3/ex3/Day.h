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
#include "vector"

using namespace std;

class Day
{
    
public:
    //CTOR
	Day(){
        
    };
    
	//DTOR
	~Day()
	{
		cleanDay();
	};
    
    const int addAppointmentInDay (const float from, const float till,string subject);
    const int removeAppointmentInDay(const float from);
    void cleanDay();    
    const Appointment* findAppointmentInDay(const float from);
    
    void printDay(){
        //TODO
    };
    
    int getNumOfApp(){
        return appointmentList.size();
    }
    
   	Appointment* appAtIndex(int i){return appointmentList.at(i);};
    
private:
    vector<Appointment*> appointmentList;
    int whereToPutAppointment(const Appointment app);
    int findAppointmentLocation(const float from);

};
#endif /* defined(__ex3__Day__) */
