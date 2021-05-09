 function that returns count of trailing zeroes in n!.

#include<iostream>
using namespace std;

int trailzero(int n){

    int ans=0;
	  int p=5;
  
	while(n/p!=0){
	
		ans=ans+n/p;
		p=p*5;
	}

	return ans;
  
  }


int main(){

 int n;cin>>n;
 cout<<trailzero(n)<<endl;

 return 0;

}












	




