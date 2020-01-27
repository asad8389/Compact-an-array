#include<iostream>
using namespace std;

template <class x> void compact(x *item, int count, int start, int end)
{
    register int i;

    for(i=end+1;i<count;i++,start++)
    {
        item[start]=item[i];
    }

    for(;start<count;start++)
    {
        item[start]=(x)0;
    }
}

int main()
{
    int arr[]={1,5,10,15,20,25,30};
    char str[]="black blue color";
    register int i;
    
    int n=sizeof(arr)/sizeof(int),m=sizeof(str)/sizeof(char);

    cout<<"array before compacting"<<endl;
    
    for(i=0;i<n;i++){cout<<arr[i]<<" ";}
    cout<<endl;

    cout<<"string before compacting"<<endl;
    
    for(i=0;i<m;i++){cout<<str[i]<<" ";}
    cout<<endl;

    compact(arr,n,2,4);
    compact(str,m,5,9);

    cout<<"array after compacting"<<endl;
    
    for(i=0;i<n;i++){cout<<arr[i]<<" ";}
    cout<<endl;

    cout<<"string after compacting"<<endl;
    
    for(i=0;i<m;i++){cout<<str[i]<<" ";}
    cout<<endl;

    return 0;

}
