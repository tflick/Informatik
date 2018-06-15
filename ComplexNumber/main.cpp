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
#include "MyComplex.h"
#include <string>
#include "functions.h"

// root
#include "TASImage.h"

using namespace std;

int main(int argc, char** argv) {

    double betrag;
    string input;
    complex compl1, compl2, compl3;
    
    const int width=800;
    double schritte, max_schritte;
    double i,j;
    double max_abs;
    double* v= new double[width*width];
    
    TASImage* img = new TASImage(width,width);    
    
//    //read real and imaginary part for the first number
//    cout << "Give real-part for first complex number: ";
//    cin >> input;
//    cout << endl;
//    compl1.setreal(stod(input));
//    cout << "Give imaginary-part for first complex number: ";
//    cin >> input;
//    cout << endl;
//    compl1.setima(stod(input));
//    
//    //read real and imaginary part for the second number    
//    cout << "Give real-part for second complex number: ";
//    cin >> input;
//    cout << endl;
//    compl2.setreal(stod(input));
//    cout << "Give imaginary-part for second complex number: ";
//    cin >> input;
//    cout << endl;
//    compl2.setima(stod(input));
//    
//    
//    //print the two numbers
//    cout << "First complex number: ";
//    compl1.print();
//    cout << "Second complex number: ";
//    compl2.print();
//    
//    cout << endl;
//    
//    //Calculate absolute and square and print it to console
//    cout << "Absolute of first number: " << compl1.abs() << endl;
//    cout << "Square of first number: " ;
//    compl3 = compl1.square();
//    compl3.print();
//    
//    cout << endl;
//    
//    //Calculate the sum of the two numbers
//    compl3 = compl1.add(compl2);
//    
//    //print the sum
//    cout << "Sum of complex numbers: ";
//    compl3.print();
//    
//    cout << endl;
    
    cout << "Mandelbrotmenge generieren" << endl;
    
    max_abs = 4; 
    max_schritte = 127.;
    int idx=0;
    int idy=0;
    
    for (i=-2.0; i<1.995; i=i+0.005){
        idy = 0;
        for (j=-2.0; j<1.995; j=j+0.005){
            compl1.setreal(i);
            compl1.setima(j);
            schritte = mandelbrot(compl1, max_abs, max_schritte);
            long index = idy*width+idx;
            
//            cout << "i: " << i << ", j: " << j << endl;
//            cout << "idx: " << idx << ", idy: "<< idy <<endl;
//            cout << "index: " << index << endl;
            v[index] = schritte;
            idy++;
        }
        idx++;
    }
    
    img->SetImage(v,width,width);
    img->WriteImage("mandelbrot.png");
    
    return 0;
}

