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
#include<stdio.h>
int main(){
        FILE *fp,*temp;
        char str[100];
        int count=1;
        int del_str;

        fp=fopen("bca.txt","r");
        if(fp==NULL){
                printf("error\n");
                return 0;
        }

        temp=fopen("temp.txt","w");
        if(temp==NULL){
                printf("error\n");
                return 0;
        }
        printf("enter the del \n");
        scanf("%d",&del_str);

        while(fgets(str,sizeof(str),fp)){
                if(count!=del_str){
                        fprintf(temp,"%s",str);
                } else {
                        printf("%d->%s",count,str);
                }
                count++;
        }
                fclose(fp);
                fclose(temp);
        remove("bca.txt");
        rename("temp.txt","bca.txt");
        return 0;
}
```
 ## 10. Write a C program to store and retrieve student records using binary file handling.
 ```c
#include<stdio.h>

struct student {
        int id;
        char name[10];
        float marks;
};

int main(){
        FILE *fp;
        struct student s;
        int i,n;


            fp=fopen("student.data","wb");
        if(fp==NULL){
                printf("errror\n");
                return 0;
        }


        printf("enter the numer the students\n");
        scanf("%d",&n);

        for(i=0;i<n;i++){
                printf("ente the students number :%d\n",i+1);
                printf("ID :");
                scanf("%d",&s.id);
                printf("NAME :");
                scanf("%s",s.name);
                printf("marks  :");
                scanf("%f",&s.marks);

                fwrite(&s,sizeof(s),1,fp);
        }
        fclose(fp);
        printf("sucessfully write\n");



        fp=fopen("student.data","rb");
        if(fp==NULL){
                printf("error\n");
                return 0;
        }

        printf("print the student data\n");

        while(fread(&s,sizeof(s),1,fp)){
                printf("ID :%d | name : %s | marks : %.2f\n",s.id, s.name, s.marks);
        }
        fclose(fp);
        printf("sucessfully read\n");
}
```
 ## 11. Implement a program that copies the contents of one binary file to another
 ```c
#include<stdio.h>
int main(){
        FILE *fp,*dp;

        char str[100];
        size_t n;

        fp=fopen("student.data","rb");
        if(fp==NULL){
                printf("error\n");
                return 0;
        }

        dp=fopen("data.txt","wb");
        if(dp==NULL){
                printf("error\n");
                fclose(dp);
                return 0;
        }

        while ((n=fread(str,1,sizeof(str),fp))>0){

                fwrite(str,1,n,dp);
        }
        fclose(fp);
        fclose(dp);

        printf("sucessfully copird\n");
        return 0;
}
```
##  12. Develop a program that reads a binary file containing integer data and finds the maximum and minimum values.
```c
#include<stdio.h>
#include<limits.h>
int main(){
        FILE *fp;
        int x;
        int max=INT_MIN;
        int min=INT_MAX;

        fp=fopen("number.txt","rb");
        if(fp==NULL){
                printf("error\n");
                return 0;
        }

        while(fread(&x,sizeof(int),1,fp)==1){
                if(x>max)max=x;
                if(x<min)min=x;
        }

        fclose(fp);

        printf("max=%d\n",max);
        printf("min=%d\n",min);

        return 0;
}
```
##  13. Create a program to open a file and move the file pointer to the end of the file and determine the file size.
```c
#include<stdio.h>
int main(){
        FILE *fp=fopen("bca.txt","r");
        if(fp==NULL){
                printf("error\n");
                return 0;
        }

        fseek(fp,0,SEEK_END);
        long size=ftell(fp);
        printf("%ld\n",size);

        return 0;
}
```
##  14. Write a C program to read the last n lines of a text file.
```c
#include<stdio.h>
int main(){
        FILE *fp;
        int n;
        long pos;
        char str[100];
        int count=0;

        fp=fopen("bca.txt","r");

        if(fp==NULL){
                printf("error\n");
                return 0;
        }

        printf("enter the number\n");
        scanf("%d",&n);

        while(pos>0){
                fseek(fp,-pos,SEEK_SET);
                if(fgetc(fp)=='\n'){
                        count++;
                        if(count==n+1){
                                break;
                        }
                }
        }

        while(fgets(str,sizeof(str),fp)){
                printf("%s\n",str);
        }

        fclose(fp);
        return 0;
}
```
##  15. Implement a program to search for a specific string in a text file and print its line number
```c
#include<stdio.h>
#include<string.h>
int main(){
        FILE *fp;
        char str[100];
        char key[100];
        int found=0;
        int line=0;

        fp=fopen("bca.txt","r");
        if(fp==NULL){
                printf("error\n");
                return 0;
        }

        printf("enter the string\n");
        scanf("%s",key);

        while(fgets(str,sizeof(str),fp)!=NULL){
                line++;
                if(strstr(str,key)!=NULL){
                        printf("%s->%d\n",key,line);
                        found=1;
                }
        }

        if(!found)
                printf("%s->  not in file\n",key);

        fclose(fp);

        return 0;
}
```
## 16. Develop a C program that appends data to an existing text file.
```c
#include<stdio.h>
int main(){
        char str[100];
         FILE *fp=fopen("bca.txt","a");
         if(fp==NULL){
                 printf("file doesn't exit\n");
                 return 0;
         }

         fgets(str,sizeof(str),stdin);
                 fputs(str,fp);
         fclose(fp);
         return 0;
}                                                                                                                                                      
```
 ## 17. Write a program that appends the current date and time to a log file each time it is run.
 ```c
