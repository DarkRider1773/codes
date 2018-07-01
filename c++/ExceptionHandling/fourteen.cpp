//restricing exception throw by a function testing weather unexpected() is called or not.
#include<iostream>
#include<cstdlib>
#include<exception>
using namespace std;
void my_Uhandler(){
  cout<<"Inside unexpecteed handler\n";
  abort();
}
void Xhandler(int test) throw(int, char, double){
  if(test==0)throw test;
  if(test==1)throw 'a';
  if(test==2)throw 123.23;
  if(test==3)throw "Hello how are you.";
}
int main(){
  cout<<"Start\n";
  set_unexpected(my_Uhandler);
  try{
    Xhandler(3);
  }catch(int e){
    cout<<"Caught an integer.\n";
  }catch(char e){
    cout<<"Caught a character.\n";
  }catch(double e){
    cout<<"Caught double.\n";
  }catch(...){
    cout<<"Caught an exception not mention in list\n";
  }
  cout<<"End\n";
  return 0;
}
