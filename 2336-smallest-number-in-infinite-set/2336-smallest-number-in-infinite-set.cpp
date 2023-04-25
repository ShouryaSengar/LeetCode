class SmallestInfiniteSet {
public:
    SmallestInfiniteSet() {
        next_num = 1;
    }
    
    int popSmallest() {
        if (!added_back_heap.empty()) {
            int smallest = added_back_heap.top();
            added_back_heap.pop();
            added_back_set.erase(smallest);
            return smallest;
        }
        
        int num_to_return = next_num;
        next_num++;
        return num_to_return;
    }
    
    void addBack(int num) {
        if (num < next_num && added_back_set.find(num) == added_back_set.end()) {
            added_back_set.insert(num);
            added_back_heap.push(num);
        }
    }

private:
    int next_num;
    std::priority_queue<int, std::vector<int>, std::greater<int>> added_back_heap;
    std::set<int> added_back_set;
};