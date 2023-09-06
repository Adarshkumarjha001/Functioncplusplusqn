#include<iostream>
#include<iomanip>
using namespace std;
void converttoonedecimalplace(){
	double b;
	cout<<"Enter the value of b: ";
	cin>>b;
	cout<<fixed<<setprecision(3)<<"The value of b is: "<<b;
}
void myfactor(){
	int n;
	cout<<"Enter the value of n: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			cout<<"The factor of n is: "<<i<<endl;
		}
	}
	converttoonedecimalplace();
}
int main(){
	myfactor();
     return 0;
}
