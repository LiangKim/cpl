#include<stdio.h>
#include"util.h"

extern int gotline(char line[], int maxline){
    int i = 0;
    int ch;
    while(maxline>0&&(ch=getchar())!=EOF&&ch!='\n'){
        line[i++] = ch;
        maxline--;
    }
    
    if(ch=='\n'){
        line[i++] = '\n';
    }

    line[i] = '\0';

    return i;
}
