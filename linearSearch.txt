#include<iostream>
using namespace std;

int main(){
 //Array for Element searching
 int a[]={2,3,1,5,6,7,9,8};
 //Element to be searched
 int x=5;
 //size of array
 int n = sizeof(a)/sizeof(a[0]);
 bool flag = false;
 for(int i=0;i<n;i++){
    if(a[i] == x){
        flag = true;
        break;
    }
 }
 if(flag){
    cout<<"Element Found"<<endl;
 }else{
    cout<<"Element not found"<<endl;
 }
}
