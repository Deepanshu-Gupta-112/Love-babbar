

#include <iostream>

using namespace std;

int main()
{
    int arr[]={1,0,2,1,2,1,2,1};
     int len = sizeof(arr)/sizeof(arr[0]);
    int mid=0;
    int i=0;
    int l=7;
    while(mid<=l){
        if(arr[mid]==0)
        {
            swap(arr[i],arr[mid]);
            i++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
          swap(arr[mid],arr[l]);
           l--;
        }
        
    }
    for(int i=0;i<8;i++){
        cout<<arr[i];
    }
    cout<<" "<<len;
    return 0;
}
