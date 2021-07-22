#include<iostream>
using namespace std;
int main(){
    int elements;
    int arr[elements];
    cout<<"enter the no of elements ";
    cin>>elements;
    for(int i=0;i<elements;i++){
        cin>>arr[i];
    }
    int *max;
    int *min;
    min=&arr[0];
    max=&arr[0];
    for(int i=0;i<elements;i++){
        if(arr[i]>*max){
            max=&arr[i];
        }
        if(arr[i]<*min){
            min=&arr[i];
        }

    }
    cout<<"max= "<<*max<<endl;
    cout<<"min= "<<*min;


}