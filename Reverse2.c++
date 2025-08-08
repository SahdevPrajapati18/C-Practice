#include<iostream>
#include<vector>
#include<climits>
using namespace std;


//Reverse an array
int reverse(vector<int> & arr){
    int n=arr.size();
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    

}

int main(){
    vector<int> arr={1,2,3,4,5,6};
    reverse(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}