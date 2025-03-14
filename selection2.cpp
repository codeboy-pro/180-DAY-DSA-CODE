#include<iostream>//2: Selection Sort Algorithm to sort the array of integers in increasing order by taking the highest number to last place. Question was explained in the class. 
using namespace std;
int main(){

int arr[6]={113,1,12,5,27,80};
int n=6;
for(int i=n-2;i>=0;i--){
    int index=i+1;
    for(int j=i;j>=0;j--){
        if(arr[j]>arr[index]){
            index=j;
        }
    }
    swap(arr[i+1],arr[index]);
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}