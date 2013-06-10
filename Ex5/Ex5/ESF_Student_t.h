//
//  ESF_Student_t.h
//  Ex5
//
//  Created by Tomer on 6/9/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#ifndef __Ex5__ESF_Student_t__
#define __Ex5__ESF_Student_t__

#include <iostream>
#include "ImpStudent_t.h"
#include "Subject_t.h"

class ESF_Student_t: public ImpStudent_t{
    friend class StudentFactory_t;
public:
    void updateAll(Subject_t* _newSubject);
    ~ESF_Student_t(){};
private:
    //only created by factory
    ESF_Student_t(const string _name);
    ESF_Student_t(void);
};

#endif /* defined(__Ex5__ESF_Student_t__) */
