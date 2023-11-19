#include<stdio.h>
#include<stdlib.h>

//allocate space for the array
int *allocatearray(int n){
  int *p;
  p=(int*)malloc(n*sizeof(int));
  return p;
}
//fill the array with 1
void fillwithone(int *array, int n){
  int i;
  for(i=0; i<n; i++){
    array[i]=1;
  }
}
//print the array
void printarray(int *array, int n){
  int i;
  for(i=0; i<n; i++){
    printf("The value of array[%d] is %d\n", i, array[i]);
  }
}
//free the array
void freearray(int *array){
  free(array);
}

int main(){
  int n, *array;

  printf("Enter the size of the array\n");
  scanf("%d",&n);

  array= allocatearray(n);
  fillwithone(array,n);
  printarray(array,n);
  freearray(array);
 
  return 1;

}
 
