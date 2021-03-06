// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
   {
       int i=l,j=m+1,k=0;
       int temp[r-l+1];
       
       while(i<=m && j<=r){
           
           if(arr[i]<arr[j]){
               temp[k++]=arr[i++];
           }
           else{
               temp[k++]=arr[j++];
           }
       }
       while(i<=m){
           temp[k++]=arr[i++];
       }
       
       while(j<=r){
           temp[k++]=arr[j++];
       }
       
       for(k=l; k<=r; ++k){
           arr[k]=temp[k-l];
       }
        return;
   }
   
   public:
   void mergeSort(int arr[], int l, int r)
   {
       //code here
       if(l>=r) return ;
       int m=l+(r-l)/2;
       mergeSort(arr,l,m);
       mergeSort(arr,m+1,r);
       merge(arr,l,m,r);
       return;
   }


};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends