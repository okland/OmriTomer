//
//  ESF_Student_t.h
//  hw5-2
//
//  Created by Omri Klinger on 6/8/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#ifndef __hw5_2__ESF_Student_t__
#define __hw5_2__ESF_Student_t__

#include <iostream>
#include "Student_t.h"
#include "Subject_t.h"

class ESF_Student_t:
    public Student_t{
        friend class StudentFactory_t;
        public:
            void updateAll(Subject_t* _newSubject);
            ~ESF_Student_t(){};
        private:
            //only created by factory
            ESF_Student_t(ImpStudent_t* _theStudent);
            ESF_Student_t(void);
};
#endif /* defined(__hw5_2__ESF_Student_t__) */
