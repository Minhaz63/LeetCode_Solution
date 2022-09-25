class MyCircularQueue {
private:
    int curr=-1;
    int f=0;
    int qs=0;
    int size=0;
    vector<int> que;
public:
    
    MyCircularQueue(int k) {
        size=k;
     que.resize(k);
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        curr++;
        curr=curr%size;
        que[curr]=value;
        qs++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        f++;
        f=f%size;
        qs--;
        return true;
    }
    
    int Front() {
        if(isEmpty())
            return -1;
        return que[f];
    }
    
    int Rear() {
        if(isEmpty())
            return -1;
        return  que[curr];
    }
    
    bool isEmpty() {
        if(qs==0)
            return true;
        return false;
    }
    
    bool isFull() {
        if(qs==size)
            return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */