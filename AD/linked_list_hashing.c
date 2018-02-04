#include<stdio.h>
struct node{
    int info;
    struct node *next;
};
struct node* insert_beg(struct node* start,int x)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->info = x;
    n->next = start;
    start = n;
    return start;
}
int search_LL(struct node *start,int x)
{
    int flag = -1;
    struct node *p = start;
    while(p!=NULL)
    {
        if(p->info == x)
        {
            flag = 1;
            break;
        }
        p = p->next;
    }
    return flag;

}
int h(int x,int p)
{
    return x % p;
}
int main()
{
    int p,i,n,x,k;
    printf("Enter the modulo value >> ");
    scanf("%d",&p);
    struct node *start[p],*temp;
    for(i = 0;i < p;i++)
    {
        start[i] = NULL;
    }
    printf("Enter the number of elements >> ");
    scanf("%d",&n);
    printf("Enter the elements >>\n");
    for(i = 0;i < n;i++)
    {
        scanf("%d",&x);
        k = h(x,p);
        start[k] = insert_beg(start[k],x);
    }
    printf("The elements are >>\n");
    for(i = 0;i < p;i++)
    {
        temp = start[i];
        while(temp != NULL)
        {
            printf("%d  ",temp->info);
            temp = temp->next;
        }
        printf("\n");
    }
    printf("Enter the element to be searched >> ");
    scanf("%d",&x);
    if(search_LL(start[h(x,p)],x) != -1)
    {
        printf("Element found.\n");
    }
    else
        printf("Element not found.\n");

}
