//
//  Diary.cpp
//  ex3
//
//  Created by Tomer on 5/3/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#include "Diary.h"
const int failed =-1;


bool Diary::verifyLegalDayNum(const int day){
    if(day>7||day<1){
        return false;
    }else{
        return true;
    }
}

const int Diary::addAppointment (const int day,const float from, const float till,string subject){
    if(verifyLegalDayNum(day)){
        return week[day-1].addAppointmentInDay(from,till,subject);
    }else{
        return failed;
    }
}

const int Diary::removeAppointment(const int day,const float from){
    if(verifyLegalDayNum(day)){
        return week[day-1].removeAppointmentInDay(from);
    }else{
        return failed;
    }
};

void Diary::cleanDiary(){
    for(int i=0;i<7;++i){
        week[i].cleanDay();
    }
};

const Appointment* Diary::findAppointment(const int day,const float from){
    if(verifyLegalDayNum(day)){
        return week[day-1].findAppointmentInDay(from);
    }
    return NULL;
};

