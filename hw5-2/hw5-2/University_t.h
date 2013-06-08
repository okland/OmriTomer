//
//  university_t.h
//  hw5-2
//
//  Created by Omri Klinger on 6/8/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#ifndef __hw5_2__university_t__
#define __hw5_2__university_t__

#include <iostream>
#include <vector>
#include "ESF_Student_t.h"
#include "FOH_Student_t.h"


using namespace std;


//this is our singelton should be intiated only once
class University_t {
public:
    //get the university singelton
    static University_t& getUn();
    
    //notify students that the price go up
    void priceUp();
    
    //notify esf students that next day lecture is canceled
    void nextDayLectureCancel();
    
    void Attach(Observer_t* _observer);
    void Detach(Observer_t* _observer);

protected:
    void Notify();
    void NotifyEsf();


    
private:
    //dont allow others to create objects
    University_t(void);
    
    //dont allow to dtor object
    ~University_t(void);
    
    static University_t un;
    
    //dont allow copy ctor
    University_t(const University_t& _un);
    
    //dont allow assignments
    void operator=(University_t& _un);
    
    //Observers vectors
    vector<FOH_Student_t*> FOH;
	vector<ESF_Student_t*> ESF;
    
};

#endif /* defined(__hw5_2__university_t__) */
