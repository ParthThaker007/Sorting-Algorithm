#include<iostream>
using namespace std;
void Bubble_Sort(int arr[],int n){
  for(int i=0 ;i<n-1;i++){
    for(int j =0 ;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            int temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
  }   
}
int main(){
    int Size;
    cout<<"Enter the Size Of Array"<<endl;
    cin>>Size;
    int *arr = new int[Size];
    cout<<"Enter the elements of the Array"<<endl;
    for(int i = 0; i<Size ; i++){
        cin>>arr[i];
    }
    Bubble_Sort(arr,Size);
    cout<<"Sorted Array: "<<endl;
    for(int i =0;i<Size;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    return 0;
}