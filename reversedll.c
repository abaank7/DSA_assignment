#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev; 
    int data;
    struct node *next;

};
struct node *head=NULL,*tail=NULL;
void create_ll()
{
    int n;
    printf("Enter number of nodes");
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++)
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
            tail->next = temp;
            
            temp->prev=tail;
            tail=temp;
        }
        
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

void reverse(){
    struct node *q,*p;
    
        p=head;
        while(p!=NULL){
            q=p->next;
            p->next=p->prev;
            p->prev=q;
            p=q;
        }
       p=head;
       head=tail;
       tail=p;
        
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
    reverse();
    
       
   
   }
    
}