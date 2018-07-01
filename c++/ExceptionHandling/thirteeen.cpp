//set_terminate() to set function called by terminate()
#include<iostream>
#include<cstdlib>
#include<exception>
using namespace std;
void my_Thandler(){
  cout<<"Inside terminate handler\n";
  abort();
}
int main(){
  cout<<"Start";
  set_terminate(my_Thandler);
  try{
    cout<<"Inside try block"<<endl;
    throw 100;
  }catch(double e){

  }
  cout<<"End"<<endl;
  return 0;
}
