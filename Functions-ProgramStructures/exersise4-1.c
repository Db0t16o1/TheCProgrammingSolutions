#include<stdio.h>
#define MAXWORD 1000

int getlinefun(char line[] , int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

int main(){
        char line[MAXWORD];
        int found = 0,lambda;
        while( getlinefun(line,MAXWORD) > 1)
                if ((lambda = strindex(line,pattern)) >= 0){
                        printf("%s\t%d",line,lambda);
                        found++;}
        return found;
}

int getlinefun(char s[],int lim){
        int c,i=0;
        while( --lim > 0 && (c = getchar())!= EOF && c!= '\n')
                 s[i++] = c;
        if (c == '\n')
                s[i++] = c;
        s[i] = '\0';
        return i;
}

int strindex(char so[],char pt[])
{ int i,j,k,index = -1;
        for (i = 0;so[i] != '\0'; i++){
                for (j=i,k=0; pt[k]!='\0'&& so[j] == pt[k];j++,k++);
                if (pt[k] == '\0' && k>0)
                        index = i;
}
return index;
}
