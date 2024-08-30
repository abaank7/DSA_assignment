#include<stdio.h>
#include<stdlib.h>
struct node{
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

        if(head == NULL)
        {
            head = temp;
            tail = temp;
            tail->next=head;
        }
        else
        {
            tail->next = temp;
            tail=temp;
            tail->next=head;
        }
        
    }
    
}
void view(){
    struct node *trav;
    trav=head;
    while(1){
        printf("%d",trav->data);
        if(trav->next==head)
        break;
        trav=trav->next;
    }

}
int len(){
    int c=0;
    struct node *p;
    p=head;
    while(p->next!=head){
        c++;
        p=p->next;
    }
    return ++c;
}
void addnode(){
    struct node *temp,*p;
    int loc,leng,i=1;
    printf("enter location");
    scanf("%d",&loc);
    leng=len();
    if(loc>leng){
        printf("invalid");
    }
    else{
        p=head;
        while(i<loc){
            p=p->next;
            i++;
        }
        temp=(struct node*)malloc(sizeof(struct node));
        printf("enter data");
        scanf("%d",&temp->data);
        temp->next=NULL;
        temp->next=p->next;
        p->next=temp;
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
    len();
    if(n==4)
    addnode();
    
    }
    
}