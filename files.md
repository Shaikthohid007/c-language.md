##  1. Write a C program to read content from one file and write it to another file.
```c
#include<stdio.h>
int main(){
        FILE *fp1,*fp2;
        char c;
        fp1=fopen("abc.txt","r");
        if(fp1==NULL){
                printf("error\n");
                return 0;
        }

        fp2=fopen("xyz.txt","w");
        if(fp2==NULL){
                printf("error\n");
                return 0;
        }

        while((c=fgetc(fp1))!=EOF){
                putc(c,fp2);
        }
        printf("sucessfully copied\n");
        fclose(fp1);
        fclose(fp2);

}
```     
## 2. Create a program that reads integers from a file and calculates their sum, then writes the sum to another file.
```c
#include<stdio.h>
int main(){
        FILE  *fp1,*fp2;
        int num,sum=0;

        fp1=fopen("input.txt","r");
        if(fp1==NULL){
                printf("errror\n");

        return 0;
        }
         while(fscanf(fp1,"%d",&num)!=EOF){
                        sum+=num;
                        }
         fclose(fp1);


        fp2=fopen("xyz.txt","w");
        if(fp2==NULL){
                printf("error\n");

        return 0;
        }

        fprintf(fp2,"sum=%d",sum);
        fclose(fp2);



        printf("completed\n");

}
```
 ## 3. Develop a program to read a text file and count the number of words in it.
 ```c
#include<stdio.h>
int main(){
        FILE *fp=NULL;
        char str[100];
        int count=0;
        int i;

        fp=fopen("abc.txt","r");
        if(fp==NULL){
                printf("error\n");
                return 0;
        }

        while(fgets(str,100,fp)!=NULL){
                for(i=0;str[i]!='\0';i++){
                        if(str[i]== ' ' || str[i]=='\n'){
                                count++;
                        }
                }
        }
        fclose(fp);
        printf("count=%d\n",count);
        return 0;
}
```
##  4. Implement a file management system that allows users to create, read, update, and delete  files using C functions.
 ## 5. Write a program that checks whether a file exists or not.
 ```c
#include<stdio.h>
int main(){
        FILE *fp=NULL;

        fp=fopen("abc.txt","r");

        if(fp==NULL){
                printf("file doesn't exit\n");
        } else {
                printf("file exit\n");
        }
        fclose(fp);
        return 0;
}
```
 ## 6. Create a C program to rename a file.
 ```c
#include<stdio.h>
int main(){
        char oldname[10],newname[10];

        printf("enter the oldfile\n");
        scanf("%s",oldname);

        printf("enter the newfile\n");
        scanf("%s",newname);

        if(rename(oldname,newname)==0){
                printf("hogaya\n");
        } else {
                printf("hotani\n");
        }

        return 0;
}
```
##  7. Develop a C program that handles errors while opening files and prints appropriate error messages.
```c
#include<stdio.h>
int main(){
        FILE *fp=NULL;

        fp=fopen("mat.txt","r");
        if(fp==NULL){
                printf("file doesn't exit\n");
        } else {
                printf("file exit\n");
        fclose(fp);
        }
        return 0;
}
```
##  8. Write a program that reads a file line by line and prints each line along with its line number.
```c
#include<stdio.h>
int main(){
        FILE *fp;
        char line[10];
        int line_count=1;

        fp=fopen("bca.txt","r");
        if(fp==NULL){
                printf("error\n");
                return 0;
        }

        while(fgets(line,10,fp)){
                printf("%d %s",line_count,line);
        line_count++;
        }

        fclose(fp);
        printf("read completd\n");
        return 0;
}
```
 ## 9. Create a program to delete a specific line from a text file.
 ```c

 ## 10. Write a C program to store and retrieve student records using binary file handling.
 ## 11. Implement a program that copies the contents of one binary file to another.
##  12. Develop a program that reads a binary file containing integer data and finds the maximum and minimum values.
##  13. Create a program to open a file and move the file pointer to the end of the file and determine the file size.
##  14. Write a C program to read the last n lines of a text file.
##  15. Implement a program to search for a specific string in a text file and print its line number
