#include <stdio.h>
#include <string.h>
#include <conio.h>

void reader();
void reader2();

int main(){
    
    reader();
    return 0;

}

void reader(){
    FILE *fp;
    fp = fopen("sample.txt", "r");
    char ch;
    if(fp == NULL){
        printf("error opening file !");
    }else{
        while(!feof(fp)){
            ch = fgetc(fp);
            printf("%c", ch);
        }
    }
    getch();
    fclose(fp);
    
}

void reader2(){
    // with do .. while
    FILE *fp;
    fp = fopen("sample.txt", "r");
    if(fp == NULL){
        printf("error opening file !");
    }
    do{
        // taking input single char at atime
        char c = fgetc(fp);
        // checking for EOF
        if(feof(fp)){
            break;
        }
        printf("%c", c);
    }while(1);
    
    getch();
    fclose(fp); 
}
