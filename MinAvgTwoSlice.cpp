#include <iostream>

using namespace std;

int main(){

    int a[]={4,2,2,5,1,5,8};
    for(int p=0;p<sizeof(a)/sizeof(a[0])-1;p++){
        for(int q=p+1;q<sizeof(a)/sizeof(a[0]);q++){
            cout<<"("<<p<<","<<q<<")"<<endl;
            for(int i=p;i<=q;i++){
                cout<<a[i];
            }
            cout<<endl;
        }
    }



return 0;
}
