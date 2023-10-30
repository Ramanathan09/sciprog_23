#include<stdio.h>

int main(){
  int i, err;
  double j;
  //Printing input instruction for the user
  printf("Enter one integer and one double\n");
  err=scanf("%d  %lf", &i,&j);
  //Checking if 2 inputs have been provided and printing those 
  if(err!=2) printf("Please check the input");
  else printf("integer = %d \n double = %lf \n",i,j);

  return 0; 
}




