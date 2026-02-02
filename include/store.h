#ifndef STORE_H
#define STORE_H

#include "common.h" 
#include <unordered_map>

class Store {
private:
    std::unordered_map<String, String> data; 

public:
    Store();
    
    void set(const String& key, const String& value);
    String get(const String& key);
    bool del(const String& key);
    bool exists(const String& key);
};

#endif