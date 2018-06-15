/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: tflick
 *
 * Created on 8. Juni 2018, 12:42
 */

#include <cstdlib>
#include <iostream>
#include "complex.h"
#include <string>

using namespace std;

complex add (complex *a, complex *b) {
    complex c;
    c.setreal(a->getreal() + b->getreal());
    c.setima(a->getima()+b->getima());
    //c.print();            
    return c;
}

int main(int argc, char** argv) {

    double betrag;
    string input;
    complex compl1, compl2, compl3;
    
    //read real and imaginary part for the first number
    cout << "Give real-part for first complex number: ";
    cin >> input;
    cout << endl;
    compl1.setreal(stod(input));
    cout << "Give imaginary-part for first complex number: ";
    cin >> input;
    cout << endl;
    compl1.setima(stod(input));
    
    //read real and imaginary part for the second number    
    cout << "Give real-part for second complex number: ";
    cin >> input;
    cout << endl;
    compl2.setreal(stod(input));
    cout << "Give imaginary-part for second complex number: ";
    cin >> input;
    cout << endl;
    compl2.setima(stod(input));
    
    
    //print the two numbers
    cout << "First complex number: ";
    compl1.print();
    cout << "Second complex number: ";
    compl2.print();
    
    cout << endl;
    
    //Calculate absolute and square and print it to console
    cout << "Absolute of first number: " << compl1.abs() << endl;
    cout << "Square of first number: " << compl1.square() << endl;
    
    cout << endl;
    
    //Calculate the sum of the two numbers
    compl3 = add(&compl1, &compl2);
    
    //print the sum
    cout << "Sum of complex numbers: ";
    compl3.print();
    
    cout << endl;
    
    return 0;
}

