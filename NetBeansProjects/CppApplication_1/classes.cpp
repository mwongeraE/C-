/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
class Vector {
public :
    Vector(int s) :elem{new double[s]},sz{s}{} //Construct a vector
    double& operator[](int i) {return elem[i];} //element access:subscripting
    int size() {return sz;}
private :
    double * elem; // pointer to the elements
int sz;   // the number of elements
};

Vector v(6); //a vector with 6 elements