/* 
A simple approach is to do a linear search, i.e  

1. Start from the leftmost element of arr[] and one by one compare n with each element of arr[]
2. If n matches with an element, print the index and break.
3. If n doesn’t match with any of elements, print number not found.
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
        int i;
        for(i=0;i<size;i++)
        {
            if(arr[i]==n)
            {
                cout<<"Number Present at "<<i<<"th position";
                break;
            }
        }
        if(i==size)
        cout<<"Number not present";
        return 0;
    }
