#include<iostream>
using namespace std;
//function for binary search
int binarySearch(int a[],int l,int r,int x){
    if(r >= l){
    //Finding middle element
    int mid = l+(r-l)/2;

    if(a[mid]==x){
        return mid;
    }
    if(a[mid]>x){
        binarySearch(a,l,mid-1,x);
    }
    return binarySearch(a,mid+1,r,x);
    }
    return -1;
}
int main(){
 //Array for Element searching
 int a[]={1,2,3,4,5,6,7,8,9};
 //Element to be searched
 int x=5;
 //size of array
 int n = sizeof(a)/sizeof(a[0]);
 //value received after calling the function
 int val=binarySearch(a,0,n-1,x);
 (val==-1)?cout<<"Element not found"
 :cout<<"Element found at index "<<val+1;
 return 0;
}
