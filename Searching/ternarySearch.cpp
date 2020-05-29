#include<iostream>
using namespace std;
//function for binary search
int ternarySearch(int a[],int l,int r,int x){
    if(r >= l){
    //Finding middle element
    int mid1 = l+(r-l)/3;
    int mid2 = r-(r-l)/3;

    if(a[mid1]==x){
        return mid1;
    }

    if(a[mid2]==x){
        return mid2;
    }

    if(a[mid1]>x){
        ternarySearch(a,l,mid1-1,x);
    }else if(a[mid2]<x){
        ternarySearch(a,mid2+1,r,x);
    }else{
    return ternarySearch(a,mid1+1,mid2-1,x);
    }
    }
    return -1;
}
int main(){
 //Array for Element searching
 int a[]={1,2,3,4,5,6,7,8,9};
 //Element to be searched
 int x=4;
 //size of array
 int n = sizeof(a)/sizeof(a[0]);
 //value received after calling the function
 int val=ternarySearch(a,0,n-1,x);
 (val==-1)?cout<<"Element not found"
 :cout<<"Element found at index "<<val+1;
 return 0;
}
