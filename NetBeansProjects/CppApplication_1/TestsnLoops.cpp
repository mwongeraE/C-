/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
 // ONE //
#include <iostream>
using namespace std; 

bool accept()
{
    cout << "Do you want to proceed (y or n)?\n"; //write question
    
    char answer = 0;
    cin>>answer;   //read answer
    
    if(answer == 'y')return true;
    return false;   
}

// TWO //
bool accept2()
{
    cout << "Do you want to proceed (y or n)?\n";
    
    char answer = 0;
    cin >> answer;
    
    switch (answer) {
        case 'y':
            return true;
        case 'n':
            return false;
        default:
            cout << "I'll take that for a no. \n";
            return false;
    }
    
}