//
//  Diary.h
//  ex3
//
//  Created by Tomer on 5/3/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#ifndef __ex3__Diary__
#define __ex3__Diary__

#include <iostream>
#include "Day.h"
#include "Appointment.h"

using namespace std;

class Diary
{
 
 public:
    //CTOR
	Diary(){};
    
	//DTOR
	~Diary()
	{
		cleanDiary();
        for(int i=0;i<7;++i){
            //delete week[i]
        }
       // delete week;
	};
    
    const int addAppointment (const int day,const float from, const float till,string subject);
    const int removeAppointment(const int day,const float from);    
    void cleanDiary();
    const Appointment* findAppointment(const int day,const float from);;


    void printDiary();
   	
private:
	Day week[7];	
    
    bool verifyLegalDayNum(const int day);
    
    
};
#endif /* defined(__ex3__Diary__) */
