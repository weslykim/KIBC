#include <stdio.h>
static int queue[100];
static int rear; // 들어갈 위치
static int front; // 빼낼 위치

void push(int data)
{
    queue[rear] = data;
    ++rear;
}

int pop(void)
{
    int i = front;
    ++front;
    return queue[i];    // return 뒤에 front 값이 증가해야 하기 때문에, 임시변수 i를 써서 증가되기 전 front값을 빼낸다.
}
