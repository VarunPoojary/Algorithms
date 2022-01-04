//Insertion Sort

/*
Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 
Values from the unsorted part are picked and placed at the correct position in the sorted part.


Algorithm 
To sort an array of size n in ascending order: 
1: Iterate from arr[1] to arr[n] over the array. 
2: Compare the current element (key) to its predecessor. 
3: If the key element is smaller than its predecessor, compare it to the elements before. 
Move the greater elements one position up to make space for the swapped element.

Time Complexity: O(N^2)
*/


#include<iostream>
using namespace std;
int main()
{
    int a[5];
    cout<<"Enter Elements of the Array :"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    
   for(int i=1;i<5;i++)
   {
       int current=a[i];
       int j=i-1;
       while(a[j]>current && j>=0)
       {
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=current;
   }
   
    cout<<"Sorted Array is: "<<endl;
    for(int i=0;i<5;i++)
    cout<<a[i]<<" ";
}
