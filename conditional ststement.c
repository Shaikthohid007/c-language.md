control statements in c:
if ,if else,if- else ladder,nested if ,switch.

1.IF STATEMENET:
   ```c
if (condition)
statement;
the condition is true ststement is executed then false then execuete another statement.
EXAMPLE:
int main(){
int a;
scanf("%d",&a);
if(a)
{
printf("in side if block");
printf("%d",a);
}
printf("out side if block");
return 0;
```

* 2. IF ELSE STATEMENT:
the condition is true then statement 1 is executed then condition is false then statement 2 is executed .
if (contion)
{
statement 1;
}
else
{
statement 2;
}
after if block statement;
EXAMPLE:
int main (){
int age;
scanf ("%d",age);
if(age>18)
printf("is eligible");
else
printf("not");
}

3.Nested if :(with in if using another if).
if (contion){
if (condition){
inner if block statement 1;
}else{
inner if block statement 2;
}
else{
outer if block statement ;
}
statement x;


EXAMPLE:
int main(){
int age ,salaray;
scanf("%d%d",&age,&salary);
if(age>50){
if(salary<50000){
salart+=1000;
}else[
salary+=500;
}
else{
salary+=300;
}
Printf( %d\n ,salary);
printf("end of program");
}
return 0;
}


4. else if ladder:
if (condition)   
statement 1;
else if(comdition 2)
statement 2;
else if (condition3)
statement 3;
   '
   '
else if (condition n)
statement n;
else default statement;

Example:
int main (){
int marks;
scnaf("%d",&marks);
if( marks>80)
printf("Grade is A");
else is(marks >70)
printf("Grade is B");
else if(marks >40)
printf("Grade is c");
else 
printf("fail");
return 0;
}

5. Switch : s
siwtch(expression){
case 1:
      block od statement 1;
break;
case 2:
      block od statement 2;
break;
case n:
      block od statement n;
break;
'
'
'
default:
        default statement;
}
statement;

Example:
int main (){
int a;       // float is not consider it'sgive error.
scanf("%d",&a);
switch(a){
case 1:
printf("sk");
break;
case 2:
printf("fk");
break;
default:
printf("bye");
}
printf("go to  home");

 Example 2;
int main(){ 
char ch;
scanf("%c,&ch");
switch(ch){
case a:
case e:
case i:
case o:
case u:
       printf("vowels");
break;
default:
printf("not");
}
return 0;
}

simple calculater using a switch:
int main(){
int a,b;
char operator;
scanf("%d%d",&a,&b);
scanf("%c",&operator);
switch(operator){
case '+':sum=a+b;
printf("%d",sum);
break;
case '-':sum=a-b;
printf("%d",sum);
break;
case '*':sum=a*b;
printf("%d",sum);
break;
case '/':sum=a/b;
printf("%d",sum);
break;
default:
printf("entered the wromg value");
break;
}
return 0;
}
_______________________________
          Loops in c 
          ----------
when we want to execute many statements multiple times then we use loops.

* for loop:

          initilation  ,condition   , update/modify
       for(expression 1;expression 2; expression 3)
{
   // loop body 
}


for(i=1;i<5;i++){          
printf("i=%d",i);
}
   flow chart:
    -----------
    initilazation 
        |
 _false__condition<-________________
|         |                      |
|         |true                  |
|      body of the loop          |
|          |                     |
|        update / modify_________|
|
|__________ ->out of the loop body


while loop:

while (condition
{
// body of the loop
}

Example:
int main(){
int i=1;
while(i<=10){
printf("%d\n",i);
i++;
}
return 0;
}

start form the initilation the condution  is true then go to body of the loop otherwise condition false go to out of the body loop.

// factorial program in c.
int main (){
int n,fact=1;
scanf("%d",&n);
while(n>0){
fact*=n;
n--;
printf("%d\n",fact);
}
return 0;
}

 do while loop:

do {
statement block;
}while(condition);
 
difference b/w for,while and do while loops:
for          while         do while
entry        entry         exit
For(1;2;3)   while(con){    do{ 
{ loop;       loop;          statement 1;
}              }              }while(con);

break statements :


Nested loop :
for( ;  ;  )
{ 
for ( ; ; )
{ 
inner loop statement;
}
outer loop statement;
}

Example:

for(j=1;j<6;j++)
{
for(i=1;i<5;i++)
{
printf("*");
}
}
1st we take outer loop j and condition is true then go  to inner loop i and check condition is true print i next increment i++,after inner loop fales then go to j++  like this loop will be repeated .

Nested while loop :
 while (condition)
{
while(condition)
{
inner loop statement;
}
outer loop statement;
}

Example :

int i=0;j=1; 
while(i<3)
{
while(i<=3)
{
printf("%d",i++);
}
printf("%d",j++);
}

Nested do while:
do
{
do{
inner loop statement;
}while(condition);
outer loop statement ;
}while (condition);
 
Example:
int i=1,j=3;
do{
do{
printf("%d",j);
}'while(j<0);
i++;
printf("%d",i);
} while(i<4);


Arrays: 
datatype name of array[size of array];
       initialization:
* At compile time:
1.int a[5]={0,-1,11,10,2};
2.int a[]={1,2,3,4,-5}'
3.int a[5]={1,2,3};
4.int a[5]={1,2,3,4,5,7};=(error)
5.int a[5]; a[0]=1,a[1]=2,a[2]=3,a[3]=4,a[4]=5;
6.int a[5]={0};
7.int a[5]={};(error)
* At run time:
 int a   [5];
printf("enter the element of array");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
 Example:
 int main (){
int a[100],i;
for(i=0;i<100;i++)
{
if(i<30)
a[i]=1;
else
a[i]=0;
}






