#include<iostream>
#include<vector>
#include<climits>

using namespace std;
//Binary search in an array . In Binary search we have to give a sorted array to the function
//Because we had to find mid of the array. It is fast as compared to linear search.
bool BinarySearch(vector<int> arr,int target){
    int n=arr.size();
    int start=0;
    int end=n-1;
    
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target){
            return true;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return false;
}

int main(){
    vector<int> arr={1,2,3,4,5,9};
    int target=8;
    cout<<BinarySearch(arr,target);
    
    return 0;
}