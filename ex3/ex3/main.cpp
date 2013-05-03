//
//  main.cpp
//  ex3
//
//  Created by Tomer on 5/3/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

void ourMain(){
    int operation;
    while(1)  {
        cout <<  "1. Add appoiments." 	<< endl ;
        cout <<  "2. Remove appoiment" 	<< endl ;
        cout <<  "3. Clean Diary. "		<< endl ;
        cout <<  "4. Find appoiment "		<< endl ;
        cout <<  "5. Print Diary 	"	<< endl ;
        cout <<  "6. Quit. 		"	<< endl ;
        cout <<  "Enter your choice:" 	<< endl ;
        cin >> operation ;
        
        switch (operation)  {
            case 1:
                addMeeting (…);	break;
            case 2:
                rmvMeeting(…);	break;
            case 3:
                cleanDiary(…);	break;
            case 4:
                findMeeting(…);  	break;
            case 5:
                printDiary(…);     	break;
            case 6:				break;
        }		
    }
}