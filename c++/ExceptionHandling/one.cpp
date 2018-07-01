//when an excetion occur whole program is aborted after line of code having exception if we donot use try-ctach block
#include<iostream>
using namespace std;
void exceptionThrower(){
  throw 1;
  cout<<"This part is not Executed"<<endl;
}
int main(){
cout<<"Start"<<endl;
exceptionThrower();
cout<<"End";
return 0;
}
