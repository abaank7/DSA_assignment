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
    if(trav==NULL)
        printf("nodes deleted");
    
    else{
    trav=head;
    while(trav!=NULL){

printf("%d",trav->data);
trav=trav->next;
}
}
}


void delhead(){
   
    struct node *trav;   
    trav=head;
    head=head->next;
    if(head!=NULL){
        trav->next->prev=NULL;
        free(trav);
    }
    
}
void deltail(){
    
     
     struct node *trav;  
    trav=head;
    
    while(trav->next->next!=NULL){
        trav=trav->next;
    }
    free(trav->next);
    trav->next=NULL;
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
    delhead();
   if(n==4)
   deltail();
   
       
   
   }
    
}