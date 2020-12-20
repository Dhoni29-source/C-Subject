#include <stdio.h>
#include <iostream>

void inArr(int n, int arr[]) //initialize array
{
   for(int i = 0; i<n; i++)
   {
       scanf("%d", &arr[i]);
   }

}

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

int detPeople(int power, int arr[], int n)
{
   int count = 0;
   for(int i = 0; i<n; i++)
   {
       if(power>= arr[i])
       {
           count++;
       }
       else if(arr[i] < power)
       {
           return count;
       }
   }
   return count;
}

int main()
{
   int n; //number of people
   int q; //number of questions
  
   scanf("%d %d", &n, &q);
   int arr[120000]; //contains the people
   inArr(n, arr);
   sortArr(n, arr);
   //printArr(n, arr);
   int ele; //number of people to kill
   int pow; //power needed to kill;
   for(int i = 0; i<q; i++)
   {
       scanf("%d", &pow);
       ele = detPeople(pow, arr, n);
       printf("%d ", ele);
   }
}