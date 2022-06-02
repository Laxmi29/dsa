#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct book_details
{
   char book_name[20];
   int isbn;
   int pages;
   };
 typedef struct book_details BD;

 void read(BD [],int);
 void display(BD [],int);
 void sorting(BD [],int);
 void search(BD [],int);
  void main()
  {

      BD b[100];
      int n;
      printf("Enter the number of books\n");
      scanf("%d",&n);
      read(b,n);
      display(b,n);
      sorting(b,n);
      search(b,n);
  }

  void read(BD b[],int n)
  {
    int i;
    for(i=0;i<n;i++)
        {
         printf("Enter the details of the book\n");
      printf("Enter the name of the book:\t");
      scanf("%s",b[i].book_name);
     printf("Enter the ISBN number:\t");
      scanf("%d",&b[i].isbn);
     printf("Enter the number of pages:\t");
      scanf("%d",&b[i].pages);
    printf("\n");
    }

  }

  void display(BD b[],int n)
  {

      int i;
    for(i=0;i<n;i++)
        {

      printf("Name of the book:\t");
      printf("%s\n",b[i].book_name);
     printf("ISBN number:\t");
      printf("%d\n",b[i].isbn);
     printf("Number of pages:\t");
      printf("%d\n",b[i].pages);
    printf("\n");
    }
  }

  void sorting(BD b[],int n)
  {
      char temp1[100];
      char temp2[100];
      int i,j,l,m,o;
      for(i=0;i<n-1;i++)
      {

          for(j=0;j<n-i-1;j++)
          {

              if(b[j].isbn>b[j+1].isbn)
              {
                  l=b[j].isbn;
                  b[j].isbn=b[j+1].isbn;
                  b[j+1].isbn=l;

                  m=b[j].pages;
                  b[j].pages=b[j+1].pages;
                  b[j+1].pages=m;

                  strcpy(temp1,b[j].book_name);
                  strcpy(b[j].book_name,b[j+1].book_name);
                  strcpy(b[j+1].book_name,temp1);


              }
          }
      }
  }


  void search(BD b[],int n)
  {

      int i,numb,r=1;
      printf("Enter the ISBN number\n");
      scanf("%d",&numb);

      for(i=0;i<n;i++)
      {
         if(numb==b[i].isbn)
         {
           r=0;
           printf("Name of the book:\t");
      printf("%s\n",b[i].book_name);
     printf("ISBN number:\t");
      printf("%d\n",b[i].isbn);
     printf("Number of pages:\t");
      printf("%d\n",b[i].pages);
    printf("\n");
        }
      }
      if(r==1)
      {

          printf("No matches found\n");
      }
  }
