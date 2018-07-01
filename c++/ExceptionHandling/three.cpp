//program to catch double exception but throwing int type (Program will be aborted)
#include<iostream>
using namespace std;
int main(){
cout<<"Start"<<endl;
try{
  cout<<"Inside try block"<<endl;
  throw 100;
  cout<<"This part is not Executed"<<endl;
}catch(double e){
  cout<<"Caught an exception -- value is : "<<e<<endl;
}
cout<<"End"<<endl;
return 0;
}
