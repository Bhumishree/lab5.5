//include library
#include<iostream>
using namespace std;
int main(){
//declaring variables
int a,b,c;
for(a=0;a<=4;a++){
for(b=0;b<=4-a;b++){
cout<<" "; 
}
for(c=0;c<=4;c++){
cout<<"*";
}
cout<<endl;
}
return 0;
} 
