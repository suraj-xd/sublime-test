// abstract classes: polymorphism

class LRUCache : public Cache {
public:
    LRUCache(size_t capacity)
    {
        cp = capacity;
        tail = 0;
        head = 0;
    }
    
    ~LRUCache() {
        while(tail) {
            auto node = tail;
            tail = tail->prev;
            delete node;
        }
    }
    
    // Set/insert the value off the key, if present, otherwise
    // add the key as the most recently used key. If the cache
    // has reached its capacity, it should replace the least
    // recently used key with a new key.
    void set(int key, int value) {
        Node* node;
        auto it = mp.find(key);
        if(mp.end() == it) {
            if(mp.size() < cp) {
                node = new Node(key, value);
                if(tail) {
                    tail->next = node;
                    node->prev = tail;
                } else {
                    tail = node;
                    head = node;
                }
            } else {
                node = tail;
                mp.erase(tail->value);
            }
            mp.insert(make_pair(key, node));
        } else {
            node = it->second;
        }
        node->key = key;
        node->value = value;
        set_mru(node);
    }
    
    // Get the value (will always be positive) of the key
    // if the key exists in the cache and then make that key
    // as the most recently used key; otherwise, return -1.
    int get(int key) {
        auto it = mp.find(key);
        if(mp.end() == it)
            return -1;

        auto node = it->second;
        set_mru(node);
        return node->value;
    }

private:
    void set_mru(Node* node) {
        if(node->next) {
            node->next->prev = node->prev;
        }
        if(node->prev) {
            node->prev->next = node->next;
        }
        if(tail == node)
            tail = node->prev;
        node->prev = 0;
        node->next = head;
        head = node;
    }
};