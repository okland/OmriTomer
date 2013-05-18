//
//  Book.h
//  ex4_library
//
//  Created by Omri Klinger on 5/18/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#ifndef ex4_library_Book_h
#define ex4_library_Book_h

#include <iostream>
#include "set"
#include "queue"

using namespace std;

class Book_t
{
public:
    const char* name;
    const char* author;
    const char* ISBN;
    
    Book_t(const char* name,const char* author,const char* ISBN,int numOfCopies){
        this->name= name;
        this->author= author;
        this->ISBN= ISBN;
        this->numOfCopies= numOfCopies;
        this->numOut= 0;
    };
    ~Book_t(){};
    
    
    void bookReport();
    
    void borrowBook(const char* uid);
    void returnBook();
    string status();    
    const char* nextWaiting();
    void addToWaiting(const char* uid);

private:
    int numOfCopies;
    int numOut;
    set<const char*> borrowerList;
    queue<const char*> waitingList;
};


#endif
