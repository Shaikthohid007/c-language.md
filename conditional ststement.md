## 1..WRITE A C PROGRAM TO ACCEPT TWO INTEGERS AND CHECK WHETHER THEY ARE EQUAL OR NOT?.
```c
#include<stdio.h>
int main(){
        int a,b;
        scanf("%d %d",&a,&b);
        if(a==b)
                printf("equal\n");
        else
                printf("not\n");
        return 0;
}
```
## 2.WRITE A C PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS EVEN OR ODD?.
```c
#include<stdio.h>
int main(){
        int n;
        printf("enter the number\n");
        scanf("%d",&n);

        if(n%2==0)
                printf("even\n");
        else
                printf("odd\n");
        return 0;
}
```
## 3.WRITE A C PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS POSITIVE OR NEGATIVE.
```c
#include<stdio.h>
int main(){
        int n;
        printf("enter the number \n");
        scanf("%d",&n);

        if(n>0)
                printf("postive\n");
        else
                printf("negitive\n");
        return 0;

}
```
## 4..WRITE A C PROGRAM TO FIND WHETHER A GIVEN YEAR IS A LEAP YEAR OR NOT?
```c
#include<stdio.h>
int main(){
        int year;
        printf("enter the year\n");
        scanf("%d",&year);

        if(year%4==0)
                printf("is leap\n");
        else
                printf("is not a leap\n");
        return 0;
}
```
## 5..WRITE A C PROGRAM TO READ THE AGE OF A CANDIDATE AND DETERMINE WHETHER HE IS ELIGIBLE TO CAST HIS/HER OWN VOTE?
```c
#include<stdio.h>
int main(){
        int age;
        printf("enter the age\n");
        scanf("%d",&age);

        if(age>18)
                printf("is eligible \n");
        else
                printf("not\n");
        return 0;
}
```
## 6..WRITE A C PROGRAM TO READ THE VALUE OF AN INTEGER M AND DISPLAY THE VALUE OF N IS 1 WHEN M IS LARGER THAN 0, 0 WHEN M IS 0 AND -1 WHEN M IS LESS THAN 0.
```c
#include<stdio.h>
int main(){
        int n,m;
         printf("enter the value\n");
         scanf("%d",&m);

         if(m>0){
                 n=1;
         }       else if(m==0){
                 n=0;
         }else{
                         n=-1;
         }
         printf("%d\n",n);
         return 0;
}
```
## 7.WRITE A C PROGRAM TO FIND THE LARGEST OF THREE NUMBERS?
```c
#include<stdio.h>
int main(){
        int a,b,c;
        printf("enter the 3 numbers\n");
        scanf("%d %d %d",&a,&b,&c);

        if(a>c)
                printf("a is big\n");
        else if (b>c)
                printf("b is big\n");
        else
                printf("c is big\n");
        return 0;
}
```
## 8..WRITE A C PROGRAM TO CHECK WHETHER A CHARACTER IS A VOWEL OR CONSONANT.
```c
#include<stdio.h>
int main(){
        char ch;
        printf("enter the character\n");
        scanf("%c",&ch);

        if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' ||  ch=='u')
                printf("vowels\n");
        else
                printf("consonents\n");
        return 0;
}
```
## 9.WRITE A C PROGRAM TO CHECK WHETHER A CHARACTER IS AN ALPHABET OR NOT?.
```c
#include<stdio.h>
int main(){
        char ch;
        printf("enter the character\n");
        scanf("%c",&ch);

        if(ch>='a' && ch<='z')
                printf("is alphabte\n");
        else
                printf("not\n");
        return 0;
}
```
## 10..WRITE A C PROGRAM TO FIND MINIMUM OR MAXIMUM BETWEEN TWO NUMBERS?
```c
#include<stdio.h>
int main(){
        int a,b;
        int mim=0,max=0;
        printf("enter the numbers\n");
        scanf("%d %d",&a,&b);

        if(a>b){
                max=a;
        mim=b;
        }       else{
                max=b;
        mim=a;
        }
        printf("max=%d and mim-%d\n",max,mim);
        return 0;
}
```
## 11..WRITE A C PROGRAM TO ENTER WEEK NUMBER AND PRINT DAY OF WEEK?
```c
#include<stdio.h>
int main(){
        int week;

        printf("enter the week\n");
        scanf("%d",&week);

        switch(week){
                case 1:printf("monday\n");
                       break;
                        case 2:printf("tuesday\n");break;
                               case 3:printf("wedday\n");break;
                                     case 4:printf("thusday\n");break;
                                            case 5:printf("friday\n");break;
                                                   case 6:printf("satday\n");break;
                                                          case 7:printf("sunday\n");break;
                                                          default: printf("invalid\n");
        }
        return 0;
}
```
## 12..WRITE A C PROGRAM TO CHECK WHETHER A CHARACTER IS UPPERCASE OR LOWERCASE?
```c
#include<stdio.h>
int main(){
        char ch;
        printf("enter the character\n");
        scanf("%c",&ch);

        if(ch>='a' && ch<='z')
                printf("lowecase\n");
        else if (ch>='A' && ch<='Z')
                printf("uppercase\n");
        else
                printf("nor a alphabet\n");
        return 0;
}
```
## 13.WRITE A C PROGRAM TO FIND NUMBER OF DAYS IN MONTH?
```c
#include<stdio.h>
int main(){
        int month;
        printf("enter the month\n");
        scanf("%d",&month);

        switch(month){
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                        printf("31 days\n");
                        break;
                case 4:
                case 6:
                case 9:
                case 11:
                        printf("30 days\n");
                        break;
                case 2:
                        printf("28 or 29 days \n");
                        break;
        }
        return 0;
}
```
## 14..WRITE A C PROGRAM TO FIND MAXIMUM BETWEEN TWO NUMBERS USING SWITCH CASE?
```c
#include<stdio.h>
int main(){
        int a,b;
        printf("enter the values\n");
        scanf("%d %d",&a,&b);

        switch(a>b){
                case 1:
                        printf("%d is max ",a);
                        break;
                case 0:
                        switch (a<b){
                                case 1:
                                        printf("%d is max",b);
                                        break;
                                case 0:
                                        printf("both are equal\n");
                                        break;
                        }
                        break;
        }
        return 0;
}
```
## 15..WRITE A C PROGRAM TO PRINT EVEN NUMBERS BETWEEN 1 TO 20 USING A FOR LOOP?
```c
#include<stdio.h>
int main(){
        int i;
printf("print the even numbers\n");

        for(i=0;i<=20;i++)
                if(i%2==0)
                printf("%d\n",i);
        return 0;
}
```
## 16..WRITE A C PROGRAM TO CALCULATE THE SUM OF NUMBERS FROM 1 TO 100 USING A WHILE LOOP?
```c
#include<stdio.h>
int main(){
        int i=1,sum=0;

        printf("printf the sum of 100 numbers\n");
        while(i<=100){
                sum+=i;
                i++;
        }
        printf("%d\n",sum);
        return 0;

}
```
## 17..WRITE A C PROGRAM TO FIND THE FACTORIAL OF A GIVEN NUMBER USING A FOR LOOP?
```c
#include<stdio.h>
int main(){
        int n,rem,fac=0,start;
        printf("enter the number\n");
        scanf("%d",&n);

        start=n;
        for( ;n>0;n/=10){
                        rem=n%10;
                fac+=(rem*rem*rem);

        }
        if(start==fac)
                printf("is a amstrong\n");
        else
                printf("is not\n");
        return 0;
}
```
## 18..WRITE A C PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS PRIME OR NOT USING A WHILE LOOP?
```c
#include<stdio.h>
int main(){
        int n,i=1,count=0;
        printf("enter the number \n");
        scanf("%d",&n);

        while(i<=n){
                if(n%i==0)
                        count++;

                i++;
        }
        if(count==2)
                printf("prime\n");
        else
                printf("not\n");
        return 0;
}
```
## 19 ..WRITE A C PROGRAM TO FIND THE SUM OF DIGITS OF A NUMBER USING A WHILE LOOP.
```c
#include<stdio.h>
int main(){
        int n,rem,sum=0;
        printf("enter the number\n");
        scanf("%d",&n);

        while(n>0){
                rem=n%10;
                sum=sum+rem;
                n=n/10;
        }
        printf("%d\n",sum);
        return 0;
}
```
## 20.WRITE A C PROGRAM TO PRINT FIBONACCI SERIES UP TO N TERMS USING A FOR LOOP.
```c
#include<stdio.h>
int main(){
        int n,i,a=0,b=1,c;
        printf("enter the number\n");
        scanf("%d",&n);

        for(i=1 ;i<=n;i++){
                printf("%d\n",a);
                c=a+b;
                a=b;
                b=c;
        }
        return 0;
}
```
## 21..WRITE A C PROGRAM TO REVERSE A GIVEN NUMBER USING A WHILE LOOP
```c
#include<stdio.h>
int main(){
        int n,rem,rev=0;
        printf("enter the number \n");
        scanf("%d",&n);

        while(n>0){
                rem=n%10;
                rev=(rev*10)+rem;
                n=n/10;
        }
        printf("%d\n",rev);
        return 0;
}
```
## 22..WRITE A C PROGRAM TO FIND THE LARGEST ELEMENT IN AN ARRAY USING A FOR LOOP.
```c
#include<stdio.h>
int main(){

        int a[100];
        int i,large=0;

        printf("enter the array\n");
        for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        }

        printf("print the largest num\n");
        for(i=0;i<5;i++){
                if(a[i]>large)
                        large=a[i];
        }
        printf("%d\n",large);
        return 0;
}
```
## 23.WRITE A C PROGRAM TO FIND THE SMALLEST ELEMENT IN AN ARRAY USING A WHILE LOOP.
```c
#include<stdio.h>
int main(){

        int a[100];
        int i,small;

        printf("enter the array\n");
        for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        }

        printf("print the small num\n");
        for(i=0;i<5;i++){
                if(a[i]<small)
                        small=a[i];
        }
        printf("%d\n",small);
        return 0;
}
```
## 24.WRITE A C PROGRAM TO PRINT ALL THE ELEMENTS OF AN ARRAY USING A FOR LOOP.
```c
#include<stdio.h>
int main(){
        int a[100];
        int i;

        for(i=0;i<5;i++){
                scanf("%d",&a[i]);
        }

        printf("all the elements\n");
        for(i=0;i<5;i++){
                printf("%d\n",a[i]);
        }
        return 0;
}
```
## 25.WRITE A C PROGRAM TO FIND THE SUM OF ELEMENTS IN AN ARRAY USING A WHILE LOOP.
```c
#include<stdio.h>
int main(){
        int a[100];
        int i,sum=0;

        printf("enter the numbers\n");
        for(i=0;i<5;i++){
                scanf("%d",&a[i]);
        }

        printf("print the sum of array\n");
        for(i=0;i<5;i++){
                sum+=a[i];
        }
        printf("%d\n",sum);
        return 0;
}
```
## 26..WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A GIVEN STRING USING A FOR  LOOP?
```c
#include<stdio.h>
#include<string.h>
int main(){
        char str[100];
        int i,count=0;

        printf("enter the string\n ");
        fgets(str,sizeof(str),stdin);
        str[strcspn(str,"\n")]='\0';

        for(i=0;str[i]!='\0';i++){
                if(str[i]=='a'|| str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
                        count++;
        }
        printf("%d\n",count);
        return 0;
}
```




