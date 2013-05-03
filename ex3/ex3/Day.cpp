//
//  Day.cpp
//  ex3
//
//  Created by Tomer on 5/3/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#include "Day.h"

int failed = -1;
int success = 1;

int Day:: whereToPutAppointment(const Appointment app){
    int i=0;
    for(i=0;i<appointmentList.size();++i){
        int sortResult=appointmentList[i]->sort(app);
        if(sortResult==0){
            return failed;
        }else if(sortResult==-1){
            return i;
        }
    }
    return i;
};

int Day:: findAppointmentLocation(const float from){
    for(int i=0;i<appointmentList.size();++i){
        const float tempFrom= appointmentList[i]->getFrom();
        if(from==tempFrom){
            return i;
        }else if(from<tempFrom){
            return failed;
        }
    }
    return failed;
};

const int Day::addAppointmentInDay (const float from, const float till,string subject){
    if(from>=till||till>=24||from<0){
        return failed;
    }
    Appointment* theAppointment= new Appointment(from,till,subject);
    std::vector<int>::iterator it;
    int appointmentPos= whereToPutAppointment(*theAppointment);
    //check if has time for appointment
    if(appointmentPos<0){
        return failed;
    }else{
        appointmentList.insert(appointmentList.begin()+appointmentPos,theAppointment);
        return success;
    }
};

const int Day::removeAppointmentInDay(const float from){
    int appointmentPos= findAppointmentLocation(from);
    if(appointmentPos>=0){
        delete appointmentList[appointmentPos];
        appointmentList.erase(appointmentList.begin()+appointmentPos);
        return success;
    }else{
        return failed;
    }
};

void Day::cleanDay(){
    int numOfAppointments= (int)appointmentList.size();
    for(int i=0;i<numOfAppointments;++i){
        delete appointmentList[i];
    }
    appointmentList.clear();
};

const Appointment* Day::findAppointmentInDay(const float from){
    int appointmentPos= findAppointmentLocation(from);
    if(appointmentPos>=0){
        return appointmentList[appointmentPos];
    }else{
        return NULL;
    }
};