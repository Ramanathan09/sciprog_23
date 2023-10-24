#include<stdio.h>
#include<math.h>

/*decalring number of points at which tan is calculated and an 
 array to store those tan values as global variables*/
int N=12;
double Tanvalues[13];
 

//declaring functions to calculate radians and area under tan(x) for given range of x
double degtorad(double deg);
double sumtan(int N);

int main(){
  double deg, approx_integral, actual_integral, rad;  
  int i;

//Updating Tanvalues array with tan(x) from 0 to 60 degrees  
for ( i=0; i<=N; i++){
     deg = i*5;
     rad = degtorad(deg);
     Tanvalues[i] = tan(rad);
     printf("\nThe value of Tanvalues[%d] is %f at angle x=%.2f degrees", i, Tanvalues[i], deg);
  }

//Calling sumtan function to calculate the integral using sum method 
  approx_integral = sumtan(N);
  actual_integral = log(2);
  printf("\n The approximate integral obained from trapeziod method of calculation is %f \n The actual integral for the sum of tan(x) from 0 to 60 degrees is %f", approx_integral, actual_integral);
  return 0;
}

double degtorad(double deg){
//Converting degrees into radians and returning the value
  return (deg*M_PI)/180.0;

}

double sumtan(int N){
//Initialzing the area with tan(x) at end points that is at 0 and 60 degrees
  double area = Tanvalues[0] + Tanvalues[12], width;
  int i;
//Calculating the sum for tan(x) that is adding 2tan(x) 
  for ( i=1; i<N; i++){

    area+= 2*Tanvalues[i];
  }
  
  width = degtorad(60/N);
//Approximating the integral value as areas of many trapezoids
  area = area*width*0.5;
  return area;

}
















