#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int _x[10000];
    int _y[10000];
    bool threat=false;
    int N;
    cin>>N;
    for(int i=1;i<=N;++i){
        cin>>_x[i]>>_y[i];
    }
    for(int temp1=1;temp1<=N-1;++temp1){
        for(int temp2=temp1+1;temp2<=N;++temp2){
            if( _x[temp1]==_x[temp2] || _y[temp1]==_y[temp2] ||        //ngang         
                abs(_x[temp1]-_x[temp2])==abs(_y[temp1]-_y[temp2])) //cheo
            {
                threat=true;
            }
        }
        if(threat==true) break;
    }
    if(threat==true){
        cout<<"yes";
    }else{
        cout<<"no";
    }
    return 0;
}
