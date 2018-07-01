#include<iostream>
#include<exception>
using namespace std;
void goesWrong(){
  bool error1=true;
  bool error2=false;
  if(error1){
    throw exception();
  }
  if(error2){
    throw bad_alloc();
  }
}
int main(){
  try{
    goesWrong();
  }catch(bad_alloc/*child class*/ &e){
    cout<<"caught by bad_alloc : "<<e.what()<<endl;

  }catch(exception/*parent class*/ &e){
    cout<<"caught by exception : "<<e.what()<<endl;

  }

  return 0;
}
