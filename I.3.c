#include <stdio.h>

FILE *f;
int LineCounter(FILE *f);

int main()
{
char filename[100];
     printf("Enter a filename :");
  gets(filename);

    // Open file in read-only mode
   f = fopen(filename,"r");

    if(f==NULL)
        printf("Error opening file");

    printf("Line count is: %i", LineCounter(f));

    fclose(f);
    return 0;
}

int LineCounter(FILE *f)
{
    char c;
    int cnt = 1;

    while(feof(f) == 0)
    {
        c = fgetc(f);

      if (c == '\n')
        cnt++;
    }

    return cnt;
}