#include<stdio.h>
#include<time.h>
int main(){
        FILE *fp;
        time_t t;
        struct tm *t_info;

        fp=fopen("bca.txt","a");
        if(fp==NULL){
                printf("error\n");
                return 0;
        }

        time(&t);
        t_info=localtime(&t);
        fprintf(fp,"%s",asctime(t_info));

        fclose(fp);
}
```
## 18. Create a program that allows users to input text and appends it to a file until they enter "exit".
```c
#include<stdio.h>
#include<string.h>
int main(){
        FILE *fp;
        char str[100];

        fp=fopen("xyz.txt","a");

        while(1){
                printf("enter the text\n");
                scanf("%s",str);

                if(strcmp(str,"exit")==0 || (strcmp(str,"stop")==0))
                                break;

                        fprintf(fp,"%s",str);

                        }
                        fclose(fp);
                        }
```                             
```
## 19. Write a C program to create a random access file that stores records containing information about employees (e.g., name, ID, salary) and allows usersto  update specific records.
```c

```
## 20. Implement a program that reads records from a random access file and displays them based on user input (e.g., display employee details by ID).
## 21. Develop a C program that demonstrates error handling during file input/output operations, such as handling file not found errors, permission issues, etc.
## 22. Write a program to read integers from a file and compute their average. Handle cases where the file might contain non-integer data or errors during file reading.
## 23. Create a program that demonstrates file locking mechanisms in C to prevent concurrent access to a file by multiple processes.
## 24. Write a program that simulates a simple file-based database system where file locking is used to ensure data consistency during read and write operations.
## 25. Develop a program that compresses a text file using simple compression techniques (e.g., run-length encoding) and saves the compressed data to another file.
## 26. Write a program that decompresses a compressed file and restores the original text.
##  27. Implement a C program that reads data from a CSV (comma-separated values) file, parses it, and performs specific operations (e.g., calculate average, find maximum/minimum).
 ## 28. Write a program to extract specific information (e.g., email addresses, phone numbers) from a text file containing unstructured data using regular expressions.
## 29. Develop a program that retrieves and displays file permissions and ownership details (e.g., owner ID, group ID) for a given file.
## 30. Implement a program that changes file permissions and ownership based on user input.
 ## 31. Write a program in C to create and store information in a text file.
 ## 32. Write a program in C to read an existing file
## 33. Write a program in C to write multiple lines to a text file.
## 34.Write a program in C to read the file and store the lines in an array.
## 35. Write a program in C to find the number of lines in a text file.
## 36. Write a program in C to count the number of words and characters in a file.
## 37. Write a program in C to delete a specific line from a file.
## 38. Write a program in C to replace a specific line with another text in a file.
## 39. Write a program in C to append multiple lines to the end of a text file.
## 40. Write a program in C to copy a file to another name
