/*
(اللهم صلْ وسلم وزد وبارك على سيدنا محمد )

꧁IslaM_SobhY꧂

 */
#include <bits/stdc++.h>
using namespace std;
#define  el "\12"


//as you know there are many searching algorithms we will explain it in details

//the first algorithm or (Method) Method to search in the array is Linear Search

// 1- Linear search in Unordered array

int LinearSearchInUnSortedArray(int arr[],int element,int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == element)
            return i;
    }
    //return -1 if the element wan't founded
    return -1;
}
//---------------------------------------------------------------//

//Delete in unordered array
void DeleteAt(int arr[],int pos,int &n)
{
   //just some handling some special cases
    if(pos < 0 || pos >= n)
    {
        cout << "Invalid Position...!" << el;
        return;
    }
   for(int i = pos; i < n - 1; i++)
   {
       arr[pos] = arr[pos+1];
   }
   //decrement the size by one as we deleted one element
   --n;

}
//-----------------------------------------------------//
//just inserting in unordered array
void InsertAt(int arr[], int value,int pos,int &n)
{
   //just some handling some special cases
    if(pos < 0 || pos >= n)
    {
        cout << "Invalid Position...!" << el;
        return;
    }

    for(int i = n-1; i >= pos; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[pos] = value;
    ++n;
}
//-----------------------------------------------------------//

//searching in sorted array we just use binary search

// 1-iterative method
int BinarySearch(int arr[],int element,int n)
{
    int l = 0;
    int r = n-1;
    while(r >= l)
    {
        int mid = (l+r)/2;
        if(arr[mid] > element)
        {
           r = mid-1;
        }else if(arr[mid] < element)
        {
            l = mid+1;
        }else
        {
           return mid;
        }
    }
    return -1;
}
//--------------------------------------------------------------------//

//just insertINsorted array

void InsertAtSorted(int arr[],int element,int &n)
{
    //handling the special cases
    int pos = BinarySearch(arr,element,n);
    if(element < arr[0])
    {
        pos = 0;
    }else if(element > arr[n-1])
    {
        pos = n-1;
    }
    InsertAt(arr,element,pos,n);
}
//----------------------------------------------------------------------//

//just Delete from sorted array

void DeleteAtSorted(int arr[],int element,int &n)
{
    int pos = BinarySearch(arr,element,n);
     DeleteAt(arr,pos,n);
}

//--------------------------------------------------------------------//
//just a function to print the array

void Print(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " \n"[i == n-1];
    }
}

//--------------------------------------------------------------------//
int main() {
int arr[5] = {1,2,3,4,5};
int n = sizeof(arr)/sizeof(arr[0]);
//cout << LinearSearchInUnSortedArray(arr,5,n) << el;
//Print(arr,n);
//DeleteAt(arr,5,n);
//Print(arr,n);
//cout << BinarySearch(arr,4,n);
Print(arr,n);
InsertAtSorted(arr,7777,n);
Print(arr,n);
DeleteAtSorted(arr,7777,n);
Print(arr,n);
  return 0;
}





