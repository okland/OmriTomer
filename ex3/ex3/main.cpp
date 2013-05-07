//
//  main.cpp
//  ex3
//
//  Created by Tomer on 5/3/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#include <iostream>
#include "Diary.h"
using namespace std;

int main(int argc, const char * argv[])
{
    Diary diary;
    int operation;
    bool run=true;
    
    diary.addAppointment(1, 1.0, 2.0, "test");
    diary.addAppointment(2, 1.0, 2.0, "test");
    diary.addAppointment(3, 1.0, 2.0, "test");
    diary.addAppointment(4, 1.0, 2.0, "test");
    diary.addAppointment(5, 1.0, 2.0, "test");
    diary.addAppointment(6, 1.0, 2.0, "test");
    diary.addAppointment(7, 1.0, 2.0, "test");
    diary.addAppointment(1, 2.3, 2.5, "test");
    diary.addAppointment(1, 6.4, 7.3, "test");
    diary.addAppointment(4, 4.0, 2.0, "test");
    diary.addAppointment(5, 7.0, 13.0, "test");
    diary.addAppointment(6, 8.0, 22.0, "test");
    
    while(run)  {
        float start=0.0;
        float appStart=0.0;
        int appDay=0;
        float end=0.0;
        int day=0;
        string subject;
        int result;
        
        cout <<"1. Add appoiments."<< endl ;
        cout <<  "2. Remove appoiment" << endl ;
        cout <<  "3. Clean Diary. "<< endl ;
        cout <<  "4. Find appoiment "<< endl ;
        cout <<  "5. Copy appoiment "<< endl ;
        cout <<  "6. Print Diary 	"<< endl ;
        cout <<  "7. Quit."<< endl ;
        cout <<  "Enter your choice:"<< endl ;
        cout << ">>";
        cin >> operation ;
        
        switch (operation)  {
            case 1:
                cout <<"Please enter the day of the appointment (Monday-1,...,Sunday-7)"<< endl<< ">>";
                cin >> day ;
                cout <<"Please enter the subject of the appointment"<< endl<< ">>";
                cin >> subject ;
                cout <<"Please enter the start time of the appointment (format : HH.MM (24H), for example 23.15 is 23:15))"<< endl<< ">>";
                cin >> start ;
                cout <<"Please enter the end time of the appointment (format : HH.MM (24H), for example 23.15 is 23:15))"<< endl<< ">>";
                cin >> end ;
                if(diary.addAppointment(day,start,end,subject)==1){
                     cout <<"Appointment added successfully"<< endl;
                }else{
                    cout <<"Appointment addition failed"<< endl;
                }
                break;
            case 2:
                cout <<"Please enter the day of the appointment (Monday-1,....,Sunday-7)"<< endl<< ">>";
                cin >> day ;
                cout <<"Please enter the start time of the appointment (format : HH.MM (24H), for example 23.15 is 23:15))"<< endl<< ">>";
                cin >> start ;
                if(diary.removeAppointment(day,start)==1){
                    cout<<"Apointment removed successfully"<<endl;
                }else{
                    cout<<"No appointment found to remove"<<endl;
                }
                break;
            case 3:
                diary.cleanDiary();
                break;
            case 4:
                cout <<"Please enter the day of the appointment (Monday-1,...,Sunday-7)"<< endl<< ">>";
                cin >> day ;
                cout <<"Please enter the start time of the appointment (format : HH.MM (24H), for example 23.15 is 23:15))"<< endl<< ">>";
                cin >> start ;
                if(diary.findAppointment(day,start)==NULL){
                    cout<<"Appointment not found"<<endl;
                }else{
                    cout<<"Appointment found"<<endl;
                }
                break;
            case 5:
                cout <<"Please enter the day of the appointment you want to copy (Monday-1,...,Sunday-7)"<< endl<< ">>";
                cin >> appDay ;
                cout <<"Please enter the start time of the appointment you want to copy (format : HH.MM (24H), for example 23.15 is 23:15))"<< endl<< ">>";
                cin >> appStart ;
                cout <<"Please enter the day where to copy the appointment (Monday-1,...,Sunday-7)"<< endl<< ">>";
                cin >> day ;
                cout <<"Please enter the start time of the copy of the appointment (format : HH.MM (24H), for example 23.15 is 23:15))"<< endl<< ">>";
                cin >> start ;
                cout <<"Please enter the end time of the copy of the appointment (format : HH.MM (24H), for example 23.15 is 23:15))"<< endl<< ">>";
                cin >> end ;
                result = diary.copyAppointment(appDay, appStart, day, start, end);
                if(result==0){
                    cout<<"No Appointment found to copy"<<endl;
                }else if(result==-1){
                    cout<<"Appointment copy failed"<<endl;
                }else{
                    cout<<"Appointment copy successfull"<<endl;
                }
                break;
            case 6:
                diary.printDiary();   break;
            case 7:
                run = false;   break;
                return 0;
        }
    }
}
