#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int> &v){
  for(int elem:v){
    cout << elem << " ";
  }
  cout << '\n';
}

int main(){
  vector<int> list;
  cout << "vector初始化" << '\n';
  print(list);
}