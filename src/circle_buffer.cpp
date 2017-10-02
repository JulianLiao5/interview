/*************************************************************************
	> File Name: circle_buffer.cpp
	> Author: 
	> Mail: 
	> Created Time: 2017年08月23日 星期三 18时23分26秒
 ************************************************************************/

#include<iostream>
using namespace std;

CircleBuffer::CircleBuffer(int _bufSize) {
  bufSize = _bufSize;
  head = 0;
  tail = 0;
}

CircleBuffer::~CircleBuffer() {
  bufSize = 0;
  head = 0;
  tail = 0;
}

CircleBuffer::Push(const unsigned char *dataBuf, int dataLen) {
  memcpy(&buf[bufSize], dataBuf, dataLen);
  bufLen += dataLen;
}

CircleBuffer::Pop(unsigned char *dataBuf, int dataLen) {
  
  bufLen -= dataLen;
}

int CircleBuffer::Size() {
  return bufLen;
}
