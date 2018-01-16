#include <stdio.h>

FILE *f;
int WordCounter(FILE *f);

int main()
{
 char filename[100];
  printf("Enter a filename :");
  gets(filename);

    // Open file in read-only mode
   f = fopen(filename,"r");

    if(f==NULL)
        printf("Error opening file");

    else
        printf("Words : %d \n", WordCounter(f));
fclose(f);
return(0);
}
int WordCounter(FILE *f)
{

 char ch;
 int wordcount;
 wordcount = 0;

while ((ch=getc(f)) != EOF)
		   if (ch == ' ' || ch == '\n')
                ++wordcount;

return wordcount;
}
