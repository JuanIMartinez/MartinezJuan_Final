#include <iostream>
#include <fstream>
#include <cmath>
#include <math.h>

using namespace std;

void leap_frog(float t_inicial, float t_final);

int main(){
    
    double t_ini=0.0;
    double t_fin=10.0;
    
    leap_frog(t_ini, t_fin);
    return(0); 
}




void leap_frog(float t_inicial, float t_final ){
    
    double  vx_nuevo, vy_nuevo,m=7294.29, q=2.0, dt=0.1, x_nuevo, y_nuevo;

    x_nuevo=1;
    y_nuevo=0;
    vx_nuevo=0;
    vy_nuevo=1;
    int Ex=0;
    int Ey_1=0,Ey_2=3;
    ofstream outfile;
    outfile.open("datos.dat");
    outfile <<x_nuevo<<" "<<y_nuevo<<endl;
    
     
    while (t_inicial<t_final){
       
        if (t_inicial<3){
        double vx_anterior=vx_nuevo;
        double vy_anterior=vy_nuevo;
        double x_anterior=x_nuevo;
        double y_anterior=y_nuevo;
        outfile <<x_nuevo<<" "<<y_nuevo<<endl;
        
        
            
        vx_nuevo=vx_anterior+Ex*dt;
        x_nuevo=x_anterior+vx_anterior*dt+(0.5)*Ex*dt*dt;
        
        vy_nuevo=vy_anterior+Ey_1*dt;
        y_nuevo=y_anterior+vy_anterior*dt+(0.5)*Ey_1*dt*dt;
        
        t_inicial=t_inicial+dt;  
        }
        
        if (3.<=t_inicial<7.){
            double vx_anterior=vx_nuevo;
            double vy_anterior=vy_nuevo;
            double x_anterior=x_nuevo;
            double y_anterior=y_nuevo;
            outfile <<x_nuevo<<" "<<y_nuevo<<endl;



            vx_nuevo=vx_anterior+Ex*dt;
            x_nuevo=x_anterior+vx_anterior*dt+(0.5)*Ex*dt*dt;

            vy_nuevo=vy_anterior+Ey_2*dt;
            y_nuevo=y_anterior+vy_anterior*dt+(0.5)*Ey_2*dt*dt;

            t_inicial=t_inicial+dt;  
        }
        
        if (t_inicial>=7.){
            double vx_anterior=vx_nuevo;
            double vy_anterior=vy_nuevo;
            double x_anterior=x_nuevo;
            double y_anterior=y_nuevo;
            outfile <<x_nuevo<<" "<<y_nuevo<<endl;



            vx_nuevo=vx_anterior+Ex*dt;
            x_nuevo=x_anterior+vx_anterior*dt+(0.5)*Ex*dt*dt;

            vy_nuevo=vy_anterior+Ey_1*dt;
            y_nuevo=y_anterior+vy_anterior*dt+(0.5)*Ey_1*dt*dt;

            t_inicial=t_inicial+dt;  
        }
           
    }
    outfile.close();
}


