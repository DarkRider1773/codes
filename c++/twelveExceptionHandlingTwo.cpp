#include<iostream>
using namespace std;
void mightGoWrong(){
  bool error = true;
  if(error){
    throw "abcd";
  }
}
int main(){
try{
  mightGoWrong();
}catch(char const* e){
  cout<<"Error code is :"<<e<<endl;
}

  return 0;
}
