/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mwongera
 *
 * Created on 16 July 2017, 8:19 AM
 */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout<<"Please enter two names \n";
    string first;
    string second;
    cin>>first>>second;
    if (first == second) cout<<"Thats the same name twice \n";
    if (first<second) cout <<first<<"Is alphabetically before "<<second <<"\n";
    if (first>second) cout <<first<<"Is alphabetically after "<<second<<"\n"; 
}

