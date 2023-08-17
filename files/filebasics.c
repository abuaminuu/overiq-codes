#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

// employee structure
    struct employee{
        char name[12];
        char designation[12];
        int salary;
        int age;

    }emp, employee; 

// function prototypes
void openclose(void);
void writingchar(void);
void readingchar(void);
void fputtings(void);
void freadings(void);
void usefprintf(void);
void usefscanf(void);
void casefp(void);
void casesc(void);
void usefwrite();
void usefread();
void casefwrite();
void casefread();


int main(int argc, char *argv){
    
    //openclose();
    //writingchar();
    //readingchar();
    //fputtings();    
    //freadings();
    //usefprintf();
    //usefscanf();
    //casefp();
    //casesc();    
    //usefwrite();
    //usefread();
    
    return 0;
}

// function definations

void openclose(){
    FILE *fp, *samplefp; // *fp is a file pointer.
    //fp = fopen("sample.txt", "w");
    if(fp == NULL){
        // if theres error while opening the file.
        printf("operation failed\n");
    }
    int terminator = 35;

    printf("terminator: [%c]\nFILE pointer: %u", terminator, fp);

    fclose(fp); // close the file
    
}

void writingchar(void){
    // remember: to write, you must be in "w" mode.
    // use fputc(int, FILE *); to write char to a file
    FILE *fpwrite;
    fpwrite = fopen("test.txt", "w");
    int ch;
    if(fpwrite == NULL){
        printf("error opening a file");
        exit(1);
    }
    //printf("pres ctrl+z/ctrl+D to halt operations in DOS/Linux\n");
    //printf("enter text: ");
    // getc gets char input from keyboard.
    //while((ch = getchar()) != EOF){
      //  fputc(ch, fpwrite);
    //}
    for(ch=33;ch<100;ch++){
        fputc(ch, fpwrite);
    }
    fclose(fpwrite);
    
}

void readingchar(void){
    FILE *fpread;
    fpread = fopen("test.txt", "r");
    int ch;
    if(fpread == NULL){
        printf("error opening file");
    }    
    while((ch = fgetc(fpread)) != EOF){
        printf("%c", ch, ch);
    } 
      
    getch();
    fclose(fpread);
    /*do{
        ch = fgetc(fpread);
        if(ch == EOF){
            break;
        }                
        printf("%c", ch);
            
    }while(1);  */

}

void fputtings(void){
    char *str;
    FILE *fp;
    fp = fopen("fputtings.txt", "w");

    // sanity check
    if(fp == NULL){
        printf("error opening file!");
        exit(1);
    }
    // proceed to writing strings
    printf("testing fputs() function\n");
    printf("to stop writing process ctrl+z in windows and ctrl+D in linux\n");
    while(gets(str) != NULL){
        fputs(str, fp);
    }

    fclose(fp);
}

void freadings(void){
    char *str;
    FILE *fp;
    fp = fopen("fputtings.txt", "r");
    if(fp == NULL){
        printf("error opening file!");
        exit(1);
    }
    while(fgets(str, 50, fp) != NULL){
        printf("%s", str);
    }
}

void usefprintf(void){
    FILE *fp;
    fp = fopen("records.txt","w");
    char name[23];
    int chars, rollno, n, i;
    float marks;

    if(fp == NULL){
    printf("error opening the file !"); 
    exit(1);
    }
    printf("testing fprintf() function\n");
    printf("how many information you want to save to a file ?: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        fflush(stdin);
        printf("enter details of student %d\n", i+1);
        printf("name of student: ");
        //scanf("%s", name);
        gets(name);
        printf("enter rollno: ");
        scanf("%d", &rollno);
        printf("enter marks: ");  
        scanf("%f", &marks);
        chars = fprintf(fp, "Name: %s\tRollno: %d\tMarks: %.2f\n", name, rollno, marks); 
        printf ("number of characters  chars wrote %d\n", chars); 
    }
    
    fclose(fp);
    // end of function.
}

void usefscanf(void){
    FILE *fp;
    fp = fopen ("records.txt","r");
    char *name;
    int chars, rollno;
    float marks;

    if (fp == NULL){
        printf("error opening the file!"); 
        exit(1);
    }

    printf("testing fscanf() function\n");
    printf("Name:\tRollNo:\tMarks:\n"); 
    while(fscanf(fp, "Name: %s\tRollno: %d\tMarks: %f\n", name, &rollno, &marks) != EOF){
        printf("%s\t%d\t%.2f\t\n", name, rollno, marks);
    }
    fclose(fp);
}

void casefp(void){
    FILE *fp;
    char name[50];
    int roll_no, chars, i, n;
    float marks;

    fp = fopen("records.txt", "w");

    if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    printf("Testing fprintf() function: \n\n");

    printf("Enter the number of records you want to enter: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        fflush(stdin);
        printf("\nEnter the details of student %d \n\n", i +1);

        printf("Enter name of the student: ");
        gets(name);

        printf("Enter roll no: ");
        scanf("%d", &roll_no);

        printf("Enter marks: ");
        scanf("%f", &marks);

        chars = fprintf(fp, "Name: %s\t\tRoll no: %d\t\tMarks: %.2f\n", name, roll_no, marks);
       printf("\n%d characters successfully written to the file\n\n", chars);
    }

    fclose(fp);
}

void casesc(void){
FILE *fp;
    char name[50];
    int roll_no, chars;
    float marks;

    fp = fopen("records.txt", "r");

    if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    printf("Testing fscanf() function: \n\n");
    printf("Name:\t\tRoll\t\tMarks\n");

    while( fscanf(fp, "Name: %s\t\tRoll no: %d\t\tMarks: %f\n"
                    , name, &roll_no, &marks) != EOF )
    {
        printf("%s\t\t%d\t\t%.2f\n", name, roll_no ,marks);
    }

    fclose(fp); 
}

void usefwrite(void){
    
    int chars, i, n, size;
    FILE *fp;
    fp = fopen("employee.txt", "wb");
    if(fp == NULL){
        printf("error creating file!");
        exit(1);
    }
    printf("testing fwrite function\n");
    printf("how many entries would you want to save?: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        
        printf("enter details of employee %d\n", i+1);
        fflush(stdin);
        printf("name: ");
        gets(emp.name);
        printf("designation: ");
        gets(emp.designation);
        printf("age: ");
        scanf("%d", &emp.age);
        printf("enter emp salary: ");
        scanf("%d", &emp.salary);
        chars = fwrite(&emp, sizeof(emp), 1, fp);
        printf("%d items recorded!\n");

    }
    fclose(fp);
}

void usefread(){
    FILE *fp = fopen("employee.txt", "rb");
    if(fp == NULL){
        printf("error opening a file!");
        exit(1);
    }
    printf("testing fread()\n");
    while(fread(&emp, sizeof(emp), 1, fp) == 1){
        printf("Name: %s\n", emp.name); 
        printf("Designation: %s\n", emp.designation);
        printf("Salary: %d\nAge: %d\t\n",emp.salary);
        printf("Age: %d\n", emp.age);
    }
    fclose(fp);
}

