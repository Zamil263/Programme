#include<iostream>
using namespace std;
int main(){
    int rows,coloumns;
    cout<<"enter the rows for array ";
    cin>>rows;
    cout<<"enter the coloumns for array ";
    cin>>coloumns;
    int arr[rows][coloumns]; //Declaration of 2D arrays
    cout<<"enter the values of array";
    for(int i=0;i<rows;i++){
        for(int j=0;j<coloumns;j++){
            cin>>arr[i][j]; //Getting values of array by user
        }
    }
    int max=arr[0][0];
    int min=arr[0][0];
    for(int i=0;i<rows;i++){
    for(int j=0;j<coloumns;j++){
        //cout<<arr[i][j];
        if(arr[i][j]>max){
            max=arr[i][j];
        }

    }
    }
    for(int i=0;i<rows;i++){
    for(int j=0;j<coloumns;j++){
        if(arr[i][j]<min){
            min=arr[i][j];
        }

    }
    
    }
    cout<<"Max= "<<max<<endl;
    cout<<"min= "<<min<<endl;
    
}