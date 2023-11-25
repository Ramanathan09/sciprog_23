#include<stdio.h>
//function to calculate gcd through iteration
int iterative_gcd(int a, int b){
  int temp;
//Performs euclidian algorithm
  while(b!=0){
    temp=b;
    b=a%b;
    a=temp;
  }
  return a;
}
//function to calculate gcd through recursive
int recursive_gcd(int a, int b){
  if(b==0){
    return a;
  }
  else{
//calling the recursive function
    return(recursive_gcd(b,a%b));
  }
}

int main(){
  int a,b;
  printf("Enter a positive integer\n");
  scanf("%d",&a);

  printf("Enter a positive integer\n");
  scanf("%d",&b);

  printf("The gcd from iterative method is %d\n",iterative_gcd(a,b));
  printf("The gcd from recursive method is %d\n",recursive_gcd(a,b));

  return 0;
}
