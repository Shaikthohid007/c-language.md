## 1. Input and print array elements.
```c
#include<stdio.h>
int main(){
int a[10],i;
 pintf("enter the array");
for(i=0;i<10;i++){
        scanf("%d",&a[i]);
}
printf("print the array elements\n");
for(i=0;i<10;i++){
printf("%d\n",a[i]);
}
return 0;
}
```
## 2. Find sum of all array elements.
```c
#include<stdio.h>
int main(){
int a[10],i,sum=0;
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
for(i=0;i<10;i++){
sum+=a[i];
}
printf("%d\n",sum);
return 0;
}
```
## 3. Find maximum element in array.
```c
#include<stdio.h>
int main(){
int a[10],i,max;
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<10;i++){
if(a[i]>max){
max=a[i];
}
}
printf("%d\n",max);
return 0;
}
```
## 4.Find minimum element in array.
```c
#include<stdio.h>
int main(){
int a[10],i,mim;
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
mim=a[0];
for(i=0;i<10;i++){
if(a[i]<mim){
mim=a[i];
}
}
printf("%d\n",mim);
return 0;
}
```
## 5.Search for an element in the array.
```c
#include<stdio.h>
int main(){
int a[10],i,key,found=0;
scanf("%d",&key);
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
for(i=0;i<10;i++){
if(a[i]==key){
found++;
}
}
if(found>0){
printf("%d is found %d times\n",key,found);
}else{
printf("%d not found\n",key);
}
return 0;
}
```
## 6.Count even and odd elements in an array.
```c
#include<stdio.h>
int main(){
int a[10],i,even=0,odd=0;
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
for(i=0;i<10;i++){
if(a[i]%2==0){
even++;
}else{
odd++;
}
}
printf("even=%d\n odd=%d\n",even,odd);
return 0;
}
```
## 7.Find and print all duplicate elements in the array.
```c
#include<stdio.h>
int main(){
int a[10],i,j;
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
for(i=0;i<10;i++){
int duplicate=0;
for(j=0;j<i;j++){
if(a[i]==a[j]){
duplicate=1;
break;
}
}
if(!duplicate){
for(j=i+1;j<10;j++){
if(a[i]==a[j]){
printf("%d\n",a[i]);
break;
}
}
}
}
return 0;
}
```
## 8. print all unique elements.
```c
#include<stdio.h>
int main(){
int a[10],i,j,count;
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
for(i=0;i<10;i++){
count=0;
for(j=0;j<10;j++){
if(a[i]==a[j]){
count++;
}
}
if(count==1){
printf("%d\n",a[i]);
}
}
return 0;
}
```
## 9.Count and print how many elements are positive, negative, and zero in an array.
```c
#include<stdio.h>
int main(){
int a[10],i,neg=0,pos=0,zero=0;
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
for(i=0;i<10;i++){
if(a[i]>0){
pos++;
} else if (a[i]<0){
neg++;
}else{
zero++;
}
}
printf("pos=%d",pos);
printf("neg=%d",neg);
printf("zero=%d",zero);
return 0;
}
```
## 10. Count Frequency of Each Element (without using extra array).
```c
#include<stdio.h>
int main(){
int a[10],i,j,count,visited[10]={0};
for(i=0;i<10;i++){
scanf("%d",&a[i]);
}
for(i=0;i<10;i++){
if(visited[i]==1)
continue;
count=1;
for(j=i+1;j<10;j++){
if(a[i]==a[j]){
count++;
visited[j]=1;
}
}
printf("%d is %d times\n",a[i],count);
}
return 0;
}
```
## 11.Find the second largest element in the array.
```c
#include<stdio.h>
int main(){
int arr[10],i,large,second;
for(i=0;i<10;i++){
scanf("%d",&arr[i]);
}
large=second=arr[0];
for(i=0;i<10;i++){
if(arr[i]>large){
second=large;
large=arr[i];
} else if(arr[i]>second && arr[i]!=large){
second=arr[i];
}
}
printf("%d\n",second);
return 0;
}
```
## 12.Find the second smallest element in the array.
```c
#include<stdio.h>
int main(){
int arr[10],i,small,second;
for(i=0;i<10;i++){
scanf("%d",&arr[i]);
}
if(arr[0]<arr[1]){
small=arr[0];
second=arr[1];
}else{
small=arr[1];
second=arr[0];
}
for(i=2;i<10;i++){
if(arr[i]<small){
second=small;
small=arr[i];
} else if(arr[i]<second && arr[i]!=small){
second=arr[i];
}
}
printf("%d\n",second);
return 0;
}
```
## 13.Separate Positive and Negative Numbers into Two Arrays.
```c
#include<stdio.h>
int main(){
int arr[10],i,p=0,n=0;
int posarr[10],negarr[10];
for(i=0;i<10;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<10;i++){
if(arr[i]>0){
posarr[p]=arr[i];
p++;
}else if(arr[i]<0){
negarr[n]=arr[i];
n++;
}
}
for(i=0;i<p;i++){
printf("%d\n",posarr[i]);
}
printf("\n");
for(i=0;i<n;i++){
printf("%d\n",negarr[i]);
}
return 0;
}
```
## 14.Count Even and Odd Numbers in an Array.
```c
#include<stdio.h>
int main(){
int arr[10],e=0,o=0,i;
int evenarr[10],oddarr[10];
for(i=0;i<10;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<10;i++){
if(arr[i]%2==0){
evenarr[e]=arr[i];
e++;
}else if(arr[i]%2!=0){
oddarr[o]=arr[i];
o++;
}
}
for(i=0;i<e;i++){
printf("%d",evenarr[i]);
}
for(i=0;i<o;i++){
printf("%d",oddarr[i]);
}
return 0;
}
```
## 15.Find the difference between sum of even and odd elements.
```c
#include<stdio.h>
int main(){
int arr[10],e=0,o=0,i,sumeven=0,oddsum=0,result;
int evenarr[10],oddarr[10];
for(i=0;i<10;i++){
scanf("%d",&arr[i]);
}
for(i=0;i<10;i++){
if(arr[i]%2==0){
evenarr[e]=arr[i];
e++;
}else if(arr[i]%2!=0){
oddarr[o]=arr[i];
o++;
}
}
for(i=0;i<e;i++){
sumeven+=evenarr[i];
}
for(i=0;i<o;i++){
oddsum+=oddarr[i];
}
result=evensum-oddsum;
printf("%d\n",result);
return 0;
}
```
## 16.Write a C program to rotate an array to the right by 1 position.
```c
#include<stdio.h>
int main(){
int arr[5],i,last;
for(i=0;i<5;i++){
scanf("%d",&arr[i]);
}
last=arr[4];
for(i=4;i>0;i--){
arr[i]=arr[i-1];
}
arr[0]=last;
printf("after rotate an array\n");
for(i=0;i<5;i++){
printf("%d\n",arr[i]);
}
return 0;
}
```
## 17. Left Rotate Array by One Position.
```c
#include<stdio.h>
int main(){
int arr[i],i,first;
for(i=0;i<5;i++){
scanf("%d",&arr[i]);
}
first=arr[0];
for(i=0;i<4;i++){
arr[i]=arr[i+1];
}
arr[4]=first;
printf("after the left by one position\n");
for(i=0;i<5;i++){
printf("%d",arr[i]);
}
return 0;
}
```
##  18.Write a C program to left rotate the array by k positions.
```c
#include<stdio.h>
int main(){
int arr[5],i;
int temp[2];
for(i=0;i<5;i++){
scanf("%d",&arr[i]);
}
temp[0]=arr[0];
temp[1]=arr[1];
for(i=0;i<3;i++){
arr[i]=arr[i+1];
}
arr[3]=temp[0];
arr[4]=temp[1];
printf("after rotate\n");
for(i=0;i<5;i++){
printf("%d\n",arr[i]);
}
return 0;
}
```
## 19.Insert an element at a given position in the array.
```c
#include<stdio.h>
int main(){
int arr[5]={10,20,30,40,50};
int i,pos,i,elem;
printf("enter the position\n");
scanf("%d\n",&pos);
printf("enter the element\n");
scanf("%d\n",&elem);
for(i=5;i>pos;i--){
arr[i]=arr[i-1];
}
arr[pos]=elem;
printf("after insert\n");
for(i=0;i<5;i++){
printf("%d\n",arr[i]);
}
return 0;
}
```
## 20.delete the position in array.
```c
#include<stdio.h>
int main(){
int arr[5]={10,20,30,40,50};
int i,pos;
printf("enter the position\n");
scanf("%d",&pos);
for(i=pos;i<4;i++){
        arr[i]=arr[i+1];
}
printf("after deleting\n");
for(i=0;i<4;i++){
        printf("%d\n",arr[i]);
}
return 0;
}
```
## 21. Write a program in C for a 2D array of size 3x3 and print the matrix.
```c
#include<stdio.h>
int main(){
int a[3][3],i,j;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
scanf("%d",&a[i][j]);
}
}
printf("print the 3x3 matrix\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%d\t",a[i][j]);
}
printf("\n");
}
return 0;
}
```
## 22.Write a program in C for the multiplication of two square matrices.
```c
#include<stdio.h>
int main(){
int a[2][3],b[3][2],c[2][2],i,j,k;
for(i=0;i<2;i++){
for(j=0;j<3;j++){
scanf("%d",&a[i][j]);
}
}
for(i=0;i<3;i++){
for(j=0;j<2;j++){
scanf("%d",&b[i][j]);
}
}
for(i=0;i<2;i++){
for(j=0;j<2;j++){
c[i][j]=0;
for(k=0;k<3;k++){
c[i][j]+=a[i][j]*b[i][j];
}
}
}
prinrf("mul of matrix\n");
for(i=0;i<2;i++){
for(j=0;j<2;j++){
printf("%d\t",c[i][j]);
}
printf("\n");
}
return 0;
}
```
## 23. write a program lower triangle matrix.
```c
#include<stdio.h>
int main(){
int a[3][3],i,j;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
scanf("%d",&a[i][j]);
}
}
printf("print the matrix \n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("print the lower triangle\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
if(i>=j){
printf("%d\t",a[i][j]);
}
}
printf("\n");
}
return 0;
}
```
## 24. write a program to print the upper triangle.
```c
#include<stdio.h>
int main(){
int a[3][3],i,j;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
scanf("%d",&a[i][j]);
}
}
printf("print the matrix\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
printf("%d",a[i][j]);
}
printf("\n");
}
printf("print the upper matrix\n");
for(i=0;i<3;i++){
for(j=0;j<3;j++){
if(i<=j){
printf("%d\t",a[i][j]);
}
}
printf("\n");
}
return 0;
}
```
## 25.program to find the matrix is sparse or not.
```c
#include<stdio.h>
int main(){
int a[i][j],i,j,total,zerocount=0;
for(i=0;i<3;i++){
for(j=0;j<3;j++){
scanf("%d"&a[i][j]);
if(a[i][j]==0){
zerocount++;
}
}
}
total=3*3;
if(zerocount>total/2){
printf("is a sparse matrix\n");
} else {
printf("not sparse\n");
}
return 0;
}
```
## 26. write a program to print the repeating elements in array.
```c
#include<stdio.h>
int main(){
int arr[5],i,j,count;
for(i=0;i<5;i++){
scanf("%d"&a[i][j]);
}
for(i=0;i<5;i++){
count=1;
for(j=i+1;j<5;j++){
if(arr[i]==arr[j])
count++;
}
}
if(count>1)
printf("%d is %s times\n",arr[i],count);
return 0;
}
```
## 27.Write a program to check if elements of an array are distinct or not.
```c
#include<stdio.h>
int main(){
        int arr[10];
        int i,j;
        printf("enter the array\n");
        for(i=0;i<5;i++){
                scanf("%d",&arr[i]);
        }

        for(i=0;i<5;i++){
                for(j=i+1;j<5;j++){
                        if(arr[i]==arr[j]){
                                printf("is a not  distinct \n");
                                return 0;

                        }
                }
        }
        printf("is  a distunct\n");
        return 0;
}
```
##  28. Write a program to write whether a matrix is symmetric or not.
```c
#include<stdio.h>
int main(){
        int arr[3][3];
        int i,j;
        printf("enter the 2D matrix\n");
        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        scanf("%d",&arr[i][j]);
                }
        }

        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        if(arr[i][j]!=arr[j][i]){
                                printf("is a  not symmetrix\n");
                                return 0;
                        }
                }
        }
        printf("is  a symmetrix\n");
        return 0;
}
```
## 29. Write a program to write all the elements of 2-D Array into !-D Array in row wise.
```c
#include<stdio.h>
int main(){
        int arr2[2][3];
        int arr1[6];
        int i,j,d;

        printf("enter the 2D array\n");
        for(i=0;i<2;i++){
                for(j=0;j<3;j++){
                        scanf("%d",&arr2[i][j]);
                        }
        }

        for(i=0;i<2;i++){
                for(j=0;j<3;j++){
                        arr1[d]=arr2[i][j];
                        d++;
                }
        }
        for(i=0;i<6;i++){
                printf("%d\n",arr1[i]);
        }
        return 0;
}
```
## 30 .  C Program to Print all Non Repeated Elements in an Array.
```c
#include<stdio.h>
int main(){
          int arr[10];
          int i,j,count;
          printf("enter the array\n");
          for(i=0;i<5;i++){
          scanf("%d",&arr[i]);
          }

          for(i=0;i<5;i++){
                  count=0;
                  for(j=0;j<5;j++){
                          if(arr[i]==arr[j]){
                                  count++;
                          }
                  }

          if(count==1){
                  printf("%d\n",arr[i]);
          }
          }
          return 0;
          }
```
## 31. Write a program in C to read n number of values in an array and display them in reverse order.
```c
#include<stdio.h>
int main(){
        int arr[10],i;
        for(i=0;i<5;i++){
                scanf("%d",&arr[i]);
        }
        printf("array element\n");
        for(i=0;i<5;i++){
                printf("%d\n",arr[i]);
        }
        return 0;
}
```
## 32. Write a program in C to find the sum of all elements of the array.
```c
#include<stdio.h>
int main(){
        int arr[10],i,sum=0;
        for(i=0;i<5;i++){
                scanf("%d",&arr[i]);
        }
        printf("sum of programs\n");
        for(i=0;i<5;i++){
                sum=sum+arr[i];
        }
        printf("%d\n",sum);
        return 0;
}
```
## 33.. Write a program in C to copy the elements of one array into another array.
```c
#include<stdio.h>
int main(){
        int arr1[10],arr2[20],i;
        for(i=0;i<5;i++){
                scanf("%d",&arr1[i]);
        }
        for(i=0;i<5;i++){
                arr2[i]=arr1[i];
        }
        printf("another loop\n");
        for(i=0;i<5;i++){
        printf("%d\n",arr2[i]);
        }
        return 0;
}
```
## 34. Write a program in C to count the total number of duplicate elements in an array.
```c
#include<stdio.h>
int main(){
        int arr[10]={1,3,2,3,2,1,3};
        int i,j,count;
        int visited[10]={0};
        for(i=0;i<7;i++){
                if(visited[i]==1)
                        continue;
        count=1;
                for(j=i+1;j<7;j++){
                        if(arr[i]==arr[j]){
                                count++;
                                visited[j]=1;
                        }
                }
                if(count>1){
        printf("%d is duplicate %d times\n",arr[i],count);
        }
        }
        return 0;
}
```
## 35. Write a program in C to print all unique elements in an array.
```c
#include<stdio.h>
int main(){
        int arr[5]={1,2,3,2,1};
        int i,j,count=0;
        for(i=0;i<5;i++){
                count=0;
                for(j=0;j<5;j++){
                        if(arr[i]==arr[j])
                                count++;
                        }
        if(count==1){
                printf("%d\n",arr[i]);
        }
        }
        return 0;
}
```
## 36. Write a program in C to merge two arrays of the same size sorted in descending order.
```c
#include<stdio.h>
int main(){
        int arr[5]={10,23,3,43,51};
        int arr2[5]={64,7,8,9,120};
        int dec[20];
        int i,j,d=0,temp;
        for(i=0;i<5;i++){
                dec[d]=arr[i];
                d++;
        }
        for(i=0;i<5;i++){
                dec[d]=arr2[i];
                d++;
        }
        for(i=0;i<d;i++){
                printf("%d\n",dec[i]);
        }
        printf("desending order\n");
        for(i=0;i<d-1;i++){
                for(j=i+1;j<d;j++){
                        if(dec[i]<dec[j]){
                                temp=dec[i];
                                dec[i]=dec[j];
                                dec[j]=temp;
                        }
                }
        }
        for(i=0;i<d;i++){
                printf("%d\n",dec[i]);
        }
        return 0;
}
```
## 37. Write a  program in C to count the frequency of each element of an array.
```c

#include<stdio.h>
int main(){
        int arr[10]={1,2,2,1,3};
        int i,j,freq;
        int visited[10]={0};
        for(i=0;i<5;i++){
                if(visited[i]==1)

                        continue;
                freq=1;
                for(j=i+1;j<5;j++){
                        if(arr[i]==arr[j]){
                                freq++;
                                visited[j]=1;
                        }
                }
                        printf("%dis %d times\n",arr[i],freq);

        }
        return 0;
}
```
## 38. Write a program in C to find the maximum and minimum elements in an array.
```c
#include<stdio.h>
int main(){
        int arr[10]={1,2,3,4,5,6,7,8,9,10};
        int i,j,max=arr[0],mim=arr[0];
        for(i=0;i<10;i++){
                if(arr[i]>max){
                        max=arr[i];
                }else if (arr[i]<mim){
                        mim=arr[i];
                }
        }
                printf("%d %d\n",mim,max);
                return 0;
}
```
## 39.Write a program in C to separate odd and even integers into separate arrays.
```c
#include<stdio.h>
int main(){
        int arr[5]={1,2,3,4,5};
        int evenarr[5],oddarr[5];
        int i,e=0,o=0;
        for(i=0;i<5;i++){
        if(arr[i]%2==0){
                evenarr[e]=arr[i];
                e++;
        } else {
                oddarr[o]=arr[i];
                o++;
        }
        }
        printf("print thr even numbers\n");
        for(i=0;i<e;i++){
                printf("%d\n",evenarr[i]);
        }
        printf("print the odd numbers\n");
        for(i=0;i<o;i++){
                printf("%d\n",oddarr[i]);
        }
        return 0;
}
```
## 40. Write a program in C to sort elements of an array in ascending order.
```c
#include<stdio.h>
int main(){
        int arr[5]={12,3,44,1,6};
        int i,temp;
        for(i=0;i<5;i++){
                for(int j=i+1;j<5;j++){
                        if(arr[i]>arr[j]){
                                temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                        }
                }
        }
        printf("asecendind order\n");
        for(i=0;i<5;i++){
                printf("%d\n",arr[i]);
        }
        return 0;
}
```
## 41.Write a program in C to sort the elements of the array in descending order.
```c
#include<stdio.h>
int main(){
         int arr[5]={11,2,5,66,1};
         int i,j,temp;
         for(i=0;i<5;i++){
                 for(j=i+1;j<5;j++){
                         if(arr[i]<arr[j]){
                                 temp=arr[i];
                                 arr[i]=arr[j];
                                 arr[j]=temp;
                         }
                 }
         }
         printf("print  the decsecinding\n");
         for(i=0;i<5;i++){
                 printf("%d\n",arr[i]);
         }
         return 0;
}
```
## 42. Write a program in C to delete an element at a desired position from an array.
```c
#include<stdio.h>
int main(){
        int arr[10]={1,2,3,4,5};
        int size=5,pos,i;
        printf("enter the postion\n");
        scanf("%d",&pos);

        for(i=pos-1;i<size-1;i++){
                arr[i]=arr[i+1];
        }
        size--;

        printf("print the after deleting\n");
        for(i=0;i<size;i++){
                printf("%d\n",arr[i]);
        }
        return 0;
}
```
## 43. Write a program in C to find the second largest element in an array.
```c
#include<stdio.h>
int main(){
        int arr[10]={1,2,3,4,5};
        int i,first=arr[0],second=arr[0];

        for(i=0;i<5;i++){
                if(arr[i]>first){
                        second=first;
                        first=arr[i];
                }else if(arr[i]>second){
                        second=arr[i];
                }

        }
        printf("%d\n",second);
        return 0;
}
```
## 44.. Write a program in C to find the second smallest element in an array.
```c
#include<stdio.h>
#include<limits.h>
int main(){
        int arr[10]={1,2,3,4,5};
        int i,first=INT_MAX,second=INT_MAX;

        for(i=0;i<5;i++){
                if(arr[i]<first){
                        second=first;
                        first=arr[i];
                }
                else if (arr[i]<second){
                        second=arr[i];
                }
        }
        printf("%d\n",second);
        return 0;
}
```
## 45.. Write a program in C for a 2D array of size 3x3 and print the matrix.
```c
#include<stdio.h>
int main(){
        int a[3][3]={1,2,3,4,5,6,7,8,9};
        int i,j;
        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        printf("%d\t",a[i][j]);
                }
                printf("\n");
        }
        return 0;
}
```
## 46.Write a program in C for adding two matrices of the same size.
```c
#include<stdio.h>
int main(){
        int a1[2][2]={1,2,3,4};
        int a2[2][2]={1,2,3,4};
        int i,j;
        for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                        int sum=sum+a[i][j];
                }
                        printf("%d\n",sum);
        }
        return 0;
}
```
## 47. Write a program in C for the subtraction of two matrices.
## 48. Write a program in C for the multiplication of two square matrices.
```c
#include<stdio.h>
int main(){
        int a[2][3],b[3][2],c[2][2];
        int i,j,k;

        for(i=0;i<2;i++){
                for(j=0;j<3;j++){
                        scanf("%d",&a[i][j]);
                }
        }

        for(i=0;i<3;i++){
                for(j=0;j<2;j++){
                        scanf("%d",&b[i][j]);
                }
        }

        for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                        c[i][j]=0;
                        for(k=0;k<3;k++){
                                c[i][j]+=a[i][k]*b[k][j];
                        }
                }
        }

        printf("print the mul matrix\n");

        for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                        printf("%d\t",c[i][j]);
                }
                printf("\n");
        }
        return 0;
}
```
## 49. Write a program in C to find the transpose of a given matrix.
```c
#include<stdio.h>
int main(){
        int a[2][3],i,j;

        for(i=0;i<2;i++){
                for(j=0;j<3;j++){
                        scanf("%d",&a[i][j]);
                }
        }

        printf("printf the matrix\n");
        for(i=0;i<2;i++){
                for(j=0;j<3;j++){
                        printf("%d\t",a[i][j]);
                }
                printf("\n");
        }

        printf("transpode matrix\n");

        for(i=0;i<3;i++){
                for(j=0;j<2;j++){
                        printf("%d\t",a[j][i]);
                }
                printf("\n");
        }
        return 0;
}
```
## 50. Write a program in C to find the sum of the right diagonals of a matrix.
```c
#include<stdio.h>
int main(){
        int a[3][3],i,j,sum=0;

        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        scanf("%d",&a[i][j]);
                }
        }

        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        printf("%d\t",a[i][j]);
                }
                printf("\n");
        }

        printf("print the right diginal\n");
        for(i=0;i<3;i++){
                        printf("%d\t",a[i][i]);

        }
        printf("\n");
        printf("sum of digional\n");
        for(i=0;i<3;i++){
                sum+=a[i][i];
        }
        printf("%d\n",sum);


        return 0;
}
```
## 51. Write a program in C to find the sum of the left diagonals of a matrix.
```c
#include<stdio.h>
int main(){
        int a[3][3],i,j,sum=0;

        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        scanf("%d",&a[i][j]);
                }
        }

        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        printf("%d\t",a[i][j]);
                }
                printf("\n");
        }

        printf("print the left diginal\n");
        for(i=0;i<3;i++){
                        printf("%d\t",a[i][3-i-1]);

        }
        printf("\n");
        printf("sum of digional\n");
        for(i=0;i<3;i++){
                sum+=a[i][3-i-1];
        }
        printf("%d\n",sum);


        return 0;
}
```
## 52. Write a program in C to find the sum of rows and columns of a matrix.
```c
#include<stdio.h>
int main(){
        int a[3][3]={1,2,3,4,5,6,7,8,9};
        int i,j,sr,sc;

        for(i=0;i<3;i++){
                sr=0;sc=0;
                for(j=0;j<3;j++){
                        sr+=a[i][j];
                        sc+=a[i][j];
                }
                printf("sr=%d and sc=%d\n",sr,sc);
        }
        return 0;
}
```
## 53. Write a program in C to print or display the lower triangular of a given matrix.
```c
#include<stdio.h>
int main(){
int a[3][3],i,j;

for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                scanf("%d",&a[i][j]);
        }
}

for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                printf("%d\t",a[i][j]);
        }
        printf("\n");
}

printf("lowe triangle\n");
for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                if(i>=j){
                        printf("%d\t",a[i][j]);
                }
        }
        printf("\n");
}
return 0;
}
```
## 54. Write a program in C to print or display an upper triangular matrix.
```c
#include<stdio.h>
int main(){
int a[3][3],i,j;

for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                scanf("%d",&a[i][j]);
        }
}

for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                printf("%d\t",a[i][j]);
        }
        printf("\n");
}

printf("upper triangle\n");
for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                if(i<=j){
                        printf("%d\t",a[i][j]);
                }
        }
        printf("\n");
}
return 0;
}
```
## 55.Write a program in C to calculate the determinant of a 3 x 3 matrix.
```c
#include<stdio.h>
int main(){
        int a[3][3],i,j,det;
        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        scanf("%d",&a[i][j]);
                }
        }
        printf("printf the matrix:\n");
        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        printf("%d\t",a[i][j]);
                }
                printf("\n");
                det = a[0][0]*(a[1][1]*a[2][2] - a[1][2]*a[2][1])
        - a[0][1]*(a[1][0]*a[2][2] - a[1][2]*a[2][0])
        + a[0][2]*(a[1][0]*a[2][1] - a[1][1]*a[2][0]);
        }

        printf("print determinant=%d\n",det);

                        return 0;
                        }
```
## 56.Write a program in C to accept two matrices and check whether they are equal.
```c
#include<stdio.h>
int main(){
        int a[3][3],b[3][3],i,j;

        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        scanf("%d",&a[i][j]);
                }
        }

        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        scanf("%d",&b[i][j]);
                }
        }

        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        if(a[i][j]!=b[i][j]){
                                printf("not equal\n");
                                return 0;
                        }
                } 
        }

        printf("equal\n");
        return 0;
}
```
## 57. Write a program in C to find the majority element of an array  (A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element).
```c
#include<stdio.h>
int main(){
        int arr[10],i,j,n;
        printf("enter the size\n");
        scanf("%d",&n);



printf("enter the array\n");
for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
}

        for(i=0;i<n;i++){
                int count=0;
                for(j=0;j<n;j++){
                        if(arr[i]==arr[j])
                                count++;
                }
                if(count > n/2){
                        printf("majority=%d\n",arr[i]);
                        return 0;
                }
        }
        printf("no majority\n");
        return 0;
}
```
## 58. Write a program in C to find the missing number in a given array. There are no duplicates in the list.
```c
#include<stdio.h>
int main(){
        int arr[]={1,2,3,5};
        int i,n=5,sum=0;
        int total=n*(n+1)/2;

        for(i=0;i<n-1;i++){
                sum+=arr[i];
        }
        int missing=total-sum;
        printf("%d\n",missing);
        return 0;
}
```
## 59. Write a program in C to find the two repeating elements in a given array.
```c
#include<stdio.h>
int main(){
        int arr[5]={1,2,2,1,3};
        int i,j;

        for(i=0;i<5;i++){
                for(j=i+1;j<5;j++){
                        if(arr[i]==arr[j]){
                                printf("%d\n",arr[i]);
                        }
                }
        }
        return 0;
}
```
## 60. Write a program to check if a given element is present in an array.
```c
#include<stdio.h>
int main(){
        int arr[5]={1,2,3,4,5};
        int i,j,key;
        printf("enter the key number\n");
        scanf("%d",&key);

        for(i=0;i<5;i++){
                for(j=0;j<5;j++){
                        if(arr[i]==key){
                                printf("%d is present in array\n",key);
                                return 0;
                                }
                }
        }

        printf("is not in array.c\n");
        return 0;
}
```
 ## 61. Write a program to check if a given element is present in an array.
 ```c
#include<stdio.h>
int main(){
        int arr[5]={1,2,3,4,5};
        int i,j,key;
        printf("enter the key number\n");
        scanf("%d",&key);

        for(i=0;i<5;i++){
                for(j=0;j<5;j++){
                        if(arr[i]==key){
                                printf("%d is present in array\n",key);
                                return 0;
                                }
                }
        }

        printf("is not in array.c\n");
        return 0;
}
```
## 62. Create a function to calculate the average of elements in an array.
```c
#include<stdio.h>
 float average(int arr[],int n);
 int main(){
         int arr[5]={1,2,3,4,5};
         float avg;
         avg=average(arr,5);
         printf("%.2f\n",avg);
         return 0;
 }
float average(int arr[],int n){
        int i,sum=0;
         for(i=0;i<5;i++){
                 sum+=arr[i];
         }
         return (float)sum/n;
}
```
## 63 . Write a program to count the number of even and odd elements in an array.
```c
#include<stdio.h>
int main(){
        int arr[5]={1,2,3,4,5};
        int i,j,evencount=0,oddcount=0;

        for(i=0;i<5;i++){
                if(arr[i]%2==0){
                evencount++;
                }else{
                        oddcount++;
                }
        }
                printf("even=%d\n and odd=%d\n",evencount,oddcount);

        return 0;
}
```
##  64 . Implement a function to reverse the elements of an array.
```c
#include<stdio.h>
int reverse(int arr[],int n);
int main(){
        int arr[5]={1,2,3,4,5};
        printf("revse the number\n");
        reverse(arr,5);
        return 0;
}
int reverse(int arr[],int n){
        int i;
        for(i=4;i>=0;i--){
                printf("%d\n",arr[i]);
        }
        printf("\n");
}
```
## 65 .Implement a function to delete an element at a specific position in an array.
```c
#include<stdio.h>
void deleted(int arr[],int n);
int main(){
        int arr[5]={1,2,3,4,5};
        deleted(arr,5);
        return 0;
}
void deleted(int arr[],int n){
        int pos,i;
        printf("enter the position\n");
        scanf("%d",&pos);
        for(i=pos-1;i<n-1;i++){
                arr[i]=arr[i+1];
        }
        printf("print after deleting\n");
        for(i=0;i<n-1;i++){
                printf("%d\n",arr[i]);
        }
}
```
## 66.. Write a function to find the product of all elements in an array.
```
#include<stdio.h>
void product(int arr[],int n);
int main(){
        int arr[5]={1,2,3,4,5};
        product(arr,5);
        return 0;
}
void product(int arr[],int n){
        int i,sum=0;
        for(i=0;i<5;i++){
                sum=sum+arr[i];
        }
        printf("%d\n",sum);
}
```
## 67.Print Square of Array Elements in C.
```c
#include<stdio.h>
int main(){
        int arr[5]={1,2,3,4,5};

        for(int i=0;i<5;i++){
                printf("%d\n",arr[i]*arr[i]);
        }
        return 0;
}
```
## 68. . Print Ascii Values using Array in C.
```
#include<stdio.h>
int main(){
        int arr[5]={'A','B','a','b','c'};
        int i;
        for(i=0;i<5;i++){
                printf("  %c     %d\n",arr[i],arr[i]);
        }
        return 0;
}
```
## 69. C Program To Find Two Elements whose Sum is Closest to Zero.
```c
#include<stdio.h>
#include<stdlib.h>
int main (){
        int arr[6];
        int n=6;
        int i,j;
        printf("enter the array\n");
        for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }

        for(i=0;i<n-1;i++){
                for(j=i+1;j<n;j++){
                        if(arr[i]>arr[j]){
                                int temp=arr[i];
                                arr[i]=arr[j];
                                arr[j]=temp;
                        }
                }
        }

        int f=0;
        int r=n-1;
        int min_sum=arr[f]+arr[r];
        int num1=arr[f];
        int num2=arr[r];

        while(f<r){
                int sum=arr[f]+arr[r];

                if( abs (sum) <abs (min_sum)){
                        min_sum=sum;
                        num1=arr[f];
                        num2=arr[r];
                }
        if(sum<0){
                f++;
        }
        else{
                r--;
        }
        }

        printf("%d & %d is colse\n",num1,num2);
        printf("%d\n",min_sum);
        }
```
## 67. C Program to Find Union and Intersection of Two Arrays.
```c
#include<stdio.h>
int main(){
        int arr1[4]={1,2,3,4};
        int arr2[4]={3,4,5,6};
        int unionarr[8];
        int i,j,u=0;

        for(i=0;i<4;i++){
                unionarr[u]=arr1[i];
                u++;
        }
        for(j=0;j<4;j++){
                unionarr[u]=arr2[j];
                u++;
        }
        printf("print the union \n");
        for(i=0;i<u;i++){

        printf("%d\n",unionarr[i]);
        }


        printf("\n");

        printf("print the intrsction\n");


        for(i=0;i<4;i++){
                for(j=0;j<4;j++){
                        if(arr1[i]==arr2[j]){
                                printf("%d\n",arr1[i]);
                        }
                }
        }
//      printf("\n");



        return 0;
}
```
## 68. C Program to Print all Non Repeated Elements in an Array.
```
#include<stdio.h>
int main(){
          int arr[10];
          int i,j,count;
          printf("enter the array\n");
          for(i=0;i<5;i++){
          scanf("%d",&arr[i]);
          }

          for(i=0;i<5;i++){
                  count=0;
                  for(j=0;j<5;j++){
                          if(arr[i]==arr[j]){
                                  count++;
                          }
                  }

          if(count==1){
                  printf("%d\n",arr[i]);
          }
          }
          return 0;
          }

```
## 69.. Write a program to write all the elements of 2-D Array into !-D Array in row wise.
```c

#include<stdio.h>
int main(){
        int arr2[2][3];
        int arr1[6];
        int i,j,d;

        printf("enter the 2D array\n");
        for(i=0;i<2;i++){
                for(j=0;j<3;j++){
                        scanf("%d",&arr2[i][j]);
                        }
        }

        for(i=0;i<2;i++){
                for(j=0;j<3;j++){
                        arr1[d]=arr2[i][j];
                        d++;
                }
        }
        for(i=0;i<6;i++){
                printf("%d\n",arr1[i]);
        }
        return 0;
}
```
## 70. Write a program to write whether a matrix is symmetric or not.
```c
#include<stdio.h>
int main(){
        int arr[3][3];
        int i,j;
        printf("enter the 2D matrix\n");
        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        scanf("%d",&arr[i][j]);
                }
        }

        for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                        if(arr[i][j]!=arr[j][i]){
                                printf("is a  not symmetrix\n");
                                return 0;
                        }
                }
        }
        printf("is  a symmetrix\n");
        return 0;
}
```
## 71. Write a program to check if elements of an array are distinct or not.
```c
#include<stdio.h>
int main(){
        int arr[10];
        int i,j;
        printf("enter the array\n");
        for(i=0;i<5;i++){
                scanf("%d",&arr[i]);
        }

        for(i=0;i<5;i++){
                for(j=i+1;j<5;j++){
                        if(arr[i]==arr[j]){
                                printf("is a not  distinct \n");
                                return 0;

                        }
                }
        }
        printf("is  a distunct\n");
        return 0;
}
```
## 72..Write a program to remove duplicate elements from a sorted array.
```c
#include<stdio.h>
int main(){
        int arr[8]={1,1,2,2,3,4,4,5};
        int i,j;
        j=0;
         for(i=1;i<8;i++){
                 if(arr[i]!=arr[j]){
                         j++;
                         arr[j]=arr[i];
                 }
         }
         printf("after sort\n");
         for(i=0;i<=j;i++){
                 printf("%d\n",arr[i]);
         }
         return 0;
}
```
## 73.
