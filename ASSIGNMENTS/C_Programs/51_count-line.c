#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int count = 0;
    fp = fopen("hello.txt", "r");
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\n')
        {
            count++;
        }
    }
    fclose(fp);

    printf("Number of lines in the file: %d", count);

    return 0;
}