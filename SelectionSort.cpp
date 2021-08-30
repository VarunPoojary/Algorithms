/*
The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it 
at the beginning. 
The algorithm maintains two subarrays in a given array.
1) The subarray which is already sorted. 
2) Remaining subarray which is unsorted.
In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray. 

Time Complexity: O(n2) as there are two nested loops.
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
        for(int i=0;i<size-1;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(arr[i]>arr[j])
                {
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        cout<<"Sorted Array is:"<<endl;
        for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
        return 0;
    }
