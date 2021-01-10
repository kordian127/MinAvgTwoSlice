#include <iostream>

using namespace std;

int main(){

    int a[]={4,2,2,5,1,5,8};
    int sum=0,indx=0;
    double avrg=0,res=((double)a[0]+(double)a[1])/2;
    for(int p=0;p<sizeof(a)/sizeof(a[0])-1;p++){
        for(int q=p+1;q<sizeof(a)/sizeof(a[0]);q++){
            cout<<"("<<p<<","<<q<<")"<<endl;
            for(int i=p;i<=q;i++){
                cout<<a[i];
                sum+=a[i];
            }
            avrg=(double)sum/((double)q-(double)p+1);
            if(res>avrg){
                res=avrg;
                indx=p;
            }

            cout<<endl<<"sum:"<<sum<<endl<<"avrg:"<<avrg<<endl;
            sum=0;
            avrg=0;
        }
    }
    cout<<endl<<"smallest average: " << res<<" for p: "<<indx<<endl;



return 0;
}
