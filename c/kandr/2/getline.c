#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAXLINE 1000


int getline2electricboogaloo(char line[], int maxline);
void copy(char to[], char from []);


int getline2electricboogaloo(char s[], int lim)
{
    int c, i;
    for(i = 0; i < lim - 1 && (c = getchar()) != '\n' && c != EOF; i++){
        s[i] = c;
    }
    if(c == '\n'){
        s[i] = c;
        i++;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i = 0;
    while((to[i] = from[i]) != '\0'){
        i++;
    }
}


int main(int argc, char *argv[])
{
    int len, max;
    max = 0;
    char line[MAXLINE];
    char longest[MAXLINE];

    while((len = getline2electricboogaloo(line, MAXLINE)) > 0){
        if(len > max){
            max = len;
            copy(longest, line);
        }
    }

    if(max > 0){
        printf("%s", longest);
    }
    return 0;
}
