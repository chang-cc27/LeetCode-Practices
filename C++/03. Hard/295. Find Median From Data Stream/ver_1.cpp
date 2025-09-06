class MedianFinder {
private:
    priority_queue<int> lower;   // max_heap
    priority_queue<int, vector<int>, greater<int>> upper;    // min_heap
public:
    MedianFinder() {}
    
    void addNum(int num) { 
        if(lower.empty() || num <= lower.top()) {
            lower.push(num);
        }
        else {
            upper.push(num);
        }
        if (upper.size() > lower.size() + 1) {
            lower.push(upper.top());
            upper.pop();
        } else if (lower.size() > upper.size() + 1) {
            upper.push(lower.top());
            lower.pop();
        } 
    }
    
    double findMedian() {
        if (upper.size() > lower.size())
            return upper.top();
        else if (upper.size() < lower.size())
            return lower.top();
        else
            return (upper.top() + lower.top()) / 2.0;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
