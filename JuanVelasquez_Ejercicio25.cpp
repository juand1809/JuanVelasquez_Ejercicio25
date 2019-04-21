#include <fstream>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cmath>

using namespace std; 

double modelo (double y, double w);
void euler (double w, int nSteps, double init); 
void implicit (double w, int nSteps, double init); 

int main(){
    cout << "Modelo de Euler" << endl;
    euler(1,100,1);
    cout << "Modelo implícito" << endl;
    implicit(1,100,1);
    return 0;
}

double modelo (double y, double w){
    return -w*y;
}

void euler (double w, int nSteps, double init){
    double a = 0.0;
    double b = 4/w;
    double delta_t = (b-a)/nSteps;
    double *y_list;
    double *t_list;
    y_list = new double[nSteps+1];
    t_list = new double[nSteps+1];
    y_list[0] = init;
    t_list[0] = a;
    
    for (int i = 0; i < nSteps+1; i++){
        y_list[i+1] = y_list[i] + delta_t*modelo(y_list[i],w);
        t_list[i+1] = t_list[i] + delta_t;
        cout << t_list[i] << " " << y_list[i] << endl;
    }
}

void implicit (double w, int nSteps, double init){
    double a = 0.0;
    double b = 4/w;
    double delta_t = (b-a)/nSteps;
    double *y_list;
    double *t_list;
    y_list = new double[nSteps+1];
    t_list = new double[nSteps+1];
    y_list[0] = init;
    t_list[0] = a;

    for (int i = 0; i < nSteps+1; i++){
        double aux = y_list[i]/(1+w*delta_t);
        y_list[i+1] = y_list[i] + delta_t*modelo(aux,w);
        t_list[i+1] = t_list[i] + delta_t;
        cout << t_list[i] << " " << y_list[i] << endl;
    }
    
}
