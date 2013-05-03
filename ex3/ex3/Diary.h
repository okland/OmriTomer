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
    
    const int addAppointment (const int day,const float from, const float till,const string subject){
        if(verifyLegalDayNum(day)){
            return week[day-1].addAppointment(from,till,subject);
        }else{
            return failed;
        }
    };	
    const int removeAppointment(const int day,const float from){
        if(verifyLegalDayNum(day)){
            return week[day-1].removeAppointment(from);
        }else{
            return failed;
        }
    };
    void cleanDiary(){
        for(int i=0;i<7;++i){
            week[i].cleanDay();
        }
    };

    const Appointment findAppointment(const int day,const float from){
        if(verifyLegalDayNum(day)){
            week[day-1].findAppointment(from);
        }
    };

    void printDiary();
   	
private:
	Day week[7];
	int failed =-1;
    
    bool verifyLegalDayNum(const int day){
        if(day>7||day<1){
            return false;
        }else{
            return true;
        }
    }
};
#endif /* defined(__ex3__Diary__) */
