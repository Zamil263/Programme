#include<iostream>
#include<string>
using namespace std;

int main(){
    
    char str[20],*ptr;
   cin.get(str,20)   ;

    //str="HI this is Muzamil ";
    ptr=str;
    int counter=0;
    while(*ptr!='\0'){
        counter++;
        ptr++;    
    }

    cout<<"length of string is "<<counter;
    return 0;


    
}