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
## 7. Write a program in C to count the total number of alphabets, digits and special characters in a string.
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
#include<string.h>
#include<stdio.h>
int main(){
        char str[100];
        int i,j,n;

        printf("enter the string\n");
        fgets(str,100,stdin);
        str[strcspn(str,"\n")]='\0';

        n=strlen(str);

        printf("print the reverse string\n");
        for(i=0;i<n-1;i++){
                for(j=0;j<n-1;j++){
                        if(str[i]>str[j]){
                                int temp=str[i];
                                str[i]=str[j+1];
                                str[j+1]=temp;
                        }
                }
        }

        printf("%s\n",str);
        return 0;
}
```
## 13.Write a program in C to extract a substring from a given string.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100],sun[100];
        int pos,leni,j=0;

        printf("enter the string\n");
        fgets(str,100,stdin);
        str[strcspn(str,"\n")]='\0';

        scanf("%d",&pos);

        scanf("%d",&leni);

        for(int i=pos;i<pos+leni && str[i]!='\0';i++){
                sun[j]=str[i];
                j++;
        }
        sun[j]='\0';
        printf("%s\n",sun);
        return 0;
}
```
## 14. Write a C program to check whether a substring is present in a string.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100],sun[100];
        int i,j,found=0;


        printf("enter the enter string\n");
        fgets(str,100,stdin);
        str[strcspn(str,"\n")]='\0';

        printf("enter the sub string\n");
        fgets(sun,100,stdin);
        sun[strcspn(sun,"\n")]='\0';

        for(i=0;i<=strlen(str)-strlen(sun);i++){
                for(j=0;j<strlen(sun);j++){
                if(str[i+j]!=sun[j]){
                        break;
                }
        }
                if(j==strlen(sun)){
                        found=1;
                        break;
                }
        }


        if(found==1)
                printf("is present\n");
        else
                printf("is not present\n");
        return 0;
}
```
## 15.. Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i;

        printf("enter the string\n");
        fgets(str,100,stdin);
        str[strcspn(str,"\n")]='\0';

        for(i=0;str[i]!='\0';i++){
        //      str[i]=str[i]-32;// this is for uppercase.

                str[i]=str[i]+32;// this is for lowercase.

        }
        printf("%s\n",str);
        return 0;
}
```
## 16. Write a program in C to find the number of times a given word 'the' appears in the given string.
## 17. Write a program in C to remove characters from a string except alphabets.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100],sta[100];
        int i,j=0;

        printf("enter the string\n");
        fgets(str,100,stdin);
        str[strcspn(str,"\n")]='\0';

        for(i=0;str[i]!='\0';i++){
                if(str[i]>='a' && str[i]<'z'){
                        sta[j]=str[i];
                        j++;
                }
        }
        sta[j]='\0';
        printf("%s\n",sta);
        return 0;
}
```
## 18. Write a program in C to find the frequency of characters.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i,j,count,alreadycount;

        printf("enter the string\n");
        fgets(str,100,stdin);
        str[strcspn(str,"\n")]='\0';

        for(i=0;str[i]!='\0';i++){
                alreadycount=0;
                for(j= 0;j<i;j++){
                        if(str[i]==str[j]){
                                alreadycount=1;
                                break;
                        }
                }
                if(!alreadycount){
                        count=0;
                        for(j=0;str[j]!='\0';j++){
                                if(str[i]==str[j]){
                                        count++;
                                }
                        }



        printf("%c and %d\n",str[i],count);
        }
        }
        return 0;
}
```
## 19.Write a program in C to combine two strings manually.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100],str1[100];
        int i,j;

        printf("enter the string\n");
        fgets(str,100,stdin);
        str[strcspn(str,"\n")]='\0';

        printf("enter the 2nd string\n");
        fgets(str1,100,stdin);
        str1[strcspn(str1,"\n")]='\0';

        for(i=0;str[i]!='\0';i++);
                for(j=0;str[j]!='\0';j++){
                str[i+j]=str1[j];
        }
        str[i+j]='\0';
        printf("%s\n",str);
        return 0;
}
```
## 20. Write a program in C to find the largest and smallest words in a string.
## 21. Write a program in C to convert a string to uppercase.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i;

        printf("enter the string\n");
        fgets(str,100,stdin);
        str[strcspn(str,"\n")]='\0';

        printf("print the uppercase letter\n");

        for(i=0;str[i]!='\0';i++){
                str[i]=str[i]-32;
        }

        printf("%s\n",str);
        return 0;
}
```
## 22. Write a program in C to convert a string to lowercase.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i;

        printf("enter the string\n");
        fgets(str,100,stdin);
        str[strcspn(str,"\n")]='\0';

        printf("print the lowercase\n");

        for(i=0;str[i]!='\0';i++){
                str[i]=str[i]+32;
        }

        printf("%s\n",str);
        return 0;
}
```
## 23.. Write a program in C to check whether a character is a Hexadecimal Digit or not.
## 24. Write a program in C to check whether a letter is uppercase or not.
```c
#include<stdio.h>
int main(){
        char ch;

        printf("enter the character\n");
        scanf("%c",&ch);

        if(ch>='A' && ch<='Z'){
                printf("is present \n");
        } else {
                printf("is not\n");
        }
return 0;
}
```
## 25.. Write a program in C to replace the spaces in a string with a specific character.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i;

        printf("enter the string\n");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';


        printf("print after adding the special character in spacee\n");
        for(i=0;str[i]!='\0';i++){
                if(str[i]==' '){
                        str[i]='^';

                }
        }


        printf("%s\n",str);
        return 0;
}
```
## 26.Write a program in C to count the number of punctuation characters present in a string..
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i,count=0;

        printf("enter the string\n");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';

        printf("print how many punctuation character in string\n");

        for(i=0;str[i]!='\0';i++){
                if(str[i]=='.' || str[i]==',' || str[i]=='?' || str[i]=='/' ){
                        count++;
                }
        }

        printf("count=%d\n",count);
        return 0;
}
```
## 27.. Write a program in C to print only the string before the new line character.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i;

        printf("enter the string\n");
        fgets(str,sizeof(str),stdin);

        str[strcspn(str,"\n")]='\0';

        printf("%s\n",str);
        return 0;
}
```
## 28.. Write a program in C to check whether a letter is lowercase or not.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char ch;

        printf("enter the character \n");
        scanf("%c",&ch);

        if(ch>='a' && ch<='z')
                printf("is a  lower character\n");
        else
                printf("is not a lower\n");
        return 0;
}
```
## 29. Write a program in C to read a file and remove the spaces between two words of its content.
## 30.Write a program in C to check whether a character is a digit or not.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i;

        printf("enter the string\n");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';

                if(str[i]>='0' && str[i]<='9')
                        printf("is a digit\n");
                else
                        printf("is not a digit\n");
                return 0;
        }
```
## 31. Write a program in C to split strings by space into words.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i;

        printf("enter the string\n");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';

        for(i=0;str[i]!='\0';i++){
                if(str[i]==' ')

                        printf("\n");
                else
                        printf("%c\n",str[i]);
        }
        return 0;
}
```
## 32. Write a C program to find the repeated character in a string.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i,j,count;

        printf("enter the string\n");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';

        for(i=0;str[i]!='\0';i++){
                count=1;
                for(j=i+1;str[j]!='\0';j++){
                        if(str[i]==str[j]){
                                count++;
                        }
                }

        printf("%c =%d\n",str[i],count);
        }
        return 0;
}
```
## 33. Write a C program to count each character in a given string.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i,j,count=0;

        printf("enter the string\n");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';

        for(i=0;str[i]!='\0';i++){
                count++;
        }
        printf("%d\n",count);
        return 0;
}
```
## 34.. Write a C program to convert vowels into uppercase characters in a string.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i;

        printf("enter the string\n");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';

        for(i=0;str[i]!='\0';i++){
                if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){                        str[i]=str[i]-32;
                }
        }
        printf("%s\n",str);
        return 0;
}
```
 ## 35.Write a C program to find the length of the longest substring of a given string without repeating characters.
 ```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int start=0,maxlen=0,i,j;
        int visited[256];

        printf("enter the string\n");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';

        int n=strlen(str);

        for(i=0;i<256;i++){
                visited[i]=-1;
        }
        for(j=0;j<n;j++){


        if(visited[str[j]]>=start){
                start=visited[str[j]]+1;
        }

        visited[str[j]]=j;

        if(j-start +1  >maxlen){
                maxlen=j-start+1;
        }
        }

        printf("%d\n",maxlen);
        return 0;
}
```
## 36. A given string contains the bracket characters '(', ')', '{', '}', '<', ‘>', '[' and ']', Write a C program to check if the string is valid or not. The input string will be valid when open brackets and closed brackets are the same type of brackets. 

