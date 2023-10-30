#include<stdio.h>
#include<stdlib.h>

//Declaring function that can calculate Fn and Fn-1 for Fibonacci series
//The input argument for the function would be Fn-1 and Fn-2
//The exit arguements will be Fn and Fn-1
void fibonacci(int *a,int *b);

int main(){
  int i,n;
  int f0=0, f1=1;
   
  printf(" Please enter the number of fibanacci sequence to be dispalyed\n");
  scanf("%d",&n);
 
  //Checking if the number provided is positive
  if(n<1){
    printf(" Not a positive number");
    exit(0);
  }
  
  //Printing F0 and F1
  printf("The fibonacci series is\n %d, %d, ",f0,f1);
  
  //Loop that calculates Fn from n=2
  for(i=2; i<=n; i++){
    fibonacci(&f1, &f0);
    printf("%d, ",f1);
    
    //Printing new line after 10 numbers
    if(i%10==0) printf("\n");
  } 
   
  return 0;  

}

void fibonacci(int *a,int *b){
  int Fn;
  //At this point a=fn-1 and b=fn-2
  Fn=*a+*b;
  *b=*a;
  *a= Fn;//Now a=Fn and b=fn-1 


}
