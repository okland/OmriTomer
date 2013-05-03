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
    void addAppointment (const int day,const float from, const float till,const char* subject){
        if(verifyLegalDayNum(day)){
            week[day-1].addAppointment(from,till,subject);
        }
    };	
    void removeAppointment(const int day,const float from){
        if(verifyLegalDayNum(day)){
            week[day-1].removeAppointment(from);
        }
    };
    void cleanDiary(){
        for(int i=0;i<7;++i){
            week[i].cleanDay();
        }
    };

    const Appointment findAppointment(const int day,const float hour){
        if(verifyLegalDayNum(day)){
            week[day-1].findAppointment(from);
        }
    };

    void printDiary(){
        //TODO
    };
   	
private:
	Day week[7];
	
    bool verifyLegalDayNum(const int day){
        if(day>7||day<1){
            return false;
        }else{
            return true;
        }
    }
protected:
	//CTOR
	Diary()
	{
        
	}
    
	//DTOR
	~Diary()
	{
		cleanDiary();
        for(int i=0;i<7;++i){
            delete week[i]
        }
        delete week;
	}
    
	
};
#endif /* defined(__ex3__Diary__) */
