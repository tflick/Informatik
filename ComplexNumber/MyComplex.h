/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   complex.h
 * Author: tflick
 *
 * Created on 8. Juni 2018, 12:43
 */

#ifndef COMPLEX_H
#define COMPLEX_H

class complex {
    double real, ima;
public:
    // Constructors
    complex();
    complex(double a, double b);
    complex(const complex& orig);
    //Destructor
    virtual ~complex();
    
    //Methods
    //Getter-Methods
    double getreal();
    double getima();
    
    //Setter-Methods
    int setreal(double a);
    int setima(double a);
    
    //Print Methods
    void print();
    
    //Calculation Methods
    double betr();
    complex square();    
    complex add(complex& a);
    
private:

};

#endif /* COMPLEX_H */

