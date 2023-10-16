#include<stdio.h>
#include<math.h>

int main(){

//Initializing total number of points and end points 

int n=12;
double n_0=0;
double n_12=M_PI/3;
double width=(n_12-n_0)/12.0;

//adding the end point values of f(x)= tan(x)
double sum=tan(n_0)+tan(n_12);

//initializing loop variables 

int i;
double x;
//calulating f(x)=tan(x) for 11 equidistant points between n_0 and n_12

for(i=1; i<12; i++) {
  
   x=n_0 + width*i;
   sum+=2*tan(x);
 
}
//calculating the approximate integral
double int_approx=sum*width*0.5;
double int_actual=log(2);

printf("The approximate integral for tan(x) from x=0 to x=pi/3 is \n%.5f \n The exact integral is for the same function is  \n%.5f\n", int_approx, int_actual);
return(0);

}
