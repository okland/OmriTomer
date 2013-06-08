//
//  university_t.cpp
//  hw5-2
//
//  Created by Omri Klinger on 6/8/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//

#include "University_t.h"

University_t University_t::un;

University_t& University_t::getUn(){
    return un;
}

void University_t::priceUp(){
    cout << "University price goes up notifing all students"
    << endl;
    Notify();
};

void University_t::nextDayLectureCancel(){
    Notify();
    cout << "Next day lecture was canceled notifing all the ESF students"<<endl;
    NotifyEsf();
    
};

void University_t::Attach(Observer_t* _observer) {
	Student_t* student = (Student_t*)_observer;
	
    if (student->GetFaculty() == "FOH") {
		FOH.push_back((FOH_Student_t*)student);
	}
	else if (student->GetFaculty() == "ESF") {
		ESF.push_back((ESF_Student_t*)student);
	}
	student->attachTo(this);
}

void University_t::Detach(Observer_t* _observer) {
    Student_t* student = (Student_t*)_observer;
	int i =0;
    
    if (student->GetFaculty() == "FOH") {
        for(i=0;i<FOH.size();++i){
            if(FOH[i]==student){
                FOH.erase(FOH.begin()+i);
                break;
            }
        }
	}
	else if (student->GetFaculty() == "ESF") {
		for(i=0;i<ESF.size();++i){
            if(ESF[i]==student){
                ESF.erase(ESF.begin()+i);
                break;
            }
        }

	}
}

void University_t::Notify() {
	for(int i = 0; i < FOH.size(); ++i) {
		FOH[i]->Update(this);
	}
	NotifyESF();
}

void University_t::NotifyEsf() {
	for(int i = 0; i < ESF.size(); ++i) {
		ESF[i]->Update(this);
	}
}
