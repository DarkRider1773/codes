//creating a exception class without inheriting exception class and not catching the exception
#include<iostream>
using namespace std;
class MyException{
public:
  void show(){
    cout<<"Exception is caught"<<endl;
  }
};
class Test{
public:
  Test(){
    throw MyException();
  }
};

int main(){
  Test t;
  cout<<endl<<"still running"<<endl;
  return 0;
}
