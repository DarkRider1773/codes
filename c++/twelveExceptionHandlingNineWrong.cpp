#include<iostream>
#include<exception>
using namespace std;
void goesWrong(){
  bool error1=false;
  bool error2=true;
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
  }catch(exception/*parent class*/ &e){
    cout<<"caught by exception : "<<e.what()<<endl;

  }catch(bad_alloc/*child class*/ &e){
    cout<<"caught by bad_alloc : "<<e.what()<<endl;

  }

  return 0;
}
