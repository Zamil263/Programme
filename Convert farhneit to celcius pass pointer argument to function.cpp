#include<iostream>
using namespace std;
void convert(int *value);
int main(){
   // int *c;
    int F;
    cout<<"enter the farhenit  ";
    cin>>F;
   // c= (0.5*(F-32));
    convert(&F);

}
void convert(int *value){
    double C;
    C=(*value-32);
    C=C*5/9;
    cout<<"c= "<<C<<endl;;

}