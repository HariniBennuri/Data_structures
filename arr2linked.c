#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*temp=NULL,*head=NULL;
int main()
{
    int a[15],n,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        struct node* new=(struct node*)malloc(sizeof(struct node));
        new->data=a[i];
        new->next=NULL;
        if(head==NULL)
        {
            head=new;
            temp=new;
        }
        else
        {
            temp->next=new;
            temp=new;
        }
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%3d\n",temp->data);
        temp=temp->next;
    }
    return 0;
}