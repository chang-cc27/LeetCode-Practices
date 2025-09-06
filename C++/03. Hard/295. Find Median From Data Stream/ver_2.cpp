class MedianFinder {
private:
    multiset<int> sorted_num;
    multiset<int>::iterator mid;
public:
    MedianFinder() {}
    
    void addNum(int num) {
        sorted_num.insert(num);
        if(sorted_num.size() == 1) mid = sorted_num.begin();
        else if (num < *mid) {
            if(sorted_num.size()%2 == 0) mid--;
        }
        else {
            if(sorted_num.size()%2 == 1) mid++;
        }
        
    }
    
    double findMedian() {
        if(sorted_num.size()%2 == 0)
            return (*mid + *next(mid)) / 2.0;
        else
            return *mid;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
