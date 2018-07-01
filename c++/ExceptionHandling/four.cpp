//Throwing exception from a function called inside try block
#include<iostream>
using namespace std;
void Xtest(int test){
  cout<<"Inside Xtest, test is: "<<test<<"\n";
  if(test)
  throw test;
}
int main(){
cout<<"Start"<<endl;
try{
  Xtest(0);
  Xtest(1);
  Xtest(2);
}catch(int e){
  cout<<"Caught an exceiption -- value is : "<<e<<endl;
}
cout<<"End";
return 0;
}
