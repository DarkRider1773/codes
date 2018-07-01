//try catch can be localised in a function
#include<iostream>
using namespace std;
void Xhandler(int test){
  //cout<<"Inside Xtest, test is: "<<test<<"\n";
try{
  if(test)
  throw test;
}catch(int e){
  cout<<"Caught Exception #: "<<e<<endl;
}
}
int main(){
cout<<"Start"<<endl;
Xhandler(1);
Xhandler(2);
Xhandler(0);
Xhandler(3);//each time try catch is initiialized again
cout<<"End"<<endl;
return 0;
}
