//
//  library.h
//  ex4_library
//
//  Created by Omri Klinger on 5/18/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#ifndef ex4_library_library_h
#define ex4_library_library_h

#include <iostream>
#include "map"
#include "Book_t.h"
#include "Borrower_t.h"

using namespace std;

class Library_t
{
public:
    Library_t(){};
    ~Library_t(){};
     
    int addBook(const char* name,const char* author,const char* ISBN,int numOfCopies);
    int removeBook(const char* ISBN);
    Book_t* searchBook(const char* ISBN);
    
    int addBorrower(const char* name,const char* uid);
    int removeBorrower(const char* uid);
    Borrower_t* searchBorrower(const char* uid);
    
    int borrowBook(const char* uid,const char* ISBN);
    int returnBook(const char* uid,const char* ISBN);
    
private:
   map<const char*,Book_t*> books;
   map<const char*,Borrower_t*> borrowers;
    
};


#endif
