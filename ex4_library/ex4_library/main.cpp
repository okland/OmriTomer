//
//  main.cpp
//  ex4_library
//
//  Created by Omri Klinger on 5/18/13.
//  Copyright (c) 2013 Omri Klinger. All rights reserved.
//




#include <iostream>
#include "Library_t.h"
using namespace std;

int main(int argc, const char * argv[])
{
    Library_t library;
    int operation;
    bool run=true;
    while(run)  {
        char* name=new char;
        char* author=new char;
        char* ISBN=new char;
        char* uid=new char;
        int numOfCopies;
        
        cout <<  "1. Add Book."<< endl ;
        cout <<  "2. Remove Book" << endl ;
        cout <<  "3. Search Book. "<< endl ;
        cout <<  "4. Add Borrower "<< endl ;
        cout <<  "5. Remove Borrower "<< endl ;
        cout <<  "6. Search Borrower "<< endl ;
        cout <<  "7. Borrow Book "<< endl;
        cout <<  "8. Return Book "<< endl;
        cout <<  "9. Print Book report"<< endl;
        cout <<  "10. Print Borrower report"<< endl;
        cout <<  "11. Quit."<< endl ;
        cout <<  "Enter your choice:"<< endl ;
        cout << ">>";
        cin >> operation ;
        
        switch (operation)  {
            case 1:
                cout <<"Please enter the book name"<< endl<< ">>";
                cin >> name ;
                cout <<"Please enter the book author"<< endl<< ">>";
                cin >> author ;
                cout <<"Please enter the book ISBN"<< endl<< ">>";
                cin >> ISBN ;
                cout <<"Please enter num of copies"<< endl<< ">>";
                cin >> numOfCopies ;
                if(library.addBook((const char*)name,(const char*)author,(const char*)ISBN,numOfCopies)==1){
                    cout <<"Book added successfully"<< endl;
                }else{
                    cout <<"Book addition failed"<< endl;
                }
                break;
            case 2:
                cout <<"Please enter the book ISBN you want to remove"<< endl<< ">>";
                cin >> ISBN ;
                if(library.removeBook(ISBN)==1){
                    cout<<"Book removed successfully"<<endl;
                }else{
                    cout<<"Book remove failed"<<endl;
                }
                break;
            case 3:
                // not an important function for debug not implemented yet
                break;
            case 4:
                cout <<"Please enter the borrower name"<< endl<< ">>";
                cin >> name ;
                cout <<"Please enter the borrower uid"<< endl<< ">>";
                cin >> uid ;
                if(library.addBorrower((const char *)name,(const char *)uid)==1){
                    cout <<"Borrower added successfully"<< endl;
                }else{
                    cout <<"Borrower addition failed"<< endl;
                }
                break;
            case 5:
                cout <<"Please enter the borrower uid you want to remove"<< endl<< ">>";
                cin >> uid ;
                if(library.removeBorrower(uid)==1){
                    cout<<"Borrower removed successfully"<<endl;
                }else{
                    cout<<"Borrower remove failed"<<endl;
                }
                break;
            case 6:
                // not an important function for debug not implemented yet
                break;
            case 7:
                cout <<"Please enter the book ISBN "<< endl<< ">>";
                cin >> ISBN ;
                cout <<"Please enter the borrower uid"<< endl<< ">>";
                cin >> uid ;
                if(library.borrowBook((const char*)uid,(const char*)ISBN)==1){
                    cout <<"Book borrowed successfully"<< endl;
                }else{
                    cout <<"Book borrowed  failed"<< endl;
                }
                break;
            case 8:
                cout <<"Please enter the book ISBN to return"<< endl<< ">>";
                cin >> ISBN ;
                cout <<"Please enter the borrower uid"<< endl<< ">>";
                cin >> uid ;
                if(library.returnBook((const char*)uid,(const char*)ISBN)==1){
                    cout <<"Book returned successfully"<< endl;
                }else{
                    cout <<"Book return failed"<< endl;
                }   
                break;
            case 9:
                cout <<"The Book Report:"<< endl;
                library.libraryBooksReport();
                break;
            case 10:
                cout <<"The Borrower Report:"<< endl;
                library.libraryBorrowersReport();
                break;
            case 11:
                run = false;   break;
                return 0;
        
        }
    }
}
