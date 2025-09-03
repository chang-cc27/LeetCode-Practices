class MinStack {
private:
    vector<pair<int,int>> st;
public:
    MinStack() {
        st.reserve(10000); // 預先配置空間，避免動態擴容
    }

    void push(int val) {
        if (st.empty()) st.push_back({val,val});
        else st.push_back({val, min(val, st.back().second)});
    }

    void pop() {
        st.pop_back();
    }

    int top() {
        return st.back().first;
    }

    int getMin() {
        return st.back().second;
    }
};
