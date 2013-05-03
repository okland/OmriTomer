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
    
    while(run)  {
        float start=0.0;
        float end=0.0;
        int day=0;
        string subject;
        
        cout <<"1. Add appoiments."<< endl ;
        cout <<  "2. Remove appoiment" << endl ;
        cout <<  "3. Clean Diary. "<< endl ;
        cout <<  "4. Find appoiment "<< endl ;
        cout <<  "5. Print Diary 	"<< endl ;
        cout <<  "6. Quit."<< endl ;
        cout <<  "Enter your choice:"<< endl ;
        cout << ">>";
        cin >> operation ;
        
        switch (operation)  {
            case 1:
                cout <<"Please enter the day of the appointment (Monday-1,....,Saturday-7)"<< endl<< ">>";
                cin >> day ;
                cout <<"Please enter the subject of the appointment"<< endl<< ">>";
                cin >> subject ;
                cout <<"Please enter the start time of the appointment (format : HH.MM (24H), for example 23.15 is 23:15))"<< endl<< ">>";
                cin >> start ;
                cout <<"Please enter the end time of the appointment (format : HH.MM (24H), for example 23.15 is 23:15))"<< endl<< ">>";
                cin >> end ;
                diary.addAppointment();	break;
            case 2:
                diary.removeAppointment();	break;
            case 3:
                diary.cleanAppointment();	break;
            case 4:
                diary.findAppointment();  break;
            case 5:
                diary.printDiary();   break;
            case 6:
                run = false;   break;
    return 0;
        }
    }
}
