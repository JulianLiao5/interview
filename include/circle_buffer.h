/*************************************************************************
	> File Name: circle_buffer.h
	> Author: 
	> Mail: 
	> Created Time: 2017年08月23日 星期三 17时03分16秒
 ************************************************************************/

#ifndef _CIRCLE_BUFFER_H
#define _CIRCLE_BUFFER_H

class CircleBuffer {
  public:
    CircleBuffer(int _bufSize);
    ~CircleBuffer();
    void Push(const unsigned char *dataBuf, int dataLen);
    void Pop(unsigned char *dataBuf, int dataLen);
    int Size();
  private:
    unsigned char *buf;
    int bufSize;

    // head points to the start of the buf, while tail points the end's next;
    int head;
    int tail;
};

#endif
