//
//  Book.cpp
//  ex4_library
//
//  Created by Omri Klinger on 5/18/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#include "Book_t.h"


void Book_t::borrowBook(const char* uid){
    borrowerList.insert(uid);
    numOut++;
}

void Book_t::returnBook(){
    numOut--;
}

string Book_t::status(){
    if(numOut==0){
        return "Full";
    }else if(numOfCopies>numOut){
        return "Available";
    }else{
        return "Out";
    }
}

const char* Book_t::nextWaiting(){
    const char* waiter= NULL;
    if(waitingList.size()>0){
        waiter= waitingList.front();
        waitingList.pop();
    }
    return waiter;
        
}

void Book_t::addToWaiting(const char* uid){
    waitingList.push(uid);
}
