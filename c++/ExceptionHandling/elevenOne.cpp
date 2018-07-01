//restricing exception throw by a function
#include<iostream>
using namespace std;
void Xhandler(int test) throw(int, char, double){
  if(test==0)throw test;
  if(test==1)throw 'a';
  if(test==2)throw 123.23;
}
int main(){
  cout<<"Start\n";
  try{
    Xhandler(2);
  }catch(int e){
    cout<<"Caught an integer.\n";
  }catch(char e){
    cout<<"Caught a character.\n";
  }catch(double e){
    cout<<"Caught double.\n";
  }
  cout<<"End\n";
  return 0;
}
