#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef int BYTE;

//char *argv[];

// function prototypes.
int contacts();
int isjpeg();

int main(int argc, char *argv[]){
    // check usage/
    if(argc != 2){
        // this check is not necessary since (OR if) we create a function isjpeg out side main. 
        printf("please supply second argument !\n");
        return 1;
    } 
	// detects if a file is a jpeg.
    // what is jpeg? : is a file starting with the same first 3 hexadecimal bytes.
    FILE *file = fopen(argv[1], "r");
    if(!file){
        return 1;
    }
    // allocating 3 bytes to byte.
    BYTE byte[3];
    // reads the first 3 bytes of file, based on jpeg defination.
    fread(byte, sizeof(byte), 3, file); 
    // checking whats inside the bytes.....
    if(byte[0] == 0xff && byte[1] == 0xd8 && byte[2] == 0xff){
        printf("possible a jpeg!\n");
    } else {
        printf("not jpeg");
    }

    fclose(file); // closing the file pointer.
    //contacts();
    return 0;
}
// function implementation
int contacts(){
    // saves names and phone nubers to a csv file.
    FILE *myfile = fopen("contacts.csv", "a");
    if(!myfile){
        return 1;
    }
    char *name = malloc(4);
    char *number = malloc(4);
    scanf("%s", name);
    scanf("%s", number);

    // put to a file..
    
    if(fprintf(myfile, "%s , %s\n", name, number)){
        printf("new contact saved succeflly");
    }
    
    fclose(myfile);
}

/*
int isjpeg(){
    // detects if a file is a jpeg.
    // what is jpeg? : is a file starting with the same first 3 hexadecimal bytes.
    FILE *file = fopen(argv[1], "r");
    if(!file){
        return 1;
    }
    // allocating 3 bytes to byte.
    BYTE byte[3];
    // reads the first 3 bytes of file, based on jpeg defination.
    fread(byte, sizeof(byte), 3, file); 
    // checking whats inside the bytes.....
    if(byte[0]= 0xff && byte[1] = 0xff && byte[2] = 0xff){
        printf("possible a jpeg!\n");
    } else {
        printf("not jpeg");
    }

    fclose(file); // closing the file pointer.

} */

