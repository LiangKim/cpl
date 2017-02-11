#include<stdio.h>
#define MAXLINE 1000


/*  从键盘中读取一行，包含最后的回车，返回读取的字符串长度   */
int gotline(char line[], int maxline);
void hello(void);
void reverse(char line[]);
int length(char line[]);    //返回一个字符串的长度

/*实现*/
/* 测试方法 */
void hello(void){
    printf("hello,world\n");
}

/* 从键盘中读取一行 */
int gotline(char line[], int maxline){
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

/* 返回字符串长度 */
int length(char line[]){
    int len = 0;
    while(line[len++]!='\0')
        ;
    return len-1;
}

/*反转字符串*/
void reverse(char line[]){
    int low = 0;
    int high = length(line)-1;
    int tmp;
    while(high>low){
        tmp = line[low];
        line[low] = line[high];
        line[high] = tmp;
        high--;
        low++;
    }
}

