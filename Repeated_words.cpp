/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Repeated_words.cpp
 * Author: mwongera
 *
 * Created on 16 July 2017, 9:29 AM
 */

#include <cstdlib>

using namespace std;

/*
 * 
 */
int main() {

    string previous = "";
    string current;
    while (cin>>current) {
        if (previous == current)
            cout <<"repeated word: "<<current<<'\n';
        previous = current;
    }
}

