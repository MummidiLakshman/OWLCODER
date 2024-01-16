class RandomizedSet {
public:
    unordered_set<int> us;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(us.find(val)!=us.end()) return false;
        us.insert(val);
        return true;
    }
    
    bool remove(int val) {
        if(us.find(val)==us.end()) return false;
        us.erase(val);
        return true;
    }
    
    int getRandom() {
        auto it=us.begin();
        advance(it,rand()%us.size());
        return *it;
    }
};
