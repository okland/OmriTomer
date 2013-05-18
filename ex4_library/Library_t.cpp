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
int Library_t::addBook(const char* name,const char* author,const char* IBSN,int numOfCopies){
    if(findBookPos(IBSN)>=0){
        return failed;
    }else{
        books.insert(books.begin(),new Book_t(name,author,IBSN,numOfCopies));
        return success;
    }
};

int Library_t::removeBook(const char* IBSN){
    int bookPos= findBookPos(IBSN);
    if(bookPos>=0){
        if(books[bookPos]->status()=="Full"){
            delete books[bookPos];
            books.erase(books.begin()+bookPos);
        }else{
            return failed;
        }
    }
    return success;
};

Book_t* Library_t::searchBook(const char* IBSN){
    int pos= findBookPos(IBSN);
    if(pos>0){
        return books[pos];
    }else{
        return NULL;
    }
};

int Library_t::findBookPos(const char* IBSN){
    for(int i=0;i<books.size();++i){
        const char* tempIBSN= books[i]->IBSN;
        if(tempIBSN==IBSN){
            return i;
        }
    }
    return failed;
};

//borowwers managment functions
int Library_t::addBorrower(const char* name,const char* uid){
    if(findBorrowerPos(uid)>=0){
        return failed;
    }else{
        borrowers.insert(borrowers.begin(),new Borrower_t(name,uid));
        return success;
    }
};

int Library_t::removeBorrower(const char* uid){
    int borrowerPos= findBorrowerPos(uid);
    if(borrowerPos>=0){
        delete borrowers[borrowerPos];
        borrowers.erase(borrowers.begin()+borrowerPos);
    }
    return success;
};

Borrower_t* Library_t::searchBorrower(const char* uid){
    int pos= findBorrowerPos(uid);
    if(pos>0){
        return borrowers[pos];
    }else{
        return NULL;
    }
};

int Library_t::findBorrowerPos(const char* uid){
    for(int i=0;i<borrowers.size();++i){
        const char* tempUid= borrowers[i]->uid;
        if(tempUid==uid){
            return i;
        }
    }
    return failed;
};

//transaction mangment functions
int Library_t::borrowBook(const char* uid,const char* IBSN){
    Book_t* book=searchBook(IBSN);
    Borrower_t* borrower=searchBorrower(uid);
    if(book&&borrower){
        if(book->status()=="Out"){
            book->addToWaiting(uid);
        }else{
            book->borrowBook(uid);
            borrower->addBookBorrowed(IBSN);
        }
        return success;
    }else{
        return failed;
    }
};

int Library_t::returnBook(const char* uid,const char* IBSN){
    Book_t* book=searchBook(IBSN);
    Borrower_t* borrower=searchBorrower(uid);
    if(book&&borrower){
        book->returnBook();
        const char* tempUid=book->nextWaiting();
        if(tempUid){
            Borrower_t* tempBorrower=searchBorrower(tempUid);
            if(tempBorrower){
               book->borrowBook(tempUid);
               tempBorrower->addBookBorrowed(IBSN);
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

