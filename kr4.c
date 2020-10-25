#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//Найдите наименьшее количество строчных латинских букв в строке
//файла.

int main(int argc, char *argv[])
{
FILE *fp;
char ch;
 
if ((fp=fopen(argv[1], "r"))==NULL) {
printf("Cannot open file.\n");
return 1;
}
int i = 0;//счётчик букв
int j = 1;//счётчик строк
int min_str = j;//минимальная строка
int maxLet = INT_MAX;//количество букв
while((ch=fgetc(fp)) != EOF) {
    if (ch >= 'a'&& ch <= 'z')
        i++;
 
    if (ch == '\n')
    {
        if (i < maxLet)
        {
            maxLet = i;
            min_str = j;
        }
        i = 0;
        j++;
    }
}
printf("String number %d namber letter %d (min)\n", min_str, maxLet);
fclose(fp);
return 0;
}
