//пример варианта 16-17
//char * strnrev (char * dest,char * src,unsigned int n) – функция переворота,но в 
//dest пишется неболее n байтов. Возвращает dest.
   
#include <stdio.h>
char StrRev(char *dest,char * src, unsigned int n){
int i,l,j;
i=0;
l=0;
while (src[l]!='\0'){
l++;
}

for (i=0,j=l-1;i<l;i++,j--){
dest[i]=src[j];
}
dest[n+1]='\0';

return dest;
}

int main()
{
unsigned int n;
char S[100];
char re[100];
fgets (S, 100, stdin);//fgets(string,<сколько символов>,<откуда>)
scanf("%d",&n);
StrRev(re,S,n);
printf ("%s\n", re);
  
return 0;
}
