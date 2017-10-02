/*************************************************************************
	> File Name: test_circle_buffer.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年08月23日 星期三 18时21分42秒
 ************************************************************************/

#include<iostream>

#include "circle_buffer.h"

using namespace std;

int main(int argc, char *argv[]) {

  const int bufSize = 1024;

  CircleBuffer* cBuffer = new CircleBuffer(bufSize);

  unsigned char *testBuf1;
  for(unsigned char i = 0; i<100;i++) {
    testBuf1[i] = i;
  }

  cBuffer.Push(testBuf1, 100);

  unsigned char *testBuf2;
  for(int i = 0; i<10;i++) {
    testBuf2[i] = i;
  }

  cBuffer.Pop(testBuf2, 10);

  unsigned char *testBuf3;
  cBuffer.Pop(testBuf3, 40);

  cout<<__LINE__<<"size: "<<cBuffer.size()<<endl;

  unsigned char *testBuf4;
  cBuffer.Pop(testBuf4, 20);

  cout<<__LINE__<<"size: "<<cBuffer.size()<<endl;
  

  return 0;
}
