//
//  Subject_t.h
//  Ex5
//
//  Created by Tomer on 6/9/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#ifndef __Ex5__Subject_t__
#define __Ex5__Subject_t__

#include <iostream>
#include <vector>
using namespace std;

class Observer_t;
class Subject_t{
    
public:
    Subject_t(){};
    ~Subject_t(){};
    void Attach(Observer_t* _observer);
    void Detach(Observer_t* _observer);
protected:
    void Notify();
private:
    vector<Observer_t*> theObservers;
    
};


#endif /* defined(__Ex5__Subject_t__) */
