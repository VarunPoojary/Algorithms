/*
Bubble sort is a sorting algorithm that compares two adjacent elements and swaps them until they are not in the intended order.
Using the bubble sort technique, sorting is done in passes or iteration. Thus at the end of each iteration, the heaviest element is placed at 
its proper place in the list. In other words, the largest element is placed at the end.


Suppose we are trying to sort the elements in ascending order.

1. First Iteration (Compare and Swap)
a. Starting from the first index, compare the first and the second elements.
b. If the first element is greater than the second element, they are swapped.
c. Now, compare the second and the third elements. Swap them if they are not in order.
d. The above process goes on until the last element.

2. Remaining Iteration

a. The same process goes on for the remaining iterations.
b. After each iteration, the largest element among the unsorted elements is placed at the end.
c. In each iteration, the comparison takes place up to the last unsorted element.
d. The array is sorted when all the unsorted elements are placed at their correct positions.

*/


    #include <iostream>
    using namespace std;

    int main() 
    {
        cout<<"Enter size of Array"<<endl;
        int size;
        cin>>size;
        int arr[size];
        cout<<"Enter elements of Array"<<endl;
        for(int i=0;i<size;i++)
        cin>>arr[i];
        int counter=1;
        while(counter<size)
        {
            for(int i=0;i<size-counter;i++)
            {
                if(arr[i]>arr[i+1])
                {
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
                }
            }
            counter++;
        }

        cout<<"Sorted Array is:"<<endl;
        for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
        return 0;
    }
