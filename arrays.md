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













