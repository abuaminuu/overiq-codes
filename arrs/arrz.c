#include <stdio.h>

#define MAX_SIZE 3
int scores[MAX_SIZE];
char grades[MAX_SIZE];
char arrz[] = {'a','d', 'c', 'h'};
char arry[MAX_SIZE];
int maxminnumb(int a);
void acceptonedim();
void getchinp();
void getstrinp();

int main(){
    char *names[5];
    int len = sizeof(names) / sizeof(names[0]);
    //printf("lentg of *names:%d", len);
    
    for(int i=0;i<len; i++){
    printf("enter name %d : ", i+1);
    char c[15];
    scanf("%[^\n]%*c", &c);
    //fgets(c, sizeof(names), stdin);
    names[i] = c;
    }

    for(int i=0;i<len;i++){
        for(int j=0;j>i;j++){
            printf("%c, %c", names[i], names[j]);
        }
    }
    return 0;
}

void getchinp(){
    for(int i = 0; i < MAX_SIZE; i++){
        // inserting elems of the arr through input stream.
        printf("enter grade %d: ", i+1);
        scanf("%[^\n]%*c", &grades[i]);
        //char c = getchar();
        //grades[i] = (char)c;
        
    }

    //printf("elem of the arr:");
    for(int i = 0; i < MAX_SIZE; i++){
        printf("%c == ", grades[i]);
        printf("grades ascii equ: %d\n", grades[i]);
    }    
    printf("\n");
}
void getstrinp(){

    for(int i = 0; i < MAX_SIZE; i++){
        // inserting elems of the arr through input stream.
        printf("enter two chr %d: ", i+1);
        //scanf("%[^\n]%*c", &arry[i]);
        char c[20];
        //c = fgets(c);
        
        //grades[i] = c;
        
    }

    
    for(int i=0;i<MAX_SIZE;i++){
        printf("arrz: %c,", arrz[i]);
        printf("grades array elements %c", grades[i]);
        printf("\n");
        printf("grades array ascii equ %d", grades[i]);
    }    
    printf("\n");
}

void acceptonedim(int arr[MAX_SIZE]){ 
    // MAX_SIZE is optional when passing the whole array to a function.
    for(int i=0;i<MAX_SIZE;i++){
        // note the array modified here is an original array not a copy, unlike normal variables.
        arr[i] *= 2;
    }
}
