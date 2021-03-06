#include<stdio.h>

//输入多行文本，输出最长一行的文本及其长度

/*
 * 宏定义
 */
#define MAXLINE 5


/*
 * 函数原型设计
 */
int gotline(char line[], int maxline);
void copy(char to[], char from[]);

int main(void){
    char longest[MAXLINE], line[MAXLINE];
    int max = 0;    //当前最长一行的长度
    int len = 0;    //当前行的长度

    while((len = gotline(line, MAXLINE))>0){
        if(len>max){
            max = len;
            copy(longest, line);
        }
    }
    
    if(max>0){
        printf("%s\n", longest);
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
