//creating a exception class without inheriting exception class and catching the exception
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
  try{
  Test t;
}catch(MyException &e){
  e.show();
}

  cout<<endl<<"still running"<<endl;
  return 0;
}
