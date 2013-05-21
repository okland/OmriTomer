//
//  library.cpp
//  ex4_library
//
//  Created by Omri Klinger on 5/18/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#include "Library_t.h"
#include <string.h>

#ifndef __ex4__Library__
#define __ex4__Library__

#define failed -1;
#define success 1;
using namespace std;

//books managment functions
int Library_t::addBook(const char* name,const char* author,const char* ISBN,int numOfCopies){
    if(strcmp(books.find(ISBN)->second->ISBN,ISBN)==0){
        return failed;
    }else{
        books.insert(pair<const char*,Book_t*>(ISBN,new Book_t(name,author,ISBN,numOfCopies)));
        return success;
    }
};

int Library_t::removeBook(const char* ISBN){
    map<const char*,Book_t*>::iterator it=books.begin();
    if(books.size()>0){
    while (it != books.end()) {
        if(strcmp(it->first,ISBN)==0){
            if(it->second->getNumOut()==0){
                map<const char*,Book_t*>::iterator toErase=it;
                ++it;
                books.erase(toErase);
                break;
            }else{
                return failed;
            }
        }else{
            ++it;
        }
    }}
    return success;
};

Book_t* Library_t::searchBook(const char* ISBN){
    map<const char*,Book_t*>::iterator it=books.begin();
    if(books.size()>0){
        while (it != books.end()) {
            if(strcmp(it->first,ISBN)==0){
                return it->second;
            }else{
                ++it;
            }
        }}
    return NULL;
};

//borowwers managment functions
int Library_t::addBorrower(const char* name,const char* uid){
    if(strcmp(borrowers.find(uid)->first,uid)==0){
        return failed;
    }else{
        borrowers.insert(pair<const char*,Borrower_t*>(uid,new Borrower_t(name,uid)));
        return success;
    }
};

int Library_t::removeBorrower(const char* uid){
    map<const char*,Borrower_t*>::iterator it;
    it=borrowers.begin();
    
    while (it != borrowers.end()) {
        if(strcmp(it->first,uid)==0){
            map<const char*,Borrower_t*>::iterator toErase=it;
            ++it;
            borrowers.erase(toErase);
            break;
        }else{
            ++it;
        }
    }
    return success
};

Borrower_t* Library_t::searchBorrower(const char* uid){
    map<const char*,Borrower_t*>::iterator it;
    it=borrowers.begin();
    
    while (it != borrowers.end()) {
        if(strcmp(it->first,uid)==0){
            return it->second;
        }else{
            ++it;
        }
    }
    return NULL;
};


//transaction mangment functions
int Library_t::borrowBook(const char* uid,const char* ISBN){
    Book_t* book=searchBook(ISBN);
    Borrower_t* borrower=searchBorrower(uid);
    if(book&&borrower){
        if(book->status()=="Out"){
            book->addToWaiting(uid);
        }else{
            book->borrowBook(uid);
            borrower->addBookBorrowed(ISBN);
        }
        return success;
    }else{
        return failed;
    }
};

int Library_t::returnBook(const char* uid,const char* ISBN){
    Book_t* book=searchBook(ISBN);
    Borrower_t* borrower=searchBorrower(uid);
    if(book&&borrower){
        book->returnBook();
        const char* tempUid=book->nextWaiting();
        if(tempUid){
            Borrower_t* tempBorrower=searchBorrower(tempUid);
            if(tempBorrower){
               book->borrowBook(tempUid);
               tempBorrower->addBookBorrowed(ISBN);
               return success;
            }
            return failed;
        }
        return success;
    }else{
        return failed;
    }
};

//print functions

void Library_t::libraryBooksReport(){
    unsigned long numOfBooks=books.size();
    if(numOfBooks>0){
        cout<<" The library have "<<numOfBooks<<" book right now "<<endl;
        cout<<" Here are thier full details:"<<endl;
        for (std::map<const char*,Book_t*>::iterator it=books.begin(); it!=books.end(); ++it){
            it->second->bookReport();
        }
    }else{
        cout<<" There are no books in library"<<endl;
    }
};

void Library_t::libraryBorrowersReport(){
    unsigned long  numOfBorrowers= borrowers.size();
    if(numOfBorrowers>0){
        cout<<" The library have "<<numOfBorrowers<<" books borrowers listed "<<endl;
        cout<<" Here are thier full details:"<<endl;
        for (std::map<const char*,Borrower_t*>::iterator it=borrowers.begin(); it!=borrowers.end(); ++it){
            it->second->borrowerReport();
        }        
    }else{
        cout<<" There are no books borrowers listed in library"<<endl;
    }
};


#endif /* defined(__ex4__Library__) */

