#include<iostream>
#include<math.h>
using namespace std;

int getmax(int arr[],int size){
    int max= arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;

}
int getmin(int arr[], int size){
    int min= arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }

    }
    return min;
}


int main(){
    int arr[10],size;
    cout<<"Enter the size of a array"<<endl;
    cin>>size;
    for(int i=0; i<size ;i++){
        cin>>arr[i];
    }

cout<< "Maximum element in a array is :"<<getmax(arr,size)<<endl;
cout<<"Minimum element in an array is:"<<getmin(arr,size)<<endl;
   
    
}
