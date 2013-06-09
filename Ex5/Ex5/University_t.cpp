//
//  University_t.cpp
//  Ex5
//
//  Created by Tomer on 6/9/13.
//  Copyright (c) 2013 Tomer. All rights reserved.
//

#include "University_t.h"

University_t University_t::_university;

University_t& University_t::getInstance(){
    return _university;
}


University_t::University_t(void){
    
}
University_t::~University_t(void){
    
}