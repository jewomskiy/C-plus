
#ifndef TASK2_C_QUEUE_H
#define TASK2_C_QUEUE_H


class Queue {
private:
    int* arr;
    int buffer;
    int length;
    int iEnd;
    int iBegin;
public:
    Queue(int);
    Queue(const Queue&);
    void add(int);
    int pop();
    int get() const;
    int size() const;
    void empty();
    bool isEmpty();
};


#endif //TASK2_C_QUEUE_H
