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
    int number_of_words = 0;
    string previous = " ";                 // not a word
    string current;
        while (cin>>current) {
                 ++number_of_words;       // increase word count
                 if (previous == current)
                           cout << "word number " << number_of_words
                                    << " repeated: " << current << '\n';
                 previous = current;
          }
 }