# include <stdio.h>
# include <stdlib.h>
#include<math.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head= NULL, *tail = NULL;
void create_ll(struct node *temp)
{
    int n;
    printf("Enter number of nodes");
    scanf("%d",&n);
    
    for(int i = 0; i < n; i++)
    {
        temp = (struct node*)malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&temp->data);

        if(head == NULL)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        temp->next = NULL;
    }
    
}
void view_ll(struct node *temp)
{
    struct node* trav = head;
    while(trav!=NULL)
    {
        printf("%d\n",trav->data);
        trav = trav->next;
    }
}
double avgofElements(struct node *temp)
{
    int size = 0;
    struct node *p = head;
    double sum = 0.0;
    while(p!=NULL)
    {
        sum+=p->data;
        size++;
        p = p->next;
    }
    double avg = sum/size;
    return avg;
    
}
void varandSd(struct node *temp)
{
    int sum = 0, size = 0;
    struct node *p = head;
    double mean = avgofElements(temp);
    double variance = 0.0;
    while(p!=NULL)
    {
        variance = variance + pow((p->data - mean),2);
        size++;
        p = p->next;
    }
    variance = variance/size;
    printf("Variance=%lf",variance);
    printf("Standard Deviation =%lf",sqrt(variance));
}   
int main()
{
    struct node *temp;
    create_ll(temp);
    view_ll(temp);
    
    varandSd(temp);
   
}
