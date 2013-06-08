//
//  Observer_t.h
//  hw5-2
//
//  Created by Omri Klinger on 6/8/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#ifndef __hw5_2__Observer_t__
#define __hw5_2__Observer_t__

#include <iostream>

class Subject_t;
class Observer_t{
    
public:
    Observer_t(){};
    ~Observer_t(){};
    virtual void Update(Subject_t* _newSubject)=0;
protected:
    Subject_t* _subj;
    
};

#endif /* defined(__hw5_2__Observer_t__) */
