#include<stdio.h>
struct node
{
    int info;
    struct node * next;
};
struct node * start = NULL;
int main(void)
{
    int t,i;
    scanf("%d",&t);
    int max = 0,x[t],y[t];
    for(i = 0; i < t ; i++)
    {
        scanf("%d%d",&x[i],&y[i]);

        if(max < y[i]);
            max =y[i];
    }
    printf("max = %d\n",max);
    struct node *p,*n,*q;
    p = (struct node *)malloc(sizeof(struct node));
    p->info = 2;
    p->next = NULL;
    start = p;

    int j = 0,flag;
    for(i= 2;i <= max; i++)
    {
        flag = 1;
        q = start;
        while( q!= NULL)
        {
            if(i % q->info == 0)
            {
                flag = 0;
                break;
            }
            q = q->next;
        }
        if(flag == 1)
        {
            n = (struct node *)malloc(sizeof(struct node));
            n->info = i;
            n->next = NULL;
            p->next = n;
            p = n;
        }

    }
    q = start;
    while(q!=NULL)
    {
        printf("%d\n",q->info);
        q = q->next;
    }


}
