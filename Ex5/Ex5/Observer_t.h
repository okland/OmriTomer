//
//  Observer_t.h
//  Ex5
//
//  Created by Tomer on 6/9/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#ifndef __Ex5__Observer_t__
#define __Ex5__Observer_t__

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
#endif /* defined(__Ex5__Observer_t__) */
