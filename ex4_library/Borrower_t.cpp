//
//  Borrower.cpp
//  ex4_library
//
//  Created by Omri Klinger on 5/18/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#include "Borrower_t.h"

void Borrower_t::addBookBorrowed(const char* ISBN){
    booksBorrowed.insert(ISBN);
}