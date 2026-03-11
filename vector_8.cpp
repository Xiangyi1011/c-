#include <iostream>
#include <vector>

using namespace std;

//srandom()亂數種子, random()產生亂數

void print(const vector<int> &v){
  for(int elem:v){
    cout << elem << " ";
  }
  cout << "元素數量：" << v.size() << '\n';
}

void make_random(vector<int> &v, int size){ //專門製造亂數的function
  v.clear();
  int n = random() % size + 1; //產生0+1~19+1的亂數
  for(int i=0; i<n; i++){
    v.push_back(random());
  }
}

int main(){
  srandom(10); //
  vector<int> list; //實體方法clear(), 將元素全部刪除
  cout << "vector初始化" << '\n';
  print(list);
  cout << "====================" << '\n';

  cout << "第一次make_random" << '\n';
  make_random(list, 20);
  print(list);
  cout << '\n';
  cout << "===========" << '\n';
  
  cout << "第二次make_random" << '\n';
  make_random(list, 5);
  print(list);
  cout << '\n';
  cout << "===========" << '\n';
}