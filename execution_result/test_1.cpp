/*************************************************************************
	> File Name: test_1.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年08月24日 星期四 10时01分56秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(int argc, char *argv[]) {
  unsigned char half_limit = 150;
  int counter = 0;
  cout<<"BEGIN..."<<endl;
  unsigned char i;
  for(i = 0; i < (2 * half_limit); i++) {
    counter++;
  }
  cout<<"END..., i: "<<i<<", counter: "<<counter<<endl;
  return 0;
}
