//
//  ImpStudent_t.h
//  hw5-2
//
//  Created by Omri Klinger on 6/8/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#ifndef __hw5_2__ImpStudent_t__
#define __hw5_2__ImpStudent_t__

#include <iostream>
using namespace std;

class ImpStudent_t{
public:
    virtual string GetName();
    virtual string GetFaculty();
    virtual void SetFaculty(const string _faculty);
    ~ImpStudent_t(){};
protected:
    ImpStudent_t(void){};
};
#endif /* defined(__hw5_2__ImpStudent_t__) */
