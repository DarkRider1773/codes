//multiple catch
#include<iostream>
using namespace std;
void Xhandler(int n){
  try{
    if(n)
    throw n;
  else
    throw "Number is zero.";
  }catch(int e){
    cout<<"Caught Exception # "<<e<<endl;
  }catch(const char* e){
    cout<<"Caught Exception string "<<e<<endl;
  }

}
int main(){
  cout<<"Start"<<endl;
  Xhandler(1);
  Xhandler(2);
  Xhandler(0);
  Xhandler(3);
  cout<<"End"<<endl;
  return 0;
}
