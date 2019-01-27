#include <iostream>

using namespace std;
void bubble_sort(int arr[], int size)
{
    int temp;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {

            if(arr[j]>arr[j+1])
            {
                temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;
            }
        }
    }
}
int main()
{
    int A[20],n;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the elements of the array";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"The unsorted array is:";
    for(int i=0; i<n; i++)
    {
     cout<<A[i]<<" ";
    }
    cout<<"\n";
    bubble_sort(A,n);
    cout<<"The sorted array is:";
    for(int i=0;i<n;i++)
        cout<<A[i]<<" ";
    return 0;
}
