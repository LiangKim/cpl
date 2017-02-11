#include"../util/util.h"

int main(void){
    char line[MAXLINE];
    gotline(line, MAXLINE);
    reverse(line);
    printf("%s", line);
    return 0;
}
