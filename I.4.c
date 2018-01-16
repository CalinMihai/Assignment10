#include <stdio.h>

FILE *f;
int CharacterCounter(FILE *f);

int main()
{
 char filename[100];
     printf("Enter a filename :");
  gets(filename);

    // Open file in read-only mode
   f = fopen(filename,"r");

    if(f==NULL)
        printf("Error opening file");


    printf("File char count: %i", CharacterCounter(f));

    fclose(f);
    return 0;
}

int CharacterCounter(FILE *f)
{
    char c;
    int cnt = 1;

    while(feof(f)==0)
    {
        c=fgetc(f);
        if (c != ' ' && c != '\n')
             cnt++;

    }
    return cnt;
}

