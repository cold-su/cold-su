struct dll { // Double Linked List
    int k, v;
    dll* prev;
    dll* next;

    dll(int key = -1, int value = -1) {
        k = key;
        v = value;
        prev = nullptr;
        next = nullptr;
    }
};

class LRUCache {
private:
    unordered_map<int, dll*> m;
    int c;
    dll* head = new dll();
    dll* tail = new dll();

    void orphan(dll* ptr) {
        auto next = ptr->next, prev = ptr->prev;
        next->prev = prev;
        prev->next = next;
    }

    void active(dll* ptr) {
        orphan(ptr);
        add(ptr);
    }

    void add(dll* ptr) {
        auto next = head->next;
        next->prev = ptr;
        head->next = ptr;
        ptr->next = next;
        ptr->prev = head;

    }

    void evict(dll* ptr) {
        orphan(ptr);
        m.erase(ptr->k);
        delete ptr;
    }

public:
    LRUCache(int capacity) {
        c = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if (m.find(key) != m.end()) {
            active(m[key]);
            return m[key]->v;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if (m.find(key) != m.end()) {
            m[key]->v = value;
            active(m[key]);
        } else {
            m[key] = new dll(key, value);
            add(m[key]);
        }
        if (m.size() > c) {
            evict(tail->prev);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
