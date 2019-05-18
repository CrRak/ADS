
#include <iostream>
using namespace std;

int main(){

    int a;
    int b;
    cin>>a;
    cin>>b;

    int m[a];
    for(int i=0;i<a;i++){
        cin>>m[i];
    }
    int x=b;
    int first=0;
    int last=a-1;
    int middle= (first+last)/2;

    while(first<=last){
        if(m[middle]==x){
                cout<<"found at the position no. "<<middle+1;
                break;
        }
        else if(x<m[middle]){
            last=middle-1;
        }
        else if(x>m[middle]){
            first=middle+1;
        }
        middle=(first+last)/2;
        if(first > last)
	{
	   cout<<x<<" not found in the array";
	}
    }
    return 0;

}
