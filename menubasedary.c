#include<stdio.h>
#include<conio.h>
#define size 100;
void traverse(int arry[],int n);
void insert(int arry[],int n);
void delete(int array[],int n);
void linearsrch(int array[],int n);
void binarysrch(int array[],int n);
void bubblesort(int array[],int n);
int main(){
    int i ,n,opt,arry[100];
    printf("\nEnter the size of array-");
    scanf("%d",&n);
        printf("\nEnter the elements of an array:\n "); 
        for ( i = 0; i <n; i++)
    {
        printf("\nElements are: ary[%d]=",i);
        scanf("%d",&arry[i]);
    }
    do{
   printf("\n\n**************\033[4mMENU FOR ARRAY OPERATIONS\033[24m**************");
    
    printf("\n\n1. Traverse the array.");
    printf("\n2. Insert the element in array");
    printf("\n3. Delete the element from array");
    printf("\n4. Search an element in array by linear search");
    printf("\n5. Search an element in array by binary search");
    printf("\n6. Sort the element in array by bubble sort");
    printf("\n7. EXIT");
    printf("\n\n\033[4m                                                                               . \033[24m");
    printf("\n\nSelect an operation to be performed on array: ");
    scanf("%d",&opt);
    switch (opt)
    {
    case 1:
        traverse(arry,n);
        break;
    case 2:
        insert(arry,n);
        break;
    case 3:
        delete(arry,n);
        break;
    case 4:
        linearsrch(arry,n);
        break;
    case 5:
        binarysrch(arry,n);
        break;
    case 6:
        bubblesort(arry,n);
        break;
    default:
        printf("\nPlease select a valid opration to perform");
    }
    }while (opt!=7);
    
   return 0; 
}
void traverse(int arry[100],int n)
{
    printf("\nthe elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arry[i]);
    }
}
void insert(int arry[100],int n)
{
    int pos,num;
    printf("\nenter the position at which element should be inserted-");
    scanf("%d",&pos);
    printf("\nenter the value to insert-");
    scanf("%d",&num);
    if (pos>n)
    {
        printf("\nposition is out of length"); 
    }
    else
    {
        for (int i = n-1; i >= pos; i--)
        {
            arry[i+1]=arry[i];
        }
        n=n+1;
        arry[pos]=num;
    }
    printf("\nthe elements after insertion are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arry[i]);
    }
    
}
void delete(int arry[100],int n)
{
    int pos;
    printf("\nenter the position at which element should be deleted-");
    scanf("%d",&pos);
    if (pos>n)
    {
        printf("\nposition is out of length"); 
    }
    else
    {
        for (int i = pos; i <n; i++)
        {
            arry[i]=arry[i+1];
        }
        n=n-1;
    }
    printf("\nthe elements after deletion are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arry[i]);
    }
    
}
void linearsrch(int arry[100],int n)
{
    int num,i,flag=0;
    printf("\nenter the element to be  searched-");
    scanf("%d",&num);
        for (i =0; i <n; i++)
        {
           if (arry[i]==num)
           {
           flag=1;
           printf("\nelement found at position %d",i+1);
           break;
           }
        }    
        if (flag==0)
          
          printf("\nelement is not present in array");
    printf("\nthe elements  are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arry[i]);
    }
    
}
void binarysrch(int arry[100],int n)
{ 
  int num,strt,mid,end,flag=0;
bubblesort(arry,n);
  printf("\nenter the no. that has to be searched: ");
  scanf("%d",&num);
  strt=0, end=n-1;
  while(strt<=end)
  {
    mid=(strt+end)/2;
    if (arry[mid]==num)
    {
        printf("\n %d is present in the array at position %d",num,mid+1);
        flag=1;
        break;
    }
    else if(arry[mid]>num)
            end=mid-1;
    else
            strt=mid+1;
    if (strt>end && flag==0)
        printf("\n %d does not exist in the array",num);
    
  }
}
void bubblesort(int arry[100],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arry[j]>arry[j+1])
            {
                int temp=arry[j];
                arry[j]=arry[j+1];
                arry[j+1]=temp;
            }
        }    
    }
    printf("\nThe sorted array in ascending order is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arry[i]);
    }
}