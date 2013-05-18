//
//  library.cpp
//  ex4_library
//
//  Created by Omri Klinger on 5/18/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#include "Library_t.h"


#ifndef __ex4__Library__
#define __ex4__Library__

#define failed -1;
#define success 1;


//books managment functions
int Library_t::addBook(const char* name,const char* author,const char* ISBN,int numOfCopies){
    if(books.find(ISBN)->second){
        return failed;
    }else{
        books.insert(std::pair<const char*,Book_t*>(ISBN,new Book_t(name,author,ISBN,numOfCopies)));
        return success;
    }
};

int Library_t::removeBook(const char* ISBN){
    std::map<const char*,Book_t*>::iterator it;
    it=books.find(ISBN);
    if(it->second){
        delete it->second;
    }
    books.erase(it);
    return success;
};

Book_t* Library_t::searchBook(const char* ISBN){
    std::map<const char*,Book_t*>::iterator it;
    it=books.find(ISBN);
    if(it->second){
        return it->second;
    }else{
        return NULL;
    }
};

//borowwers managment functions
int Library_t::addBorrower(const char* name,const char* uid){
    if(borrowers.find(uid)->second){
        return failed;
    }else{
        borrowers.insert(std::pair<const char*,Borrower_t*>(uid,new Borrower_t(name,uid)));
        return success;
    }
};

int Library_t::removeBorrower(const char* uid){
    std::map<const char*,Borrower_t*>::iterator it;
    it=borrowers.find(uid);
    if(it->second){
        delete it->second;
    }
    borrowers.erase(it);
    return success
};

Borrower_t* Library_t::searchBorrower(const char* uid){
    std::map<const char*,Borrower_t*>::iterator it;
    it=borrowers.find(uid);
    if(it->second){
        return it->second;
    }else{
        return NULL;
    }
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



#endif /* defined(__ex4__Library__) */

