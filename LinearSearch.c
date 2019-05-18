
#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;

    for(int i=0;i<x;i++){
	int y [2];
    for(int i=0; i< 2; i++){
        cin>>y[i];
    }
    int size= y[0];
    int k [size];
    for(int i=0;i<size;i++){
        cin>>k[i];
        cout<<k[i];
    }
     for(int i=0;i<size;i++){
         int m;
        if(k[i]==y[1]){
            m=i;
            cout<<m<<" ";
            break;
        }
        // if(k[i]!=y[1]){
        //     continue;
        // }
        if(i==size-1 && m!=y[1]){
        cout<<"-1";
        }
    }



    }

	return 0;
}
