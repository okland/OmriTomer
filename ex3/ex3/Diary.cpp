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

using namespace std;

void Diary::printDiary()
{
    string days[7] = {"Monday","Tuesday","Wednsday","Thursday","Friday","Saturday","Sunday"};
    
    cout << setw(20)<<"";
    for(int i=0;i<=6;++i){
        cout << setw(20) << left <<days[i];
    }
    cout<<endl;
    for(int i=0;i<=24;++i){
        cout << setw(20) << i<<endl;
    }
   
}

