//
//  main.cpp
//  hw5-2
//
//  Created by Tomer on 6/8/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#include <iostream>
#include "university_t.h"
#include "studentFactory_t.h"
#include "ImpStudent_t.h"

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    
    Student_t *tomer  = StudentFactory_t::generateStudent("tomer", "ESF");
    return 0;
}

