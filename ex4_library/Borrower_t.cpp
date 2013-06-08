//
//  Borrower.cpp
//  ex4_library
//
//  Created by Omri Klinger on 5/18/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#include "Borrower_t.h"
#include <String.h>

using namespace std;

void Borrower_t::addBookBorrowed(const char* ISBN){
    booksBorrowed.insert(ISBN);
    booksIn++;
}
void::Borrower_t::returnBook(const char* ISBN){
    set<const char*>::iterator it;
    for (it=booksBorrowed.begin(); it!=booksBorrowed.end(); ++it){
        if(strcmp(*it,ISBN)==0){
            booksBorrowed.erase(it);
            break;
        }
    }
}

void Borrower_t::borrowerReport(){
    cout<<"Name: "<<name<<" Uid: "<<uid<<endl;;
    if(booksBorrowed.size()>0){
        cout<<"This person has borrowed the following "<<booksBorrowed.size()<<" books :"<<endl;
        for (std::set<const char*>::iterator it=booksBorrowed.begin(); it!=booksBorrowed.end(); ++it){
            cout << ' ' << *it;
        }
        cout<<endl;
    }else{
        cout<<"This person has not any borrowed books for the Moment"<<endl;
    }
}