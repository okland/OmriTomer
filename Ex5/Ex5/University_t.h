//
//  University_t.h
//  Ex5
//
//  Created by Tomer on 6/9/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#ifndef __Ex5__University_t__
#define __Ex5__University_t__

#include <iostream>

using namespace std;

class University_t{
public:
    //get the university singelton
    static University_t& getInstance();
    /*
     //notify students that the price go up
     void priceUp();
     
     //notify esf students that next day lecture is canceled
     void nextDayLectureCancel();
     
     void Attach(Observer_t* _observer);
     void Detach(Observer_t* _observer);
     
     protected:
     void Notify();
     void NotifyEsf();
     
     
     */
private:
    static University_t _university;
    
    //dont allow others to create objects
    University_t(void);
    
    //dont allow to dtor object
    ~University_t(void);
    
    //dont allow copy ctor
    University_t(const University_t& _un);
    
    //dont allow assignments
    void operator=(University_t& _un);
    
     //Observers vectors
    // vector<FOH_Student_t*> FOH;
    // vector<ESF_Student_t*> ESF;
};

#endif /* defined(__Ex5__University_t__) */
