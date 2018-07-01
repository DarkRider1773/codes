#include<iostream>
using namespace std;
void mightGoWrong(){
  bool error = false;
  bool error1=true;
  if(error){
    throw 8;
  }
  if(error1){
    throw "abcd";
  }
}
void useMightGoWrong(){
  mightGoWrong();
}
int main(){
  try{
  useMightGoWrong();
}catch(int e){
  cout<<"Error code is : "<<e<<endl;
}catch(char const* e){
  cout<<"Error code is : "<<e<<endl;
}

  return 0;
}
