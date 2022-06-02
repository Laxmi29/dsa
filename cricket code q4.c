#include<stdio.h>
#include<strings.h>

 struct cric
{
    char name[20];
    char t[20];
    int r;


};
void read( struct cric a[],int n);
void display( struct cric a[],int n);
void sort(struct cric x[],int n);

 struct cric b[10];
void main()
{int n;

    printf("Enter the no of players\n");
    scanf("%d",&n);
    read(b,n);
    display(b,n);
    printf("The sorted list is\n");
    sort(b,n);
    display(b,n);

}
void read(struct cric b[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("Enter the player name\n");
        scanf("%s",&b[i].name);
        printf("Enter the team name\n");
        scanf("%s",&b[i].t);
        printf("Enter the ODI_rank\n");
        scanf("%d",&b[i].r);

    }
}
void display( struct cric  b[],int n)
{int i;
    for(i=0;i<n;i++)
    {
        printf("%s\n %s\n %d \n",b[i].name,b[i].t,b[i].r);


    }

}
void sort( struct cric x[10],int n)
{int i,j;
struct cric swap;
for(i=0;i<n-1;i++)
{for(j=0;j<n-i-1;j++)
{if (x[j].r>x[j+1].r)
{swap=x[j];
x[j]=x[j+1];
x[j+1]=swap;}
}
}

}
