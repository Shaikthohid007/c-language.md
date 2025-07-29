## find the 2nd smallest in given array.
```c
#include<stdio.h>
int main(){
int arr[10]={12,21,3,4,5,6,7,8,9,10};
int i,first=arr[1],second=arr[0];
for(i=0;i<10;i++){
if(arr[i]<first){
second=first;
first=arr[i];
} else if (arr[i]<second){
second=arr[i];
}
}
printf("second smallest=%d\n",second && arr[i]!=first);
return 0;
}
