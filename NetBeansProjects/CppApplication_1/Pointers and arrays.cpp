/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
// copying ten elements from one array to another
//ONE //
#include <iostream>
using namespace std; 

void copy_fct()
{
    int v1[10] = {0,1,2,3,4,5,6,7,8,9};
    int v2[10]; //to become a copy of v1
    
    for (auto i=0; i!=10; ++i)
        v2[i]=v1[i];
}

// TWO
#include <iostream>
using namespace std; 

void print()
{
    int v[]={0,1,2,3,4,5,6,7,8,9};
    
    for (auto x:v)
        cout <<x<< '\n';
    
    for (auto x:{10,21,32,43,54,65})
        cout << x << '\n';
}