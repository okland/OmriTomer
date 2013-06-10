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
void University_t::Notify(){
    for(int i=0;i<ESF.size();++i){
        ESF[i]->Update(this);
    }
    for(int i=0;i<FOH.size();++i){
        FOH[i]->Update(this);
    }
}
void University_t::NotifyEsf(){
    for(int i=0;i<ESF.size();++i){
        ESF[i]->updateAll(this);
    }
}
void University_t::priceUp(){
    Notify();
}
void University_t::nextDayLectureCancel(){
    NotifyEsf();
}

void University_t::Attach(Observer_t* _observer){
    ImpStudent_t* student = (ImpStudent_t*)_observer;
    if(student->GetFaculty()=="ESF"){
        ESF.push_back((ESF_Student_t*)student);
    }else{
        FOH.push_back((FOH_Student_t*)student);
    }
}

void University_t::Detach(Observer_t* _observer) {
	ImpStudent_t* student = (ImpStudent_t*)_observer;
	if (student->GetFaculty() == "ESF") {
		int i;
        for(i=0;i<ESF.size();++i){
            if (ESF[i] == student) break;
        }
        ESF.erase(ESF.begin() + i);
	}
	else if (student->GetFaculty() == "FOH") {
        int i;
        for(i=0;i<FOH.size();++i){
            if (FOH[i] == student) break;
        }
        FOH.erase(FOH.begin() + i);
	}
    student->DetachTo(this);
}
bool University_t::detachByName(const string name){
    bool found=false;
    for(int i=0;i<ESF.size();++i){
        if(ESF[i]->GetName()==name){
            Detach(ESF[i]);
            found=true;
            break;
        }
    }
    if(!found){
    for(int i=0;i<FOH.size();++i){
        if(FOH[i]->GetName()==name){
            Detach(FOH[i]);
            found=true;
            break;
        }
    }
    }
    return found;
}