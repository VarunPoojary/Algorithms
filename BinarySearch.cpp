/*
 Search a sorted array by repeatedly dividing the search interval in half. Begin with an interval covering the whole array. If the value of the search 
 key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise, narrow it to the upper half. Repeatedly check 
 until the value is found or the interval is empty.
 
 Steps:-
 1. Compare x with the middle element.
 2.If x matches with the middle element, we return the mid index.
 3.Else If x is greater than the mid element, then x can only lie in the right half subarray after the mid element. So we recur for the right half.
 4.Else (x is smaller) recur for the left half.
 
 The time complexity of the binary search algorithm is O(log n).
*/


#include <iostream>
using namespace std;

    int main() 
    {
        cout<<"Enter Number to Be Searched"<<endl;
        int n;
        cin>>n;
        cout<<"Enter size of Array"<<endl;
        int size;
        cin>>size;
        int arr[size];
        cout<<"Enter elements of Array"<<endl;
        for(int i=0;i<size;i++)
        cin>>arr[i];
        
        int l=0;
        int r=n-1;
        int mid;
        bool ans=false;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(n==arr[mid])
            {
                ans=true;
                break;
            }
            else if(n<arr[mid])
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        
        if(ans)
        cout<<"Number Found at "<<mid<<"th Position"<<endl;
        else
        cout<<"Number Not Found"<<endl;
        return 0;
    }
