#include<stdio.h>

int main(){
  int n=5, p=3, q=4;
  double  A[n][p], B[p][q], C[n][q];
  int i, j;
//initializing matrix A
  for(i=0; i<n; i++){
    for(j=0; j<p; j++){
      A[i][j]=i+j;
    }
  }
//initializing matrix B
  for(i=0; i<p; i++){
    for(j=0; j<q; j++){
      B[i][j]=i-j;
    }
  }
//initializing matrix C with 0s
  for(i=0; i<n; i++){
    for(j=0; j<q; j++){
      C[i][j]=0.0;
    }
  }
//calling matmult to perform matrix multiplication
  matmult(n,p,q,A,B,C);
//printing the matrix A 
  printf("\nThis is matrix A: \n");
  for(i=0; i<n; i++){
    for(j=0; j<p; j++){
     printf("%3.0f ", A[i][j]);
    }
    printf("\n");
  }
//printing matrix B  
  printf("\nThis is matrix B: \n");
  for(i=0; i<p; i++){
    for(j=0; j<q; j++){
     printf("%3.0f ", B[i][j]);
    }
    printf("\n");
  }
//printing the matrix C where C= AxB 
  printf("\nThis is matrix C: \n");
  for(i=0; i<n; i++){
    for(j=0; j<q; j++){
     printf("%3.0f ", C[i][j]);
    }
    printf("\n");
  }

return 0;

}
