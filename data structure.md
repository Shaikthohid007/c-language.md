## 1. single linkedlist.
```c
#include<stdio.h>
#include<stdlib.h>

 struct node{
         int data ;
         struct node* next;
 };
 void printlist(struct node* head){
         struct node* temp=head;
         while(temp!=NULL){
                 printf("%d->",temp->data);
                 temp=temp->next;
         }
         printf("NULL\n");
 }
int main(){
        struct node* head=(struct node*)malloc(sizeof(struct node));
         struct node* second=(struct node*)malloc(sizeof(struct node));
          struct node* third=(struct node*)malloc(sizeof(struct node));

          head->data=10;
          head->next=second;

          second->data=20;
          second->next=third;

          third->data=30;
          third->next=NULL;

          printlist(head);
          return 0;
}
```
## 2. insert the element at begining in linkedlist.c
```c
#include<stdio.h>
#include<stdlib.h>

  struct node{
          int data;
          struct node *link;
  };
  int main(){
          struct node *head=malloc(sizeof(struct node));
          head->data=12;
          head->link = NULL;

          struct node *second=malloc(sizeof(struct node));
          second->data=11;
          second->link = NULL;
          head->link=second;

          struct node *third=malloc(sizeof(struct node));
          third->data=10;
          third->link = NULL;
          second->link = third;

          struct node *newnode=malloc(sizeof(struct node));
          newnode->data=9;
          newnode->link= head;
          head=newnode;

          struct node *temp=head;
          while(temp!=NULL){
                  printf("%d->",temp->data);
          temp=temp->link;
          }
          printf("NULL\n");
                  return 0;
  }
```
## 3. insert the element at last in linkedlist.
```c
#include<stdio.h>
#include<stdlib.h>

struct node{
        int data;
        struct node *link;
};
 int main(){
         struct node *head=malloc(sizeof(struct node));
         head->data=12;
         head->link=NULL;

         struct node *second=malloc(sizeof(struct node));
         second->data=13;
         second->link=NULL;
         head->link=second;

         struct node *third=malloc(sizeof(struct node));
         third->data=14;
         third->link=NULL;
         second->link=third;

         struct node *lastnode,*temp;
         lastnode=malloc(sizeof(struct node));
         lastnode->data=15;
         lastnode->link=NULL;

         temp=head;
         while(temp->link!=NULL){
                 temp=temp->link;
         }
         temp->link=lastnode;


         temp=head;

         while(temp!=NULL){
                 printf("%d->",temp->data);
                 temp=temp->link;
         }
         printf("NULL\n");
         return 0;
}
```
## 4. inset the element at given position in linkedlist.
```c
#include<stdio.h>
#include<stdlib.h>
int pos;
struct node{
        int data;
        struct node *link;
};
int main(){
        struct node *head=malloc(sizeof(struct node));
        head->data=10;
        head->link=NULL;

        struct node *second=malloc(sizeof(struct node));
        second->data=12;
        second->link=NULL;
        head->link=second;

        struct node *third=malloc(sizeof(struct node));
        third->data=14;
        third->link=NULL;
        second->link=third;

        struct node *midnode,*temp;
        midnode=malloc(sizeof(struct node));
        midnode->data=20;
        midnode->link=NULL;


        scanf("%d",&pos);
        if(pos==1){
                midnode->link=head;
                head=midnode;
        }else{
                temp=head;
                for(int i=1;i<pos-1;i++)
                        temp=temp->link;
        if (temp==NULL){
                printf("invalid\n");
        }


        midnode->link=temp->link;
        temp->link=midnode;
        }

        temp=head;
        while(temp!=NULL){
                printf("%d->",temp->data);
                temp=temp->link;
        }
        printf("NULL\n");
        return 0;
}
```
## 5.reverse the single linkedlist.
```c
#include<stdio.h>
#include<stdlib.h>
 int pos,i;
 struct node{
         int data;
         struct node* link;
 };
  int main(){
          struct node *head=malloc(sizeof(struct node));
          head->data=23;
          head->link=NULL;

          struct node *second=malloc(sizeof(struct node));
          second->data=53;
          second->link=NULL;
          head->link=second;

           struct node *third=malloc(sizeof(struct node));
          third->data=98;
          third->link=NULL;
          second->link=third;

          struct node *temp=head;
          printf("before\n");

          while(temp!=NULL){
                  printf("%d->",temp->data);
                  temp=temp->link;
          }
          printf("NULL\n");

          struct node *prenode,*currentnode,*nextnode;
          prenode=NULL;
          nextnode=currentnode=head;
          while(nextnode!=NULL){
                  nextnode=nextnode->link;
                  currentnode->link=prenode;
                  prenode=currentnode;
                  currentnode=nextnode;
          }
          head=prenode;

          temp=head;
          printf("after\n");
          while(temp!=NULL){
                  printf("%d->",temp->data);
                  temp=temp->link;
          }
          printf("NULL\n");
          return 0;
  }
```
## 6.count the single linkedlist.
```c
#include<stdio.h>
#include<stdlib.h>
 int pos,i;
 struct node{
         int data;
         struct node* link;
 };
  int main(){
          struct node *head=malloc(sizeof(struct node));
          head->data=23;
          head->link=NULL;

          struct node *second=malloc(sizeof(struct node));
          second->data=53;
          second->link=NULL;
          head->link=second;

           struct node *third=malloc(sizeof(struct node));
          third->data=98;
          third->link=NULL;
          second->link=third;

           struct node *four=malloc(sizeof(struct node));
          four->data=92;
          four->link=NULL;
          third->link=four;

          struct node *temp=head;

          while(temp!=NULL){
                  printf("%d->",temp->data);
                  temp=temp->link;
          }
          printf("NULL\n");


          int count=0;
          temp=head;
          while(temp!=NULL){
                  count++;
                  temp=temp->link;
          }
          printf("count=%d\n",count);
          return 0;
  }
```
## 7. delet the element in begining in single linkedlist.c
```c
#include<stdio.h>
#include<stdlib.h>
struct node {
        int data;
        struct node *link;
};
int main(){
        struct node *head=malloc(sizeof(struct node));
        head->data=12;
        head->link=NULL;

        struct node *second=malloc(sizeof(struct node));
        second->data=22;
        second->link=NULL;
        head->link=second;


        struct node *third=malloc(sizeof(struct node));
        third->data=32;
        third->link=NULL;
        second->link=third;

        struct node *temp=head;

        printf("before deleting\n");
        while(temp!=NULL){
                printf("%d->",temp->data);
                temp=temp->link;
        }
        printf("NULL\n");

        temp=head;
        head=head->link;
        free(temp);

         temp=head;

        printf("after\n");

        while(temp!=NULL){
                printf("%d->",temp->data);
                temp=temp->link;

        }
        printf("NULL\n");
        return 0;
}
```
## 8.. Write a function to count the number of occurrences of an element in a single linked list.
```c
#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node *next;
};
int main(){
        struct node *head=malloc(sizeof(struct node));
        head->data=10;
        head->next=NULL;

        struct node *second=malloc(sizeof(struct node));
        second->data=20;
        second->next=NULL;

        head->next=second;

        struct node *third=malloc(sizeof(struct node));
        third->data=10;
        third->next=NULL;

        second->next=third;

        struct node*last=malloc(sizeof(struct node));
        last->data=30;
        last->next=NULL;

        third->next=last;

        int key,count;

        scanf("%d",&key);

        struct node *temp=head;

        while(temp!=NULL){
                printf("%d->",temp->data);
                if(temp->data==key){
                        count++;
                }
                temp=temp->next;
        }
        printf("NULL\n");
        printf("%d and %d\n",key,count);

        return  0;
}
```
## 9.Write a function to find the smallest and largest element of a single linked list.
```c
#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node *next;
};

int main(){
        struct node *head=malloc(sizeof(struct node));
        head->data=10;
        head->next=NULL;

        struct node *second=malloc(sizeof(struct node));
        second->data=30;
        second->next=NULL;

        head->next=second;

        struct node *third=malloc(sizeof(struct node));
        third->data=1;
        third->next=NULL;

        second->next=third;

        struct node *four=malloc(sizeof(struct  node));
        four->data=23;
        four->next=NULL;

        third->next=four;

        struct node *last=malloc(sizeof(struct node));
        last->data=9;
        last->next=NULL;

        four->next=last;

        int large=head->data;
        int small=head->data;
        struct node *temp=head;

        while(temp!=NULL){
                printf("%d->",temp->data);
                if(temp->data>large){
                        large=temp->data;
                }
                if(temp->data<small){
                        small=temp->data;
                }

                temp=temp->next;
        }
        printf("NULL\n");
        printf("larg=%d small=%d\n",large,small);
        return 0;
}
```
## 10.Write a function to create a copy of a single linked list.
```c
#include<stdio.h>
#include<stdlib.h>
struct node {
        int data;
        struct node *next;
};

int main(){
        struct node *head=malloc(sizeof(struct node));
        head->data=10;
        head->next=NULL;

        struct node *second=malloc(sizeof(struct node));
        second->data=20;
        head->next=NULL;

        head->next=second;

        struct node *third=malloc(sizeof(struct node));
        third->data=30;
        third->next=NULL;
        second->next=third;

        struct node *temp=head;

        while(temp!=NULL){
                printf("%d->",temp->data);
                temp=temp->next;
        }
        printf("NULL\n");

        struct node *newhead=NULL,*tail=NULL;
        temp=head;

        while(temp!=NULL){
        struct node *newnode=malloc(sizeof(struct node));
        newnode->data=temp->data;
        newnode->next=NULL;

        if(newhead==NULL){
                newhead=newnode;
                tail=newnode;
        }else{


        tail->next=newnode;
        tail=newnode;
        }
        temp=temp->next;
        }

        temp=newhead;
        while(temp!=NULL){
                printf("%d->",temp->data);
                temp=temp->next;
        }
        printf("NULL\n");
        return 0;
}
```
## 11.Write a function to move the largest element to the end of a single linked list.           
```c
#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node *next;
};

int main(){
        struct node *head=malloc(sizeof(struct node));
        head->data=10;
        head->next=NULL;

        struct node *second=malloc(sizeof(struct node));
        second->data=50;
        head->next=NULL;

        head->next=second;

        struct node *third=malloc(sizeof(struct node));
        third->data=20;
        third->next=NULL;

        second->next=third;

        struct node *last=malloc(sizeof(struct node));
        last->data=30;
        last->next=NULL;

        third->next=last;

        struct node *temp=head;

        while(temp!=NULL){
                printf("%d->",temp->data);
                temp=temp->next;
        }
        printf("NULL\n");

        struct node *maxnode=head,*premax=NULL;
        struct node *pre=NULL;

        temp=head;

        while(temp){
                if(temp->data>maxnode->data){
                        maxnode=temp;
                        premax=pre;
                }
                pre=temp;
                temp=temp->next;
        }

        if(maxnode!=NULL)
                premax->next=maxnode->next;
        else
                head=maxnode->next;

        pre->next=maxnode;
        maxnode->next=NULL;


        printf("after\n");

        temp=head;

        while(temp!=NULL){
                printf("%d->",temp->data);
                temp=temp->next;
        }
        printf("NULL\n");

        return 0;
}
```
## 12.. Write a function to move the smallest element to the beginning of a single linked list.
```c
#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node *next;
};

int main(){
        struct node *head=malloc(sizeof(struct node));
        head->data=40;
        head->next=NULL;

        struct node *second=malloc(sizeof(struct node));
        second->data=10;
        head->next=NULL;

        head->next=second;

        struct node *third=malloc(sizeof(struct node));
        third->data=20;
        third->next=NULL;

        second->next=third;

        struct node *last=malloc(sizeof(struct node));
        last->data=30;
        last->next=NULL;

        third->next=last;

        struct node *temp=head;

        while(temp!=NULL){
                printf("%d->",temp->data);
                temp=temp->next;
        }
        printf("NULL\n");

        struct node *mimnode=head,*premim=NULL;
        struct node *pre=NULL;

        temp=head;

        while(temp){
                if(temp->data<mimnode->data){
                        mimnode=temp;
                        premim=pre;
                }
                pre=temp;
                temp=temp->next;
        }


        if(mimnode!=NULL)
                premim->next=mimnode->next;
        else
                head=mimnode->next;

        pre->next=mimnode;
        mimnode->next=NULL;


        printf("after\n");

        temp=head;

        while(temp!=NULL){
                printf("%d->",temp->data);
                temp=temp->next;
        }
        printf("NULL\n");

        return 0;
}
```
## 13.. Write a program to remove first node of the list and insert it at the end, without changing info part of any node.
```c
#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node *next;
};

int main(){
        struct node *head=malloc(sizeof(struct node));
        head->data=30;
        head->next=NULL;

        struct node *second=malloc(sizeof(struct node));
        second->data=10;
        second->next=NULL;
        head->next=second;

        struct node *third=malloc(sizeof(struct node));
        third->data=20;
        third->next=NULL;
        second->next=third;

        struct node *temp=head;

        while(temp!=NULL){
                printf("%d->",temp->data);
                temp=temp->next;
        }

        printf("NULL\n");

        struct node *old=head;
        head=head->next;

        temp=head;
        while(temp->next!=NULL){
                temp=temp->next;
        }

        temp->next=old;
        old->next=NULL;

        temp=head;

        while(temp!=NULL){
                printf("%d->",temp->data);
                temp=temp->next;
        }
        printf("NULL\n");

        return 0;
}
```
## 14.Write a program to remove the last node of the list and insert it in the beginning, without changing info part of any node.
```c
#include<stdio.h>
#include<stdlib.h>
struct node {
        int data;
        struct node *next;
};

int main(){
        struct node *head=malloc(sizeof(struct node));
        head->data=10;
        head->next=NULL;

        struct node *second=malloc(sizeof(struct node));
        second->data=20;
        second->next=NULL;
        head->next=second;

        struct node *third=malloc(sizeof(struct node));
        third->data=30;
        third->next=NULL;
        second->next=third;

        struct node *last=malloc(sizeof(struct node));
        last->data=40;
        last->next=NULL;
        third->next=last;

        struct node *temp=head;

        while(temp!=NULL){
                printf("%d->",temp->data);
                temp=temp->next;
        }

        printf("NULL\n");


        struct node *secondlast=head;
        while(secondlast->next->next!=NULL){
        secondlast=secondlast->next;
        }

        struct node *lastnode=secondlast->next;
        secondlast->next=NULL;
        lastnode->next=head;
        head=lastnode;

        temp=head;

        while(temp!=NULL){
                printf("%d->",temp->data);
                temp=temp->next;
        }
        printf("NULL\n");

        return 0;
}
```
## 15.Create a linked list to store employee based on above details.
```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct personal{
        char firstname[10];
        char lastname[10];
        int emplno;
};

struct address{
        char city[10];
        char state[10];
        int streetno;
        int houseno;
};

struct employe{
        struct personal *per;
        struct address *adr;
        struct employe *next;
};

int main(){

        struct employe *head=malloc(sizeof(struct employe));
        head->per=malloc(sizeof(struct personal));
        head->adr=malloc(sizeof(struct address));
        strcpy(head->per->firstname,"shaik");
        strcpy(head->per->lastname,"thohid");
        head->per->emplno=120;

        strcpy(head->adr->city,"nellore");
        strcpy(head->adr->state,"AP");
        head->adr->streetno=10;
        head->adr->houseno=17;
        head->next=NULL;


         struct employe *second=malloc(sizeof(struct employe));
         second->per=malloc(sizeof(struct personal));
         second->adr=malloc(sizeof(struct address));
         strcpy(second->per->firstname,"shaik");
        strcpy(second->per->lastname,"safna");
        second->per->emplno=121;

        strcpy(second->adr->city,"sr nagar");
        strcpy(second->adr->state,"TS");
        second->adr->streetno=29;
        second->adr->houseno=18;
        second->next=NULL;

        head->next=second;

        struct employe *temp=head;

        while(temp!=NULL){
                printf("empno=%d\n",temp->per->emplno);
                printf("Name=%s%s\n",temp->per->firstname,temp->per->lastname);
        printf("Address=%d ,%d ,%s ,%s\n\n",
                        temp->adr->houseno,
                        temp->adr->streetno,
                        temp->adr->city,
                        temp->adr->state);
        temp=temp->next;
        }
        return 0;
}
```
 ## 16. Adding an employee node at the beginning of the linked list .
 ```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct personal{
        char firstname[10];
        char lastname[10];
        int empno;
};

struct address{
        char city[10];
        char state[10];
        int streetno;
        int houseno;
};
struct employe{
        struct personal *ptr;
        struct address *adr;
        struct employe *next;
};

int main(){
        struct employe *head=malloc(sizeof(struct employe));
        head->ptr=malloc(sizeof(struct personal));
        head->adr=malloc(sizeof(struct address));
        strcpy(head->ptr->firstname,"shaik");
        strcpy(head->ptr->lastname,"thohid");
        head->ptr->empno=101;

        strcpy(head->adr->city,"nellore");
        strcpy(head->adr->state,"AP");
        head->adr->streetno=123;
        head->adr->houseno=7;

        head->next=NULL;

         struct employe *second=malloc(sizeof(struct employe));
        second->ptr=malloc(sizeof(struct personal));
        second->adr=malloc(sizeof(struct address));
        strcpy(second->ptr->firstname,"shaik");
        strcpy(second->ptr->lastname,"safna");
        second->ptr->empno=102;

        strcpy(second->adr->city,"madhapur");
        strcpy(second->adr->state,"TS");
        second->adr->streetno=121;
        second->adr->houseno=8;
        head->next=second;


        struct employe *temp=head;

        while(temp!=NULL){
                printf("empno:%d\n",temp->ptr->empno);
                printf("name:%s %s\n",temp->ptr->firstname,temp->ptr->lastname);
                printf("address:%d %d %s %s\n",
                                temp->adr->houseno,
                                temp->adr->streetno,
                                temp->adr->city,
                                temp->adr->state);
        temp=temp->next;
        }


printf("print after adding \n") ;
printf("\n");

        struct employe *new=malloc(sizeof(struct employe));
        new->ptr=malloc(sizeof(struct personal));
        new->adr=malloc(sizeof(struct address));
        strcpy(new->ptr->firstname,"upati");
        strcpy(new->ptr->lastname,"rajesh");
        new->ptr->empno=100;

        strcpy(new->adr->city,"crompet");
        strcpy(new->adr->state,"TN");
        new->adr->streetno=120;
        new->adr->houseno=5;

        new->next=head;
        head=new;

        temp=head;

        while(temp!=NULL){
                 printf("empno:%d\n",temp->ptr->empno);
                printf("name:%s %s\n",temp->ptr->firstname,temp->ptr->lastname);
                printf("address:%d %d %s %s\n",
                                temp->adr->houseno,
                                temp->adr->streetno,
                                temp->adr->city,
                                temp->adr->state);
                temp=temp->next;
        }
        return 0;
}
```
## 17. Adding an employee node at the end of the linked list.
```c
#include<stdlib.h>
#include<string.h>
struct personal{
        char firstname[10];
        char lastname[10];
        int empno;
};

struct address{
        char city[10];
        char state[10];
        int streetno;
        int houseno;
};
struct employe{
        struct personal *ptr;
        struct address *adr;
        struct employe *next;
};

int main(){
        struct employe *head=malloc(sizeof(struct employe));
        head->ptr=malloc(sizeof(struct personal));
        head->adr=malloc(sizeof(struct address));
        strcpy(head->ptr->firstname,"shaik");
        strcpy(head->ptr->lastname,"thohid");
        head->ptr->empno=101;

        strcpy(head->adr->city,"nellore");
        strcpy(head->adr->state,"AP");
        head->adr->streetno=123;
        head->adr->houseno=7;

        head->next=NULL;

         struct employe *second=malloc(sizeof(struct employe));
        second->ptr=malloc(sizeof(struct personal));
        second->adr=malloc(sizeof(struct address));
        strcpy(second->ptr->firstname,"shaik");
        strcpy(second->ptr->lastname,"safna");
        second->ptr->empno=102;

        strcpy(second->adr->city,"madhapur");
        strcpy(second->adr->state,"TS");
        second->adr->streetno=121;
        second->adr->houseno=8;
        head->next=second;


        struct employe *temp=head;

        while(temp!=NULL){
                printf("empno:%d\n",temp->ptr->empno);
                printf("name:%s %s\n",temp->ptr->firstname,temp->ptr->lastname);
                printf("address:%d %d %s %s\n",
                                temp->adr->houseno,
                                temp->adr->streetno,
                                temp->adr->city,
                                temp->adr->state);
        temp=temp->next;
        }


printf("print after adding \n") ;
printf("\n");

        struct employe *new=malloc(sizeof(struct employe));
        new->ptr=malloc(sizeof(struct personal));
        new->adr=malloc(sizeof(struct address));
        strcpy(new->ptr->firstname,"upati");
        strcpy(new->ptr->lastname,"rajesh");
        new->ptr->empno=100;

        strcpy(new->adr->city,"crompet");
        strcpy(new->adr->state,"TN");
        new->adr->streetno=120;
        new->adr->houseno=5;

        new->next=NULL;

        temp=head;

        while(temp->next!=NULL){
                temp=temp->next;
        }
        temp->next=new;

        temp=head;

        while(temp!=NULL){
                 printf("empno:%d\n",temp->ptr->empno);
                printf("name:%s %s\n",temp->ptr->firstname,temp->ptr->lastname);
                printf("address:%d %d %s %s\n",
                                temp->adr->houseno,
                                temp->adr->streetno,
                                temp->adr->city,
                                temp->adr->state);
                temp=temp->next;
        }
        return 0;
}
```
## 18. Adding an employee node at the position of the linked list.
```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct personal{
        char firstname[10];
        char lastname[10];
        int empno;
};

struct address{
        char city[10];
        char state[10];
        int streetno;
        int houseno;
};
struct employe{
        struct personal *ptr;
        struct address *adr;
        struct employe *next;
};

int main(){
        struct employe *head=malloc(sizeof(struct employe));
        head->ptr=malloc(sizeof(struct personal));
        head->adr=malloc(sizeof(struct address));
        strcpy(head->ptr->firstname,"shaik");
        strcpy(head->ptr->lastname,"thohid");
        head->ptr->empno=101;

        strcpy(head->adr->city,"nellore");
        strcpy(head->adr->state,"AP");
        head->adr->streetno=123;
        head->adr->houseno=7;

        head->next=NULL;

         struct employe *second=malloc(sizeof(struct employe));
        second->ptr=malloc(sizeof(struct personal));
        second->adr=malloc(sizeof(struct address));
        strcpy(second->ptr->firstname,"shaik");
        strcpy(second->ptr->lastname,"safna");
        second->ptr->empno=102;

        strcpy(second->adr->city,"madhapur");
        strcpy(second->adr->state,"TS");
        second->adr->streetno=121;
        second->adr->houseno=8;
        head->next=second;


        struct employe *temp=head;

        while(temp!=NULL){
                printf("empno:%d\n",temp->ptr->empno);
                printf("name:%s %s\n",temp->ptr->firstname,temp->ptr->lastname);
                printf("address:%d %d %s %s\n",
                                temp->adr->houseno,
                                temp->adr->streetno,
                                temp->adr->city,
                                temp->adr->state);
        temp=temp->next;
        }


printf("print after adding \n") ;
printf("\n");

        struct employe *new=malloc(sizeof(struct employe));
        new->ptr=malloc(sizeof(struct personal));
        new->adr=malloc(sizeof(struct address));
        strcpy(new->ptr->firstname,"upati");
        strcpy(new->ptr->lastname,"rajesh");
        new->ptr->empno=100;

        strcpy(new->adr->city,"crompet");
        strcpy(new->adr->state,"TN");
        new->adr->streetno=120;
        new->adr->houseno=5;

        new->next=NULL;

        temp=head;
        int i=1,pos;
        scanf("%d",&pos);

        if(pos==1){
                new->next=head;
                head=new;
        } else {
                temp=head;
                while(i<pos-1&& temp!=NULL){
                        temp=temp->next;
                i++;
        }


        new->next=temp->next;
        temp->next=new;
        }
        temp=head;

        while(temp!=NULL){
                 printf("empno:%d\n",temp->ptr->empno);
                printf("name:%s %s\n",temp->ptr->firstname,temp->ptr->lastname);
                printf("address:%d %d %s %s\n",
                                temp->adr->houseno,
                                temp->adr->streetno,
                                temp->adr->city,
                                temp->adr->state);
                temp=temp->next;
        }
        return 0;
}
```
 ## 19.Delete an employee node at the beginning of the Linked list.
 ```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct personal{
        char firstname[10];
        char lastname[10];
        int emplno;
};

struct address{
        char city[10];
        char state[10];
        int streetno;
        int houseno;
};

struct employe{
        struct personal *per;
        struct address *adr;
        struct employe *next;
};

int main(){

        struct employe *head=malloc(sizeof(struct employe));
        head->per=malloc(sizeof(struct personal));
        head->adr=malloc(sizeof(struct address));
        strcpy(head->per->firstname,"shaik");
        strcpy(head->per->lastname,"thohid");
        head->per->emplno=120;

        strcpy(head->adr->city,"nellore");
        strcpy(head->adr->state,"AP");
        head->adr->streetno=10;
        head->adr->houseno=17;
        head->next=NULL;


         struct employe *second=malloc(sizeof(struct employe));
         second->per=malloc(sizeof(struct personal));
         second->adr=malloc(sizeof(struct address));
         strcpy(second->per->firstname,"shaik");
        strcpy(second->per->lastname,"safna");
        second->per->emplno=121;

        strcpy(second->adr->city,"sr nagar");
        strcpy(second->adr->state,"TS");
        second->adr->streetno=29;
        second->adr->houseno=18;
        second->next=NULL;

        head->next=second;

        struct employe *third=malloc(sizeof(struct employe));
         third->per=malloc(sizeof(struct personal));
         third->adr=malloc(sizeof(struct address));
         strcpy(third->per->firstname,"upati");
        strcpy(third->per->lastname,"rajesh");
        third->per->emplno=121;

        strcpy(third->adr->city,"crompet");
        strcpy(third->adr->state,"TN");
        third->adr->streetno=18;
        third->adr->houseno=29;
        third->next=NULL;
        second->next=third;

       struct employe *temp=head;

          while(temp!=NULL){
        printf("empno:%d\n",temp->per->emplno);
        printf("name:%s %s\n",temp->per->firstname,temp->per->lastname);
        printf("address:%d , %d,%s,%s\n",
                        temp->adr->houseno,
                        temp->adr->streetno,
                        temp->adr->city,
                        temp->adr->state);
        temp=temp->next;
}

printf("\n");
printf("after deleting\n");

temp=head;

temp=temp->next;


while(temp!=NULL){
        printf("empno:%d\n",temp->per->emplno);
        printf("name:%s %s\n",temp->per->firstname,temp->per->lastname);
        printf("address:%d , %d,%s,%s\n",
                        temp->adr->houseno,
                        temp->adr->streetno,
                        temp->adr->city,
                        temp->adr->state);
        temp=temp->next;
}
return 0;
}
```
 ## 20. Delete an employee node at the end of the Linked list.
 ```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct personal{
        char firstname[10];
        char lastname[10];
        int emplno;
};

struct address{
        char city[10];
        char state[10];
        int streetno;
        int houseno;
};

struct employe{
        struct personal *per;
        struct address *adr;
        struct employe *next;
};

int main(){

        struct employe *head=malloc(sizeof(struct employe));
        head->per=malloc(sizeof(struct personal));
        head->adr=malloc(sizeof(struct address));
        strcpy(head->per->firstname,"shaik");
        strcpy(head->per->lastname,"thohid");
        head->per->emplno=120;

        strcpy(head->adr->city,"nellore");
        strcpy(head->adr->state,"AP");
        head->adr->streetno=10;
        head->adr->houseno=17;
        head->next=NULL;


         struct employe *second=malloc(sizeof(struct employe));
         second->per=malloc(sizeof(struct personal));
         second->adr=malloc(sizeof(struct address));
         strcpy(second->per->firstname,"shaik");
         strcpy(second->per->lastname,"safna");
         second->per->emplno=121;

        strcpy(second->adr->city,"sr nagar");
        strcpy(second->adr->state,"TS");
        second->adr->streetno=29;
        second->adr->houseno=18;
        second->next=NULL;

        head->next=second;

        struct employe *third=malloc(sizeof(struct employe));
         third->per=malloc(sizeof(struct personal));
         third->adr=malloc(sizeof(struct address));
         strcpy(third->per->firstname,"upati");
        strcpy(third->per->lastname,"rajesh");
        third->per->emplno=121;

        strcpy(third->adr->city,"crompet");
        strcpy(third->adr->state,"TN");
        third->adr->streetno=18;
        third->adr->houseno=29;
        third->next=NULL;
         second->next=third;

struct employe *temp=head;

while(temp!=NULL){
        printf("empno:%d\n",temp->per->emplno);
        printf("name:%s %s\n",temp->per->firstname,temp->per->lastname);
        printf("address:%d , %d,%s,%s\n",
                        temp->adr->houseno,
                        temp->adr->streetno,
                        temp->adr->city,
                        temp->adr->state);
        temp=temp->next;
}

printf("\n");
printf("after deleting\n");

struct employe *prenode;
temp=head;
while(temp->next!=NULL){
        prenode=temp;
        temp=temp->next;
}
prenode->next=NULL;
temp=head;
while(temp!=NULL){
        printf("empno:%d\n",temp->per->emplno);
        printf("name:%s %s\n",temp->per->firstname,temp->per->lastname);
        printf("address:%d , %d,%s,%s\n",
                        temp->adr->houseno,
                        temp->adr->streetno,
                        temp->adr->city,
                        temp->adr->state);
        temp=temp->next;
}
return 0;
}
```
## 21.Delete an employee node at the position of the Linked list.
```c
include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct personal{
        char firstname[10];
        char lastname[10];
        int emplno;
};

struct address{
        char city[10];
        char state[10];
        int streetno;
        int houseno;
};

struct employe{
        struct personal *per;
        struct address *adr;
        struct employe *next;
};

int main(){

        struct employe *head=malloc(sizeof(struct employe));
        head->per=malloc(sizeof(struct personal));
        head->adr=malloc(sizeof(struct address));
        strcpy(head->per->firstname,"shaik");
        strcpy(head->per->lastname,"thohid");
        head->per->emplno=120;

        strcpy(head->adr->city,"nellore");
        strcpy(head->adr->state,"AP");
        head->adr->streetno=10;
        head->adr->houseno=17;
        head->next=NULL;


         struct employe *second=malloc(sizeof(struct employe));
         second->per=malloc(sizeof(struct personal));
         second->adr=malloc(sizeof(struct address));
         strcpy(second->per->firstname,"shaik");
        strcpy(second->per->lastname,"safna");
        second->per->emplno=121;

        strcpy(second->adr->city,"sr nagar");
        strcpy(second->adr->state,"TS");
        second->adr->streetno=29;
        second->adr->houseno=18;
        second->next=NULL;

        head->next=second;

        struct employe *third=malloc(sizeof(struct employe));
         third->per=malloc(sizeof(struct personal));
         third->adr=malloc(sizeof(struct address));
         strcpy(third->per->firstname,"upati");
        strcpy(third->per->lastname,"rajesh");
        third->per->emplno=121;

        strcpy(third->adr->city,"crompet");
        strcpy(third->adr->state,"TN");
        third->adr->streetno=18;
third->adr->houseno=29;
third->next=NULL;
second->next=third;

struct employe *temp=head;

while(temp!=NULL){
        printf("empno:%d\n",temp->per->emplno);
        printf("name:%s %s\n",temp->per->firstname,temp->per->lastname);
        printf("address:%d , %d,%s,%s\n",
                        temp->adr->houseno,
                        temp->adr->streetno,
                        temp->adr->city,
                        temp->adr->state);
        temp=temp->next;
}

printf("\n");
printf("after deleting\n");
temp=head;
struct employe *prev=NULL;
int i=1,pos;
scanf("%d",&pos);

if(pos==1){
        head=head->next;
} else {
        temp=head;
        while(i<pos){
                prev=temp;
                temp=temp->next;
                i++;
        }

        prev->next=temp->next;
free(temp);
}



temp=head;
while(temp!=NULL){
        printf("empno:%d\n",temp->per->emplno);
        printf("name:%s %s\n",temp->per->firstname,temp->per->lastname);
        printf("address:%d , %d,%s,%s\n",
                        temp->adr->houseno,
                        temp->adr->streetno,
                        temp->adr->city,
                        temp->adr->state);
        temp=temp->next;
}
return 0;
}
```
## 22.Search an employee node in the linked list.
```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct personal{
        char firstname[10];
        char lastname[10];
        int emplno;
};
struct employe {
        struct personal *per;
        struct employe *next;
};
int main(){
        struct employe *head=malloc(sizeof(struct employe));
        head->per=malloc(sizeof(struct personal));
        strcpy(head->per->firstname,"shaik");
        strcpy(head->per->lastname,"thohid");
        head->per->emplno=120;


         struct employe *second=malloc(sizeof(struct employe));
         second->per=malloc(sizeof(struct personal));
         strcpy(second->per->firstname,"shaik");
        strcpy(second->per->lastname,"safna");
        second->per->emplno=121;

        head->next=second;

        struct employe *third=malloc(sizeof(struct employe));
         third->per=malloc(sizeof(struct personal));

         strcpy(third->per->firstname,"upati");
        strcpy(third->per->lastname,"rajesh");
        third->per->emplno=122;
      third->next=NULL;
       second->next=third;




int emp,found=0;
scanf("%d",&emp);
 struct employe *temp=head;
while(temp!=NULL){
 if(temp->per->emplno==emp){
        printf("name:%s %s\n",temp->per->firstname,temp->per->lastname);
        found=1;
        break;
 }
 temp=temp->next;
}

if(found==0){
        printf("employe not found\n");
}
return 0;
}
```
## 23.Sort an employee node by first name.
```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct personal{
        char firstname[10];
        char lastname[10];
        int emplno;
};

struct address{
        char city[10];
        char state[10];
        int streetno;
        int houseno;
};

struct employe{
        struct personal *per;
        struct address *adr;
        struct employe *next;
};

int main(){

        struct employe *head=malloc(sizeof(struct employe));
        head->per=malloc(sizeof(struct personal));
        head->adr=malloc(sizeof(struct address));
        strcpy(head->per->firstname,"shaik");
        strcpy(head->per->lastname,"thohid");
        head->per->emplno=120;

        strcpy(head->adr->city,"nellore");
        strcpy(head->adr->state,"AP");
        head->adr->streetno=10;
        head->adr->houseno=17;
        head->next=NULL;


         struct employe *second=malloc(sizeof(struct employe));
         second->per=malloc(sizeof(struct personal));
         second->adr=malloc(sizeof(struct address));
         strcpy(second->per->firstname,"shaik");
        strcpy(second->per->lastname,"safna");
        second->per->emplno=121;

        strcpy(second->adr->city,"sr nagar");
        strcpy(second->adr->state,"TS");
        second->adr->streetno=29;
        second->adr->houseno=18;
        second->next=NULL;

        head->next=second;

        struct employe *third=malloc(sizeof(struct employe));
         third->per=malloc(sizeof(struct personal));
         third->adr=malloc(sizeof(struct address));
         strcpy(third->per->firstname,"upati");
        strcpy(third->per->lastname,"rajesh");
        third->per->emplno=121;

        strcpy(third->adr->city,"crompet");
        strcpy(third->adr->state,"TN");
        third->adr->streetno=18;
        third->adr->houseno=29;
        third->next=NULL;
        second->next=third;

       struct employe *temp=head;

          while(temp!=NULL){
        printf("empno:%d\n",temp->per->emplno);
        printf("name:%s %s\n",temp->per->firstname,temp->per->lastname);
        printf("address:%d , %d,%s,%s\n",
                        temp->adr->houseno,
                        temp->adr->streetno,
                        temp->adr->city,
                        temp->adr->state);
        temp=temp->next;
}


struct employe *i,*j;
for(i=head;i!=NULL;i=i->next){
        for(j=i->next;j!=NULL;j=j->next){
                if(strcmp(i->per->firstname,j->per->firstname)>0){

                        struct personal tp=*(i->per);
                        *(i->per)=*(j->per);
                        *(j->per)=tp;

                        struct address ta=*(i->adr);
                        *(i->adr)=*(j->adr);
                        *(j->adr)=ta;
                }
        }
}

printf("after swaping\n");
printf("\n");

temp=head;
while(temp!=NULL){
        printf("empno:%d\n",temp->per->emplno);
        printf("name:%s %s\n",temp->per->firstname,temp->per->lastname);
        printf("address:%d %d %s %s\n",
                        temp->adr->streetno,
                        temp->adr->houseno,
                        temp->adr->city,
                        temp->adr->state);
        temp=temp->next;
}
}
```
## 24.Sort an employee node by last name done pending.
```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct personal{
        char firstname[10];
        char lastname[10];
        int emplno;
};

struct address{
        char city[10];
        char state[10];
        int streetno;
        int houseno;
};

struct employe{
        struct personal *per;
        struct address *adr;
        struct employe *next;
};

int main(){

        struct employe *head=malloc(sizeof(struct employe));
        head->per=malloc(sizeof(struct personal));
        head->adr=malloc(sizeof(struct address));
        strcpy(head->per->firstname,"shaik");
        strcpy(head->per->lastname,"thohid");
        head->per->emplno=120;

        strcpy(head->adr->city,"nellore");
        strcpy(head->adr->state,"AP");
        head->adr->streetno=10;
        head->adr->houseno=17;
        head->next=NULL;


         struct employe *second=malloc(sizeof(struct employe));
         second->per=malloc(sizeof(struct personal));
         second->adr=malloc(sizeof(struct address));
         strcpy(second->per->firstname,"shaik");
        strcpy(second->per->lastname,"safna");
        second->per->emplno=121;

        strcpy(second->adr->city,"sr nagar");
        strcpy(second->adr->state,"TS");
        second->adr->streetno=29;
        second->adr->houseno=18;
        second->next=NULL;

        head->next=second;

        struct employe *third=malloc(sizeof(struct employe));
         third->per=malloc(sizeof(struct personal));
         third->adr=malloc(sizeof(struct address));
         strcpy(third->per->firstname,"upati");
        strcpy(third->per->lastname,"rajesh");
        third->per->emplno=121;

        strcpy(third->adr->city,"crompet");
        strcpy(third->adr->state,"TN");
        third->adr->streetno=18;
        third->adr->houseno=29;
        third->next=NULL;
        second->next=third;

       struct employe *temp=head;

          while(temp!=NULL){
        printf("empno:%d\n",temp->per->emplno);
        printf("name:%s %s\n",temp->per->firstname,temp->per->lastname);
        printf("address:%d , %d,%s,%s\n",
                        temp->adr->houseno,
                        temp->adr->streetno,
                        temp->adr->city,
                        temp->adr->state);
        temp=temp->next;
}


struct employe *i,*j;
for(i=head;i!=NULL;i=i->next){
        for(j=i->next;j!=NULL;j=j->next){
                if(strcmp(i->per->lastname,j->per->lastname)>0){

                        struct personal tp=*(i->per);
                        *(i->per)=*(j->per);
                        *(j->per)=tp;

                        struct address ta=*(i->adr);
                        *(i->adr)=*(j->adr);
                        *(j->adr)=ta;
                }
        }
}

printf("after swaping\n");
printf("\n");

temp=head;
while(temp!=NULL){
        printf("empno:%d\n",temp->per->emplno);
        printf("name:%s %s\n",temp->per->firstname,temp->per->lastname);
        printf("address:%d %d %s %s\n",
                        temp->adr->streetno,
                        temp->adr->houseno,
                        temp->adr->city,
                        temp->adr->state);
        temp=temp->next;
}
}
```
## 25.Sort an employee node by state.
```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct personal{
        char firstname[10];
        char lastname[10];
        int emplno;
};

struct address{
        char city[10];
        char state[10];
        int streetno;
        int houseno;
};

struct employe{
        struct personal *per;
        struct address *adr;
        struct employe *next;
};

int main(){

        struct employe *head=malloc(sizeof(struct employe));
        head->per=malloc(sizeof(struct personal));
        head->adr=malloc(sizeof(struct address));
        strcpy(head->per->firstname,"shaik");
        strcpy(head->per->lastname,"thohid");
        head->per->emplno=120;

        strcpy(head->adr->city,"nellore");
        strcpy(head->adr->state,"MP");
        head->adr->streetno=10;
        head->adr->houseno=17;
        head->next=NULL;


         struct employe *second=malloc(sizeof(struct employe));
         second->per=malloc(sizeof(struct personal));
         second->adr=malloc(sizeof(struct address));
         strcpy(second->per->firstname,"shaik");
        strcpy(second->per->lastname,"safna");
        second->per->emplno=121;

        strcpy(second->adr->city,"sr nagar");
        strcpy(second->adr->state,"TS");
        second->adr->streetno=29;
        second->adr->houseno=18;
        second->next=NULL;

        head->next=second;

        struct employe *third=malloc(sizeof(struct employe));
         third->per=malloc(sizeof(struct personal));
         third->adr=malloc(sizeof(struct address));
         strcpy(third->per->firstname,"upati");
        strcpy(third->per->lastname,"rajesh");
        third->per->emplno=121;

        strcpy(third->adr->city,"crompet");
        strcpy(third->adr->state,"BR");
        third->adr->streetno=18;
        third->adr->houseno=29;
        third->next=NULL;
        second->next=third;

       struct employe *temp=head;

          while(temp!=NULL){
        printf("empno:%d\n",temp->per->emplno);
        printf("name:%s %s\n",temp->per->firstname,temp->per->lastname);
        printf("address:%d , %d,%s,%s\n",
                        temp->adr->houseno,
                        temp->adr->streetno,
                        temp->adr->city,
                        temp->adr->state);
        temp=temp->next;
}


struct employe *i,*j;
for(i=head;i!=NULL;i=i->next){
        for(j=i->next;j!=NULL;j=j->next){
                if(strcmp(i->adr->state,j->adr->state)>0){

                        struct personal tp=*(i->per);
                        *(i->per)=*(j->per);
                        *(j->per)=tp;

                        struct address ta=*(i->adr);
                        *(i->adr)=*(j->adr);
                        *(j->adr)=ta;
                }
        }
}

printf("after swaping\n");
printf("\n");

temp=head;
while(temp!=NULL){
        printf("empno:%d\n",temp->per->emplno);
        printf("name:%s %s\n",temp->per->firstname,temp->per->lastname);
        printf("address:%d %d %s %s\n",
                        temp->adr->streetno,
                        temp->adr->houseno,
                        temp->adr->city,
                        temp->adr->state);
        temp=temp->next;
 }
}
```
## 26.Sort an employee node by employee number .
```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct personal{
        char firstname[10];
        char lastname[10];
        int emplno;
};

struct address{
        char city[10];
        char state[10];
        int streetno;
        int houseno;
};

struct employe{
        struct personal *per;
        struct address *adr;
        struct employe *next;
};

int main(){

        struct employe *head=malloc(sizeof(struct employe));
        head->per=malloc(sizeof(struct personal));
        head->adr=malloc(sizeof(struct address));
        strcpy(head->per->firstname,"shaik");
        strcpy(head->per->lastname,"thohid");
        head->per->emplno=12;

        strcpy(head->adr->city,"nellore");
        strcpy(head->adr->state,"MP");
        head->adr->streetno=10;
        head->adr->houseno=17;
        head->next=NULL;


         struct employe *second=malloc(sizeof(struct employe));
         second->per=malloc(sizeof(struct personal));
         second->adr=malloc(sizeof(struct address));
         strcpy(second->per->firstname,"shaik");
        strcpy(second->per->lastname,"safna");
        second->per->emplno=71;

        strcpy(second->adr->city,"sr nagar");
        strcpy(second->adr->state,"TS");
        second->adr->streetno=29;
        second->adr->houseno=18;
        second->next=NULL;

        head->next=second;

        struct employe *third=malloc(sizeof(struct employe));
         third->per=malloc(sizeof(struct personal));
         third->adr=malloc(sizeof(struct address));
         strcpy(third->per->firstname,"upati");
        strcpy(third->per->lastname,"rajesh");
        third->per->emplno=21;

        strcpy(third->adr->city,"crompet");
        strcpy(third->adr->state,"BR");
        third->adr->streetno=18;
        third->adr->houseno=29;
        third->next=NULL;
        second->next=third;

       struct employe *temp=head;

          while(temp!=NULL){
        printf("empno:%d\n",temp->per->emplno);
        printf("name:%s %s\n",temp->per->firstname,temp->per->lastname);
        printf("address:%d , %d,%s,%s\n",
                        temp->adr->houseno,
                        temp->adr->streetno,
                        temp->adr->city,
                        temp->adr->state);
        temp=temp->next;
}


struct employe *i,*j;
for(i=head;i!=NULL;i=i->next){
        for(j=i->next;j!=NULL;j=j->next){
                if(i->per->emplno>j->per->emplno){

                        struct personal tp=*(i->per);
                        *(i->per)=*(j->per);
                        *(j->per)=tp;

                        struct address ta=*(i->adr);
                        *(i->adr)=*(j->adr);
                        *(j->adr)=ta;
                }
        }
}

printf("after swaping\n");
printf("\n");

temp=head;
while(temp!=NULL){
        printf("empno:%d\n",temp->per->emplno);
        printf("name:%s %s\n",temp->per->firstname,temp->per->lastname);
        printf("address:%d %d %s %s\n",
                        temp->adr->streetno,
                        temp->adr->houseno,
                        temp->adr->city,
                        temp->adr->state);
        temp=temp->next;
}
}
```
## 27.Sort an employee node by city done pending .
```c
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct personal{
        char firstname[10];
        char lastname[10];
        int emplno;
};

struct address{
        char city[10];
        char state[10];
        int streetno;
        int houseno;
};

struct employe{
        struct personal *per;
        struct address *adr;
        struct employe *next;
};

int main(){

        struct employe *head=malloc(sizeof(struct employe));
        head->per=malloc(sizeof(struct personal));
        head->adr=malloc(sizeof(struct address));
        strcpy(head->per->firstname,"shaik");
        strcpy(head->per->lastname,"thohid");
        head->per->emplno=12;

        strcpy(head->adr->city,"nellore");
        strcpy(head->adr->state,"MP");
        head->adr->streetno=10;
        head->adr->houseno=17;
        head->next=NULL;


         struct employe *second=malloc(sizeof(struct employe));
         second->per=malloc(sizeof(struct personal));
         second->adr=malloc(sizeof(struct address));
         strcpy(second->per->firstname,"shaik");
        strcpy(second->per->lastname,"safna");
        second->per->emplno=71;

        strcpy(second->adr->city,"sr nagar");
        strcpy(second->adr->state,"TS");
        second->adr->streetno=29;
        second->adr->houseno=18;
        second->next=NULL;

        head->next=second;

        struct employe *third=malloc(sizeof(struct employe));
         third->per=malloc(sizeof(struct personal));
         third->adr=malloc(sizeof(struct address));
         strcpy(third->per->firstname,"upati");
        strcpy(third->per->lastname,"rajesh");
        third->per->emplno=21;

        strcpy(third->adr->city,"crompet");
        strcpy(third->adr->state,"BR");
        third->adr->streetno=18;
        third->adr->houseno=29;
        third->next=NULL;
        second->next=third;

       struct employe *temp=head;

          while(temp!=NULL){
        printf("empno:%d\n",temp->per->emplno);
        printf("name:%s %s\n",temp->per->firstname,temp->per->lastname);
        printf("address:%d , %d,%s,%s\n",
                        temp->adr->houseno,
                        temp->adr->streetno,
                        temp->adr->city,
                        temp->adr->state);
        temp=temp->next;
}


struct employe *i,*j;
for(i=head;i!=NULL;i=i->next){
        for(j=i->next;j!=NULL;j=j->next){
                if(strcmp(i->adr->city,j->adr->city)>0){

                        struct personal tp=*(i->per);
                        *(i->per)=*(j->per);
                        *(j->per)=tp;

                        struct address ta=*(i->adr);
                        *(i->adr)=*(j->adr);
                        *(j->adr)=ta;
                }
        }
}

printf("after swaping\n");
printf("\n");

temp=head;
while(temp!=NULL){
        printf("empno:%d\n",temp->per->emplno);
        printf("name:%s %s\n",temp->per->firstname,temp->per->lastname);
        printf("address:%d %d %s %s\n",
                        temp->adr->streetno,
                        temp->adr->houseno,
                        temp->adr->city,
                        temp->adr->state);
        temp=temp->next;
}
}
## 28. Delete an employee node by first name 
## 29. Delete an employee node by last name 
## 30. Delete an employee node by stat 
 
