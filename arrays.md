## 1. Input and print array elements.
```c
#include<stdio.h>
int main(){
int a[10],i;
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