## 37. Write a C program to multiply two positive numbers as strings. Return a string representation of the product.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str1[100],str2[100];
        int len1,len2;
        int result[200]={0};
        int i,j;
        scanf("%s %s",str1,str2 );

        len1=strlen(str1);
        len2=strlen(str2);

        for(i=len1-1;i>=0;i--){
                for(j=len2-1;j>=0;j--){
                int mul = (str1[i]-'0')*(str2[j]-'0') ;
                        int sum=mul+result[i+j+1];
                result[i+j+1]=sum%10;
                result[i+j]+=sum/10;
                }
        }
        i=0;
        while(i<4&&result[i]==0){
                i++;
        }

        if(i==len1+len2){
                printf("0\n");
        }
        else{
                for( ;i<len1+len2;i++){
                        printf("%d",result[i]);
                }
                printf("\n");
        }

return 0;
}
```
## 38.  38. Write a C program to reverse all the vowels present in a given string. Return the newly created string.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100],rev[100];
        int i,j=0;

        printf("enter the string\n");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';

        for(i=0;str[i]!='\0';i++){
                if(str[i]=='a' || str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                        rev[j++]=str[i];

        }
        rev[j]='\0';
        printf("vowels\n");
        printf("%s\n",rev);


        int k=j-1;

        printf("print the reverse\n");
        for(i=0;str[i]!='\0';i++){
                if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                        str[i]=rev[k--];
        }
        printf("%s\n",str);
        return 0;
}
```
## 39. Write a C program to find the longest palindromic substring from a given string. Return the substring.
 ## 40. Write a C program to replace each lowercase letter with the same uppercase letter of a given string. 
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i;

        printf("enter the string\n");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';

        for(i=0;str[i]!='\0';i++){
                if(str[i]>='a' && str[i]<='z'){
                        str[i]=str[i]-32;
                }
        }
        printf("%s\n",str);
        return 0;
}
```
##  41. Write a C program to calculate the length of the longest common subsequence of two given  strings.
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str1[100],str2[100];
        int i,j,m,n;
        int s[101][101]={0};

        printf("enter the 1st string\n");
        scanf("%s",str1);

        printf("enter the 2nd string\n");
        scanf("%s",str2);

        m=strlen(str1);
        n=strlen(str2);

        for(i=1;i<=m;i++){
                for(j=1;j<=n;j++){
                        if(str1[i-1]==str2[j-1]){
                                s[i][j]=1+s[i-1][j-1];
                        }else{
                                if(s[i-1][j]>s[i][j-1])
                                s[i][j]=s[i-1][j];
                        else
                                s[i][j]=s[i][j-1];
                }
                }
        }
        printf("%d\n",s[m][n]);
        return 0;
}
```
  ## 42. Write a C program to find the length of a string.
  ```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i,count=0;

        printf("enter the string\n");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';

        for(i=0;str[i]!='\0';i++){
                count++;
        }

        printf("length of string %d\n",count);
        return 0;
}
```
 ## 43. Write a C program to copy one string to another string.
 ```c
#include<stdio.h>
#include<string.h>
int main(){
        char str1[100],str2[100];
        int i,j=0;

        printf("enter the string\n");
        fgets(str1,sizeof(str1),stdin);
        str1[strcspn(str1,"\n")]='\0';

        for(i=0;str1[i]!='\0';i++){
                str2[j++]=str1[i];
        }

        printf("%s\n",str2);
        return 0;
}
```
 ## 44. Write a C program to concatenate two strings.
 ```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100],sub[100];
        int i,j;

        printf("enter the string\n");

        scanf("%s",str);
        scanf("%s",sub);



        for(i=0;str[i]!='\0';i++);
                for(j=0;sub[j]!='\0';j++){
                str[i]=sub[j];
                i++;
        }

        str[i]='\0';
        printf("%s\n",str);
             return 0;
}
```
## 45. Write a C program to compare two strings.
```c
#include<stdio.h>
#include<stdio.h>
int main(){
        char str1[100]="apple";
        char str[100]="ampple";

        int i,flag=0;

        for(i=0;str1[i]!='\0'||str[i]!='\0';i++){
                if(str1[i]!=str[i]){
                        flag=1;
                }
        }

        if(flag==0)
                printf("equal\n");
        else
                printf("not equal\n");
        return 0;
}
```
 ## 46. Write a C program to convert lowercase string to uppercase.
 ```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i;

        printf("enter the string\n");
        fgets(str,100,stdin);
        str[strcspn(str,"\n")]='\0';

        for(i=0;str[i]!='\0';i++){
                str[i]=str[i]+32;
        }
        printf("%s\n",str);
        return 0;
}
```
 ## 47 .Write a C program to convert uppercase string to lowercase.
 ```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i;

        printf("enter the string\n");
        fgets(str,100,stdin);
        str[strcspn(str,"\n")]='\0';

        for(i=0;str[i]!='\0';i++){
                str[i]=str[i]-32;
        }
        printf("%s\n",str);
        return 0;
}
```
  ## 48. Write a C program to toggle the case of each character of a string.
  ```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i;

        printf("enter the string\n");
        fgets(str,100,stdin);
        str[strcspn(str,"\n")]='\0';

        for(i=0;str[i]!='\0';i++){
                if (str[i]>='A' && str[i]<='Z'){
                        str[i]=str[i]+32;
                }
        else if


                         (str[i]>='a'&&str[i]<='z'){
                                str[i]=str[i]-32;
                }
        }

        printf("%s\n",str);
        return 0;
}
```
 ## 49. Write a C program to find the total number of alphabets, digits or special characters in a string.
 ```c
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,alpcount=0,digcount=0,splcount=0;
    
    printf("enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    
    for(i=0;str[i]!='\0';i++){
        if(str[i]>='a' && str[i]<='z'){
        alpcount++;
        }   else if  (str[i]>='0' && str[i]<='9'){
            digcount++;
        }else {
            splcount++;
        }
        }
    printf("alpcount=%d\n",alpcount);
    printf("digcount=%d\n",digcount);
    printf("splcount=%d\n",splcount);
    return 0;
    
}
```
## 50. Write a C program to count the total number of vowels and consonants in a string.
```c
 #include<stdio.h>
 #include<string.h>
 int main(){
     char str[100];
     int i,vowcount=0,concount=0;
     
     printf("enter the \n");
     fgets(str,sizeof(str),stdin);
     str[strcspn(str,"\n")]='\0';
     
     for(i=0;str[i])!='\0';i++){
         if(str[i]=='a' || str[i]=='e' || str[i]=='o'|| str[i]=='i' || str[i])=='u'){
             vowcount++;
         }else{
             concount++;
         }
         
         }
     printf("%d and %d\n",vowcount,concount);
     return 0;
 }
```
 ## 51. Write a C program to count the total number of words in a string.
 ```c
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,count=0;
    
    printf("enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    
    for(i=0;str[i]!='\0';i++){
        count++;
    }
    printf("%d\n",count);
    return 0;
}
```
 ## 52. Write a C program to find the reverse of a string.
 ```c
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,l;
    
    printf("enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    
    l=strlen(str);
    
    for(i=0;i<l/2;i++){
int temp =str[i];
str[i]=str[l-i-1];
str[l-i-1]=temp;
}    
   printf("%s\n",str);
    return 0;
}
```
 ## 53. Write a C program to check whether a string is palindrome or not.
 ```c

#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,l,flag=1;
    
    printf("enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    
    l=strlen(str);
    
    for(i=0;i<l/2;i++){
       if(str[i]!=str[l-i-1]){
        flag=0;
        break;
    }
    }
    if(flag==1)
    printf("yes\n");
    else
    printf("no\n");
    return 0;
}
```
## 54.54. Write a C program to reverse order of words in a given string.
```c
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int i,l;
    
    printf("enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    
    l=strlen(str);

0    
    for(i=l-1;i>=0;i--)
        

    
    printf("%c\n",str[i]);
    return 0;
} 
```
 ## 55. Write a C program to find the first occurrence of a character in a given string.
 ```c
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],ch;
    int i,fount=-1;
    
    printf("enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    
    printf("enter the character\n");
    scanf("%c",&ch);
    
    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch){
          fount=i;
          break;
        }
    }
    if(fount!=-1)
    printf("%c and %d\n",ch,fount);
    else
    printf("%c\n",ch);
}
```
## 56. Write a C program to find the last occurrence of a character in a given string.
```c
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],ch;
    int i,fount=-1;
    
    printf("enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    
    printf("enter the character\n");
    scanf("%c",&ch);
    
    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch){
          fount=i;
        }
    }
    if(fount!=-1)
    printf("%c and %d\n",ch,fount);
    else
    printf("%c\n",ch);
}
```
## 57. Write a C program to search all occurrences of a character in a given string.
```c
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],ch;
    int i,count=0;
    
    printf("enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    
    printf("enter the character\n");
    scanf("%c",&ch);
    
    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch){
          printf("%d\n",i);
          count++;
        }
        
    }
    if(count>0)
    printf("%c and %d\n",ch,count);
    else
    printf("%c\n",ch);
}
```
## 58. Write a C program to count occurrences of a character in a given string.
```c
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],ch;
    int i,count=0;
    
    printf("enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    
    printf("enter the character\n");
    scanf("%c",&ch);
    
    for(i=0;str[i]!='\0';i++){
        if(str[i]==ch){
       
          count++;
        }
        
    }
    if(count>0)
    printf("%c and %d\n",ch,count);
    else
    printf("%c\n",ch);
}
```
## 59. Write a C program to find the highest frequency character in a string.
```c
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],ch;
    int i,j,count=0,max=0;
    char result;
    
    printf("enter the string\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    
    printf("enter the character\n");
    scanf("%c",&ch);
    
    for(i=0;str[i]!='\0';i++){
       count=1;
       if(str[i]=='0')
       continue;
       
       for(j=i+1;str[j]!='\0';j++){
           if(str[i]==str[j]){
           count++;
           str[j]='0';
       }
       }
       if(count>max){
       max=count;
       result=str[i];
    }
    }
    
    printf("%c and %d",result,max);
    return 0;
}
```
## 60. Write a C program to find the lowest frequency character in a string.
```c

61. Write a C program to count the frequency of each character in a string.
62. Write a C program to remove the first occurrence of a character from a string.
63. Write a C program to remove the last occurrence of a character from a string.
64. Write a C program to remove all occurrences of a character from a string.
    
  






