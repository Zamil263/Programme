#include<iostream>
using namespace std;
void arrayfunction();   //Declaring a function which show elements of array  by using loop
int main(){
 arrayfunction();
    
}
void arrayfunction(){
    int no_elements;
    int i;
    
        int arr[no_elements];

    cout<<"enter thhe num of elements ";
    cin>>no_elements;
    for(int i=0;i<no_elements;i++){
        cin>>arr[i];
    }
    for(int i=0;i<no_elements;i++){
        cout<<arr[i];
    }

}