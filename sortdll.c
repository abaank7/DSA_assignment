#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev; 
    int data;
    struct node *next;

};
struct node *head=NULL,*tail=NULL,*p;

void create_ll()
{
    int num=1;
    
    while(num)
    {
        struct node *temp;
        temp = (struct node*)malloc(sizeof(struct node));
        temp->next=NULL;
        printf("enter the data");
        scanf("%d",&temp->data);
        temp->prev=temp->next=NULL;

        if(head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            p=head;
            while(p->next!=NULL){
            p=p->next;
            }
            p->next=temp;
            
        }
        printf("enter 1 for new node & 0 for no node");
        scanf("%d",&num);
    }
    
}
void view(){
    struct node *trav;
    
    trav=head;
    while(trav!=NULL){

printf("%d",trav->data);
trav=trav->next;
}

}
void sort(){
    struct node *i,*j;
    int num;
    for(i=head;i->next!=NULL;i=i->next){
        for(j=i->next;j!=NULL;j=j->next)
        {
        if(i->data>j->data){
        num=j->data;
        j->data=i->data;
        i->data=num;
    }
    }
    
}

}
int main(){
    int n;
   
    while(1){
         printf("enter choice");
    scanf("%d",&n);
    if(n==1)
    create_ll();
    if(n==2)
    view();
    if(n==3)
   sort();
       
   
   }
    
}