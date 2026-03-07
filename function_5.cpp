#include <iostream>
using namespace std;

int *add (int a, int b){
  int value = a + b //2.（stack堆疊變數在此function執行完, 記憶體區塊消失）
  return &value; //傳出記憶體位址
}

int main(){
  int a = 6789;
  int b = 9876;
  int *value_ptr = add(a,b); //接收則是指標變數
  //2.指向未知區塊所以無解

  cout << "a+b=" << *value << '\n';

  //上下之value,a,b是不同的變數, 因為在不同的記憶體位址

}