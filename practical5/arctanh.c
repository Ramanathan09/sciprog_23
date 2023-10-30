#include<stdio.h>
#include<math.h>

//Delacring function/prototype to calculate Mclaurin series for arctanh(x) for given x
double arctanh1(const double x, const double del);
//Delcaring fucntion/prototye for calculation of arctanh(x) from log function defenition 
double arctanh2(const double x);

int main(){
  
  double x, del;
  //entering precision delta for calculating/terminating Mclaurin series
  printf("enter the precision for the Mclaurin series:\n");
  scanf("%lf", &del);

  int length =1000;
  //Defining two arrays to store values for arctanh calculated through different means
  double tanh1[length];
  double tanh2[length];
   
  //Defining varaible to store values in array and initializing value for x
  int i=0;
   x=-0.9;
  //with the condition x<=0.9 the last term is not printing but changing it to x<=0.9000001 is working
  while (x<=0.9000001 && i<length){

    tanh1[i]=arctanh1(x,del);
    tanh2[i]=arctanh2(x);
    
    printf("The difference between values calculated at x = %.10lf between two method is %.10lf \n", x, fabs(tanh1[i]-tanh2[i]));
    x=x+0.01;
    i++;
  }

  return 0;

}


double arctanh1(const double x, const double del){

  int n=0;//initializing approximation parameter n
  double val, elem, arctanh=0;//varaible to store elements in Mclaurin series and Initializing arctan
  
  //loop to calculate arctan from mclaurin series till the term falls below delta
  do{
  val=2*n+1;
  elem=pow(x,val)/val;
  arctanh +=elem;
  n++;
  }while(fabs(elem)>=del);

  return(arctanh);

}

double arctanh2(const double x){

  double arctanh;
  //Value of arctanh as per log definition
  arctanh = (log(1+x) - log(1-x))/2;

  return(arctanh);
}
