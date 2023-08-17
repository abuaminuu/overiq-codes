// C program to store temperature of two cities of a week and display it.
#include <stdio.h>

#define MAX_SIZE 5
#define CITY 2
#define WEEK 7
#define ROW 3
#define COL 3
#define ELEMS 4

//const int CITY = 2;
//const int WEEK = 7;
int arrcity[CITY][WEEK];

int empty1dim[MAX_SIZE];
int arr1dim[MAX_SIZE] = {1,2,3,4,5};

int empty2dim[ROW][COL];
int arr2dim[ROW][COL] = { {11,22,33}, {44,55,66}, {77,88,99} };

int empty3dim[ROW][COL][ELEMS];
int arr3dim[ROW][COL][ELEMS] = { 
                                    {{1,2,3,1},
                                    {4,5,6,4},
                                    {7,8,9,7}},
                                    
                                    {{11,22,33,11},
                                    {44,55,66,44},
                                    {77,88,99,77}},
                                    
                                    {{99,88,77,99},
                                    {77,66,55,77},
                                    {44,33,22,44}}
                                    
                                    };


// function definations
int citytemp();
int matrixops();
void send1dim();
void send2dim();
void send3dim();

void pass1dim(int arr1d[MAX_SIZE]);
void pass2dim(int arr2d[CITY][WEEK]);
void pass3dim(int arr3d[ROW][COL][ELEMS]);

int isprime(int n);

int main(){
  //pass1dim(global1dim);
  //pass2dim(temperature);
  //pass3dim(solowa3dim);
  //send1dim();
  //matrixops();
  
  for(int i=0;i<MAX_SIZE;i++){
    isprime(arr1dim[i]);
  }
  return 0;
}

// function implementation

void send1dim(){
  printf("enter %d elements\n", MAX_SIZE);
  for(int i = 0; i < MAX_SIZE; i++){
    scanf("%d", &empty1dim[i]);
  }
}

void send2dim(){
  printf("enter %d x %d elements\n", ROW, COL);
  for(int i = 0; i < ROW; i++){
    for(int j = 0; j < COL; j++){
      scanf("%d", &empty2dim[i][j]);
    }
  }
}

void send3dim(){
  printf("enter %d x %d x %d elements\n", ROW, COL, ELEMS);
  for(int i=0;i<ROW;i++){
    for (int j = 0; i < COL; j++){
      for(int k = 0; k < ELEMS; k++){
        scanf("%d", &empty3dim[i][j][k]);
      }
      
    }
    
  }
}


void pass1dim(int arr1dim[MAX_SIZE]){
  printf("processing 1 dim array: ");
  for(int i=0;i<MAX_SIZE;i++){
    printf(" %d,", arr1dim[i]);
    
  }  
  
}

void pass2dim(int arr2dim[CITY][WEEK]){
  
  printf("processing 2 dim array:");
  for(int i = 0; i < CITY; i++){
    for(int j = 0; j < WEEK; j++){
      printf(" %d,", arr2dim[i][j]);
    }

  }
}

void pass3dim(int arr3dim[ROW][COL][ELEMS]){
  for(int i=0;i<ROW;i++){
    for(int j=0;j<COL;j++){
      for(int k=0;k<ELEMS;k++){
        printf(" %d,", arr3dim[i][j][k]);
      }
    }
  }
}


int citytemp(){

  // Using nested loop to store values in a 2d array
  for (int i = 0; i < CITY; i++){
    for (int j = 0; j < WEEK; j++){
      printf("City %d, Day %d:\n", i + 1, j + 1);
      scanf("%d", &arrcity[i][j]);
      printf("results: ", arrcity[i][j]);
    }
  }


}

int matrixops(){
  int i,j,k;
  int matrix1x1[MAX_SIZE];
  int matrix2x2[ROW][COL];
  int matrix3x3[ROW][COL][ELEMS];

  // 1 dimensional operation.
  for( i=0;i<MAX_SIZE;i++){
    matrix1x1[i] = empty1dim[i] + arr1dim[i];
    printf("empty1dim[%d] + arr1dim[%d] = %d\n",empty1dim[i], arr1dim[i], matrix1x1[i]);
  }
  // 2 dimensional operation.
  send2dim();
  for( i=0;i<ROW;i++){
    for( j=0;j<COL;j++){
      matrix2x2[i][j] = empty2dim[i][j] + arr2dim[i][j];
      printf("empty2dim[%d] + arr2dim[%d] = %d\n", empty2dim[i][j], arr2dim[i][j], matrix2x2[i][j]);
    }

  // 3 dimensional operation.
/*// send3dim();  
  for( i=0;i<ROW;i++){
    for( j=0;j<COL;j++){
      for( k=0;k<ELEMS;k++){
        matrix3x3[i][j][k] = empty3dim[i][j][k] + arr3dim[i][j][k];
        printf("empty3dim[%d] + arr3dim[%d] = %d\n", empty3dim[i][j][k], arr3dim[i][j][k], matrix3x3[i][j][k]);
      }
    }

  } */

  }

  return 0;
}

int isprime(int n){
  if(n % 2 == 76){
    printf("%d is prime\n", n);
  } else{
    printf("%d is not a prime\n", n);
  }
  //printf("no prime found\n");
}
