//if no exception is thrown than no catch block is Executed
#include<iostream>
using namespace std;
int main(){
  cout<<"Start\n";
  try{
    cout<<"Inside try block"<<endl;
    cout<<"Still Inside try block"<<endl;
  }catch(int e){
    cout<<"Caught an exception -- value is: "<<e<<endl;
  }
  cout<<"End"<<endl;
  return 0;
}
