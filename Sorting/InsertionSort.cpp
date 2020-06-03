#include<iostream>
using namespace std;

int main(){
//array to be sorted
int a[] = {7,9,5,3,2,4,0,1,6};
//calculate the size of array
int n = sizeof(a)/sizeof(a[0]);
//Implementation of Insertion Sort
for(int i=0;i<n;i++){
    int key = a[i];
    int j=i-1;

    while(j>=0 && a[j]>key){
        a[j+1]=a[j];
        j=j-1;
    }
    a[j+1]=key;
}
cout<<"Elements of array"<<endl;
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}
