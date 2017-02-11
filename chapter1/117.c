#include<stdio.h>

//打印长度超过80个字符的所有输入行

/*
 * 宏定义
 */
#define MAXLINE 1000


/*
 * 函数原型设计
 */
int gotline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void){
    char line[MAXLINE];
    int len = 0;    //当前行的长度

    while((len = gotline(line, MAXLINE))>0){
        if(len>80){
            printf("%s\n", line);
        }
    }

    return 0;
}

int gotline(char line[], int maxline){
    int ch;
    int i = 0;
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

void copy(char to[], char from[]){
    int i = 0;
    while(from[i]!='\0'){
        to[i] = from[i];
        i++;
    }
}
