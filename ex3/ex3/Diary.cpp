//
//  Diary.cpp
//  ex3
//
//  Created by Tomer on 5/3/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#include "Diary.h"
#include "Day.h"
#include "Appointment.h"
#include <iostream>
#include <iomanip>

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
const int Diary:: copyAppointment(const int appDay,const float appFrom,const int day,const float from, const float till){
    const Appointment *app = findAppointment(appDay, appFrom);
    
    if(app==NULL){
        return 0;
    }else{
        return addAppointment(day, from, till,app->getSubject());
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

void Diary::printDiary()
{
    string days[7] = {"Monday","Tuesday","Wednsday","Thursday","Friday","Saturday","Sunday"};
    float minTime=23.59;
    float prevTime=0.0;
    Appointment *tempApp;
    int temp;
    int indexes[7];
    int sizes[7];
    int total=0;
    int printed =0;
    int prevTemp=0;
    
    for(int i=0;i<=6;++i){
        indexes[i]=0;
        sizes[i]=week[i].getNumOfApp();
        total+=sizes[i];
        cout<<"day "<<i<<" has :"<<week[i].getNumOfApp()<<" appointments"<<endl;
        cout<<"total :"<<total<<endl;
    }
    
    cout << setw(20)<<"";
    for(int i=0;i<=6;++i){
        cout << setw(20) << left <<days[i];
    }
    cout<<endl;
    
    while(printed<total){
        for(int i=0;i<=6;++i){
            if(indexes[i]<sizes[i]){
                if(week[i].appAtIndex(indexes[i])->getFrom()<minTime){
                    minTime = week[i].appAtIndex(indexes[i])->getFrom();
                    tempApp= week[i].appAtIndex(indexes[i]);
                    temp=i;
                }
            }
        }
        if(minTime>prevTime){
            cout<<endl;
            cout << setw(20)<<tempApp->getFrom();
            prevTemp=0;
        }
        for(int i=0;i<temp-prevTemp;i++){
             cout << setw(20)<<left<<"";
        }
        string tempS = "subject: " + tempApp->getSubject();
        cout << setw(20)<<left<<tempS;
        indexes[temp]= indexes[temp]+1;
        prevTime=minTime;
        minTime=23.59;
        printed++;
        prevTemp = temp+1;
    }
    cout<<endl<<endl;
}


