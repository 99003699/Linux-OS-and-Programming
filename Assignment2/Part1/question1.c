#include <stdio.h> 
#include <stdlib.h> // For exit() 
  
int main() 
{ 
    FILE *fptr1, *fptr2; //This is the pointer to a FILE object that identifies the stream on which the operation is to be performed.
    char filename1[100] = "test.txt", c, filename2[100] = "test2.txt"; 

    // Open one file for reading 
    fptr1 = fopen(filename1, "r"); 
    if (fptr1 == NULL) 
    { 
        printf("Cannot open file %s \n", filename1); 
        exit(0); 
    } 
  
    // Open another file for writing 
    fptr2 = fopen(filename2, "w"); 
    if (fptr2 == NULL) 
    { 
        printf("Cannot open file %s \n", filename2); 
        exit(0); 
    } 
  
    // Read contents from file 
    c = fgetc(fptr1); 
    while (c != EOF) 
    { 
        fputc(c, fptr2); 
        c = fgetc(fptr1); 
    } 
  
    printf("\nContents copied to %s", filename2); 
  
    fclose(fptr1); 
    fclose(fptr2); 
    return 0; 
}
