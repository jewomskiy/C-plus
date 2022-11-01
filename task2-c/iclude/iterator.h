
#ifndef TASK2_C_ITERATOR_H
#define TASK2_C_ITERATOR_H

#include "queue.h"
class Iterator{
private:
    Queue q;
    int index;
    int length;
public:
    Iterator(Queue&);
    void start();
    void next();
    bool finish();
    int getValue();
};


#endif //TASK2_C_ITERATOR_H
