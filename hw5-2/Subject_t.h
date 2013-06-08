//
//  Subject_t.h
//  hw5-2
//
//  Created by Omri Klinger on 6/8/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#ifndef __hw5_2__Subject_t__
#define __hw5_2__Subject_t__

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

#endif /* defined(__hw5_2__Subject_t__) */
