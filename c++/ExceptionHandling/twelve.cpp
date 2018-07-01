//Example of rethrowing an exception
#include<iostream>
using namespace std;
void Xhandler(){
  try{
    throw "hello";
  }catch(const char*){
    cout<<"Caught const char* inside Xhandler"<<endl;
    throw;
  }
}
int main(){
  cout<<"Start"<<endl;
  try{
    Xhandler();
  }catch(const char* e){
    cout<<"Caught const char* inside main"<<endl;
  }
  cout<<"End"<<endl;
  return 0;
}
