#include<stdio.h>

void sortArr(int n, int arr[]) //sort array
{
   int temp;
   for(int i = 0; i<n-1; i++)
   {
       for(int j = 0; j<n-1; j++)
       {
           if(arr[j] > arr[j+1])
           {
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
           }
       }
   }
}

void sortArr2(int n, int arr[], int rank[]) //sort array by ranking
{
   for(int i = 0; i<n-1; i++)
   {
       for(int j = 0; j<n-1; j++)
       {
           if(arr[j] == arr[j+1])
           {
               rank[j] = rank[j+1];
           }
       }
   }
}

void ranking(int n, int arr[], int rank[])
{
   int a = n-1;
   for(int i = 0; i<n; i++)
   {
       rank[i] = 1 + a;
       a--;
   }

}

void inArr(int n, int arr[]) //initialize array
{
   for(int i = 0; i<n; i++)
   {
       scanf(" %d", &arr[i]);
   }

}

void printArr(int n, int arr[], int i) //print array
{
   printf("Case #%d:", i);
   for(int q = 0; q<n; q++)
   {
       printf(" %d", arr[q]);
   }
       printf(" ");
}

int main()
{
   int t;
   int n;
   scanf("%d", &t);
   for(int i = 1; i<=t; i++)
   {
       scanf(" %d", &n);  
       int arr[n];
       int rank[n];
       inArr(n, arr); //get array
       sortArr(n, arr); //sort array by ascending order
       ranking(n, arr, rank); //get rankings
       sortArr2(n, arr, rank); //sort rankings
       printArr(n, rank, i);
   }
}