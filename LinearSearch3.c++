#include<iostream>
#include<vector>
#include<climits>
using namespace std;
//Linear Search in an array
int LinearSearch(vector<int> &arr,int Element){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]=Element){
            return true;
        }
        else{
            return false;
        }
    }
    
}

int main(){
    vector<int> arr={1,2,3,4,5,6};
    int Element=5;
    int SearchedElement=LinearSearch(arr,Element);
    cout<<SearchedElement;
    return 0;
}