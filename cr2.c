#include <stdio.h>

char StrRev(char *dest,char * src, unsigned int namb){
int i,l,j;
char t;
unsigned int d;
i=0;
l=0;
while (src[l]!='\0'){
l++;
}
j=l-1;

while (i<j)
{
t=src[i];
src[i]=src[j];
src[j]=t;
i++;j--;
}
d=0;

while (d<=namb)
{
dest[d]=src[d];

d++;
}
return *dest;
}

int main()
{
unsigned int n;
char S[100];
char re[100];
fgets (S, 100, stdin);
scanf("%d",&n);
StrRev(re,S,n);
re[n+1]='\0';
printf ("%s\n", re);

return 0;
}
