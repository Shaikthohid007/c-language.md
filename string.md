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
## 6. Write a program in C to compare two strings without using string library functions.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str1[10],str2[10];
        int i;

        printf("enter the string\n");
        fgets(str1,10,stdin);
        fgets(str2,10,stdin);

        str1[strcspn(str1,"\n")]='\0';
        str2[strcspn(str2,"\n")]='\0';

        printf("print the compare\n");

        for(i=0;str1[i]!='\0' && str2[i]!='\0';i++){
                if(str1[i]!=str2[i]){
                        break;
                }
        }

        if(str1[i]=='\0' && str2[i]=='\0')
                printf("both are equal\n");
        else
                printf("both are not equal\n");
        return 0;
}
```
## 7. Write a program in C to count the total number of alphabets, digits and special characters in 
a string.
```c
#include<stdio.h>
#include<string.h>
        int main(){
                char str[100];
                int i,alpcount=0,digcount=0;

                printf("enter the string\n");
                fgets(str,100,stdin);

                //str[strcspn("\n")]='\0';
                for(i=0;str[i]!='\0';i++){
                        if(str[i]>='a' && str[i]<='z'){
                                alpcount++;
                        }
                        if(str[i]>='0' && str[i]<='9'){
                                digcount++;
                        }
                }
                printf("alphabte=%d and digit=%d\n",alpcount,digcount);
                return 0;
        }
```
## 8. Write a program in C to copy one string to another string.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        char str2[100];
        int i,j=0;

        printf("enter the string\n");
        fgets(str,100,stdin);

        str[strcspn(str,"\n")]='\0';

        printf("print another array\n");
        for(i=0;str[i]!='\0';i++){
                str2[j]=str[i];
                 j++;
                 }
        str[j]='\0';

                 printf("%s\n",str2);
                 return 0;

                 }
```
## 9. Write a program in C to count the total number of vowels or consonants in a string.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i,vowcount=0,conscount=0;

        printf("enter the string\n");
        fgets(str,100,stdin);

        printf("print vowels and consonents\n");

        for(i=0;str[i]!='\0';i++){
                if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){                        vowcount++;
                }
                  else if  (str[i]>='a' && str[i]<='z'){
                        conscount++;
                }
        }

                printf("vowels=%d\n  and consonent=%d\n",vowcount,conscount);
                return 0;
}
```
## 10. Write a program in C to find the maximum number of characters in a string.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int j,i,count;

        printf("enter the string\n");
        fgets(str,100,stdin);

        printf("print the maximum\n");

        for(i=0;str[i]!='\0';i++){
                count=1;
                for(j=i+1;str[j]!='\0';j++){
                        if(str[i]==str[j])
                                count++;
                }

        if(count>1)

                printf("%c is %d\n",str[i],count);
        }
        return 0;
}
```
## 11.. Write a C program to sort a string array in ascending order.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i,j;

        printf("enter the string\n");
        fgets(str,100,stdin);

        printf("after sort ascending order\n");

        for(i=0;str[i]!='\0';i++){
                for(j=i+1;str[j]!='\0';j++){
                if(str[i]>str[j]){
                        int temp=str[i];
                        str[i]=str[j];
                        str[j]=temp;
                }
                }
        }
        printf("%s\n",str);
        return 0;
}
```
## 12. Write a program in C to read a string from the keyboard and sort it using bubble sort.
```c



