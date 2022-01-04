//Quick Sort
/*
QuickSort is a Divide and Conquer algorithm. 
It picks an element as pivot and partitions the given array around the picked pivot. 
Pick last element as pivot (implemented below)

The key process in quickSort is partition(). 
Target of partitions is, given an array and an element x of array as pivot, put x at its correct position in sorted array 
and put all smaller elements (smaller than x) before x, and put all greater elements (greater than x) after x. 

Time Complexity: O(N^2)
*/



#include<iostream>
using namespace std;
void swap(int arr[], int i, int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    
}
int partition(int arr[], int l, int r)
{
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}

void quickSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int pi=partition(arr,l,r);
        
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    }
}

int main()
{
    int arr[5];
    cout<<"Enter Elements of the Array :"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    
    quickSort(arr,0,4);
   
    cout<<"Sorted Array is: "<<endl;
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
}


