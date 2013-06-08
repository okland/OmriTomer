//
//  main.cpp
//  hw5-2
//
//  Created by Tomer on 6/8/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#include <iostream>
#include "University_t.h"
#include "Student_t.h"
#include "StudentFactory_t.h"


int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    //get university
    University_t& UN = University_t::getUn();
    //create students
    Student_t* studentA= StudentFactory_t::generateStudent("omri klinger", "FOM");
    Student_t* studentB= StudentFactory_t::generateStudent("tomer coreanu", "FOM");
    Student_t* studentC= StudentFactory_t::generateStudent("hadar landao", "ESF");
    Student_t* studentD= StudentFactory_t::generateStudent("eilam gilasy", "ESF");
    
    return 0;
}

