## 1.. Write a program in C to input a string and print it.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[10]="thohid";
        int i;
        printf("print the string\n");
        for(i=0;str[i]!='\0';i++){
                printf("%c\n",str[i]);
        }
        return 0;
}
```
