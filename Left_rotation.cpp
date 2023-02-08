#include<bits/stdc++.h>
using namespace std;
class Sol{
    public:
	void leftRotate(int arr[], int k, int n) 
	{ 
	   // Your code goes here
	   k=k%n;   //for larger values 
	   int temp[k];
	   for(int i=0;i<k;i++){
	       temp[i]=arr[i];
	   }    //store values to be shifted left
	   for(int i=0;i<n-k;i++){
	       arr[i]=arr[k+i];
	   }    //shift values on the left
	   for(int i=n-k;i<n;i++){
	       arr[i]=temp[i-(n-k)];
	   }    //
	} 
};

int main(){
    int t;
    cout<<"Enter testcases: ";
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter number of elements";
        cin>>n;
        cout<<"Enter number to left rotate array:";
        int k;
        cin>>k;
        int arr[n];
        cout<<"\nEnter array elements";
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    Sol s;
    s.leftRotate(arr,k,n);
    for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}