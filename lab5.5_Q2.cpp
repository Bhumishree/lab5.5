#include<iostream>
using namespace std;
int main(){
//declaring variables
int a,b;
//applying conditions
  for(a=0;a<5;++a){
		for(b = 0 ; b<5 ; b++){
if(a==0 or a==4 or b==0 or b==4)
			cout<<"*";
		
	else
		cout<<" ";
	}
		cout<<endl;
	
  }
return 0;
}
