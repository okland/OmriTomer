//
//  Borrower.h
//  ex4_library
//
//  Created by Omri Klinger on 5/18/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#ifndef __ex4_library__Borrower__
#define __ex4_library__Borrower__

#include <iostream>
#include "set"
using namespace std;

class Borrower_t
{
public:
    const char* name;
    const char* uid;
    
    Borrower_t(const char* name,const char* uid){
        this->name= name;
        this->uid= uid;
    };
    ~Borrower_t(){};
    
    void borrowerReport();
    
    void addBookBorrowed(const char* ISBN);
    int numOfBorrowedBooks(){return (int)booksBorrowed.size();};
    void returnBook(const char *ISBN);
    
    
private:
    int booksIn;
    set<const char*> booksBorrowed;
    
};

#endif /* defined(__ex4_library__Borrower__) */
