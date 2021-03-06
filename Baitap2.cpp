#include<iostream>
using namespace std;
int main(){
	int N;
	cin>>N;
	bool prime[N]; int temp1=2; int temp2=2;
	for (int i=0;i<=N;i++){
		prime[i]=true;
	}
	while(temp1<=N){
	    if(prime[temp1]==true){
            while(temp1*temp2<=N){
                prime[temp1*temp2]=false;
                ++temp2;
            }
	    }
        temp2=2;
        ++temp1;
	}
	for(int i=2;i<=N;++i){
        if(prime[i]==true){
            cout<<i<<" ";
        }
	}
	return 0;
}