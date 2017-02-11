#include<stdio.h>

//删除输入行末尾的空格符及制表符，并删除全是空格的行
#define MAXLINE 1000

int trim(char line[]);    //删除输入行最后的空格及制表符，返回删除后的长度
int gotline(char line[], int maxline);

int main(void){
    int len;
    char line[MAXLINE];

    while((len=gotline(line, MAXLINE))>0){
        len = trim(line);
        if(len>0){
            printf("after trimed:[%s]\n", line);
        }else{
            printf("after trimed, nothing left...");
        }
    }
}


int trim(char line[]){
    int len = 0;
    while(line[len]!='\0'){
        len++;
    }
    while(len>0&&(line[len-1]==' '||line[len-1]=='\t')){
        len--;
    }
    line[len] = '\0';
    return len;
}

//这次不要最后的回车
int gotline(char line[], int maxline){
    int ch;
    int i;
    for(i=0;maxline>0&&(ch=getchar())!=EOF&&ch!='\n';i++,maxline--){
        line[i] = ch;
    }
    line[i] = '\0';
    return i;
}
