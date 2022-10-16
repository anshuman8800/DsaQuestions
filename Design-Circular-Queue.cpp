class MyCircularDeque {
    vector<int> q;
    int front, rear, k, cnt;
public:
    MyCircularDeque(int k) {
        front = k - 1;
        rear = 0;
        this->k = k;
        q = vector<int>(k, 0);
        cnt = 0;
    }
    
    bool insertFront(int value) {
        if(cnt == k) return false;
        q[front] = value;
        front = (front - 1 + k) % k;
        cnt++;
        return true;
    }
    
    bool insertLast(int value) {
        if(cnt == k) return false;
        q[rear] = value;
        rear = (rear + 1) % k;
        cnt++;
        return true;
    }
    
    bool deleteFront() {
        if(cnt == 0) return false;
        front = (front + 1) % k;
        cnt--;
        return true;
    }
    
    bool deleteLast() {
        if(cnt == 0) return false;
        rear = (rear - 1 + k) % k;
        cnt--;
        return true;
    }
    
    int getFront() {
        if(cnt == 0) return -1;
        return q[(front + 1) % k];
    }
    
    int getRear() {
        if(cnt == 0) return -1;
        return q[(rear - 1 + k) % k];
    }
    
    bool isEmpty() {
        return cnt == 0;
    }
    
    bool isFull() {
        return cnt == k;
    }
};
