//include library
#include<iostream>
using namespace std;
int main(){
//declaring variables
int a,b;
//creating loop
for(a=1;a<=5;a++){
for(b=1;b<=a;b++){
if(a==1 or a==5 or b==1 or b==a){
cout<<"*";
}
else{
cout<<" ";
}
}
cout<<endl;
}
//end the program
return 0;
}
