
#include<iostream>
using namespace std;
class Test{
public:
  Test(){
    throw runtime_error("error in code");
  }
};

int main(){
  try{
  Test t;
}catch(runtime_error &e){
  cout<<e.what();
}
  cout<<endl<<"still running"<<endl;
  return 0;
}
