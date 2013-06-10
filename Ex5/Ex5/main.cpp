//
//  main.cpp
//  Ex5
//
//  Created by Tomer on 6/9/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#include <iostream>
#include "University_t.h"
#include "Student_t.h"
#include "StudentFactory_t.h"

int main(int argc, const char * argv[])
{

    University_t& uni = University_t::getInstance();
    
    
    bool run=true;
    while(run)  {
        string name;
        ImpStudent_t* student;
        int operation;

        cout <<  "1. Create new ESF student"<< endl ;
        cout <<  "2. Create new FOH student" << endl ;
        cout <<  "3. Create new ESF student and Attach it to University "<< endl ;
        cout <<  "4. Create new FOH student and Attach it to University "<< endl ;
        cout <<  "5. Detach student by name"<< endl ;
        cout <<  "6. Raise prices :-(((( "<< endl ;
        cout <<  "7. Anounce lecture is cancelled :-))))) "<< endl;
        cout <<  "8. Quit."<< endl ;
        cout <<  "Enter your choice:"<< endl ;
        cout << ">>";
        cin >> operation ;
        
        switch (operation)  {
            case 1:
                cout <<"Please enter student name"<< endl<< ">>";
                cin >> name ;
                student = StudentFactory_t::generateStudent(name, "ESF");
                cout<<student<< endl;
                break;
            case 2:
                cout <<"Please enter student name"<< endl<< ">>";
                cin >> name ;
                student = StudentFactory_t::generateStudent(name, "FOH");
                cout<<student<< endl;
                break;
            case 3:
                cout <<"Please enter student name"<< endl<< ">>";
                cin >> name ;
                student = StudentFactory_t::generateStudent(name, "ESF");
                uni.Attach(student);
                cout<<"Student has been enrolled to university"<< endl;
                break;
            case 4:
                cout <<"Please enter student name"<< endl<< ">>";
                cin >> name ;
                student = StudentFactory_t::generateStudent(name, "FOH");
                uni.Attach(student);
                cout<<"Student has been enrolled to university"<< endl;
                break;
            case 5:
                cout <<"Please enter student name"<< endl<< ">>";
                cin >> name ;
                if(uni.detachByName(name)){
                    cout <<"Student detached succesfully"<< endl;
                }else{
                    cout <<"No student found to detach"<< endl;
                }
                break;
            case 6:
                uni.priceUp();
                break;
            case 7:
                uni.nextDayLectureCancel();
                break;
            case 8:
                run = false;
                break;
                return 0;
        }
    }
    return 0;
}

