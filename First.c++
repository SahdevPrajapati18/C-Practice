#include<iostream>
#include<vector>
#include<climits>
using namespace std;

//Maximum of an array
int maxNumber(vector<int> &arr){
    int n= arr.size();
    int maxi=INT32_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}

int main(){
    vector<int> arr={2,4,5,6,1,3};
    int Number= maxNumber(arr);
    cout<<"Maximum No. is: "<<Number;
    return 0;
}