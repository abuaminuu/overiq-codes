#include <stdio.h>

const int CITY = 2;
const int WEEK = 7;
int print2dim();

int main(){
	//printf("this is 2 dim arr !\n");

	int x[3][4] = {
		{1,2,3,3},
		{4,5,6,4},
		{7,8,9,7}
	} ;// 3 rows and 4 columns 2dim total of 3x4=12(3 elems each with 4 elems)

	int y[2][3][4] = {
		{{1,2,3,4}, {5,6,7,8}, {9,10,11,12}},
		{{12,11,10,9}, {8,77,6,5}, {4,3,2,1}}
	};  // 3dim arr with 2x3x4 = 24 items.

	print2dim();
	//printf("%i\n", y[0][1][3]);
	getchar();
	return 0;
}


int print2dim(){

	int temperature[CITY][WEEK];
	// using nested loop to store values in 2d array.
	for(int i =0; i < CITY; ++i){
		for(int j = 0; j < WEEK; ++j){
			printf("City %d, Day %d: ", i+1, j+1);
			scanf("%d", &temperature[i][j]);
		}
	}

  	printf("\n Displaying values:'\n\n");
	// using nested loop to display values of 2d array.
	for(int i = 0; i < CITY; ++i){
		for(int j = 0; j < WEEK; ++j){
			printf("CITY %d, DAY %d = %d\n", i+1, j+1, temperature[i][j]);
		}
	}
}

