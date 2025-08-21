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
## 2.. Write a program in C to find the length of a string without using library functions.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[10];
        int i,length=0;
        printf("enter the character\n");
        fgets(str,10,stdin);

        printf("print the length\n");
        for(i=0;str[i]!='\0';i++){
                length++;
        }
        printf("lebgth=%d\n",length);
        return 0;
}
```
## 3. Write a program in C to separate individual characters from a string.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[10];
        int i;

        printf("enter the string\n");
        fgets(str,10,stdin);

        printf("print the string\n");
        for(i=0;str[i]!='\0';i++){
                printf("%c\n",str[i]);
        }
        return 0;
}
```
## 4.. Write a program in C to print individual characters of a string in reverse order.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[10];
        int i,len;
        printf("enter the string\n");
        fgets(str,10,stdin);
        str[strcspn(str,"\n")]='\0';
        printf("print the reverse string\n");
        len=strlen(str);
        for(i=len-1;i>=0;i--){
                printf("%c\n",str[i]);
        }
        return 0;
}
```
## 5.Write a program in C to count the total number of words in a string.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i,count=0;
        printf("enter the words\n");
        fgets(str,100,stdin);
        printf("print the count of words\n");
        for(i=0;str[i]!='\0';i++){
                if(str[i]!=' ' && (str[i+1]==' '|| str[i+1]=='\0')){
                count++;
                }
        }

        printf("%d\n",count);
        return 0;
}
```
