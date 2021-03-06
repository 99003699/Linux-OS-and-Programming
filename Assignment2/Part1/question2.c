#include <stdio.h>
#include <stdlib.h>

void main() 
{ 
    FILE *fptr; 
    char ch; 
    int word=1,character=1,line=1;
    char fname[20] = "test.txt";  
    fptr=fopen(fname,"r"); 
    if(fptr==NULL) 
     { 
         printf(" File does not exist or can not be opened."); 
      } 
    else
    {
        { 
          ch=fgetc(fptr); 
          //printf(" The content of the file %s are : ",fname); 
          while(ch!=EOF) 
            { 
                if(ch==' ')
                    { 
                        word++; 
                    }

                else if(ch=='\n')
                {
                    line++;
                }
                else
                {
                    character++; 
                }
            ch=fgetc(fptr); 
            }
        printf("\n The number of words  %s are : %d\n",fname,word-2); 
         printf("\n The number of words %s are : %d\n",fname,line); 
        printf(" The number of characters %s are : %d\n\n",fname,character-1);         
        } 
     
    }
    fclose(fptr);
}