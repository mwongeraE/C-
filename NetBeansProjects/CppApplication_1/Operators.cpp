/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout<<"Please enter a floating-point value: ";
    double n;
    cin>>n;
    cout<<"n == "<<n
            <<"\nn+1 == "<< n+1
            <<"\nthree times n == "<<3*n
            <<"\ntwice n =="<<n+n
            <<"\nn Squared =="<<n*n
            <<"\nhalf of n =="<<n/2
            <<"\nsquare root of n =="<<sqrt(n)
            <<endl;
    
    cout<<"Please enter two names \n";
    string first;
    string second;
    cin>>first>>second;
    if (first == second) cout<<"Thats the same name twice \n";
    if (first<second) cout <<first<<"Is alphabetically before "<<second <<"\n";
    if (first>second) cout <<first<<"Is alphabetically after "<<second<<"\n"; 
}

