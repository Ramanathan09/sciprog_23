#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int factorial(int n);

int main(){
  int i,  order;
  double e, *term;

  printf("Enter the order of the polynomial needed\n");
 
  if( scanf("%d",&order)!=1){
    printf(" Not a number");
    return 1;
  }
//runtime memory allocation depending on the input(order)
  term=malloc(order*sizeof(double));
//loop to calculate the coefficients of f(x)
  for(i=0; i<order; i++){
    term[i]=1/(double)factorial(i+1);
    printf("e term for order %d is %1.14lf \n",i+1,term[i]);
  }

  e=1.0;
//adding the coefficients to find e as x=1 in f(x)
  for(i=0; i<order; i++){
   e=e+term[i];
  }
 
  free(term);

  printf(" estimated value of e is %.10lf and the difference from actual value is %e \n",e,e-exp(1.0));
  return 0;
}

int factorial(int n){
  if(n<0){
    printf(" Error: negative number cannot be used for factorial");
    return(-1);
  }
  
  else if(n==0){return 1;}
//recursive function to calculate the factorial
  else{return(n*factorial(n-1));}

}
