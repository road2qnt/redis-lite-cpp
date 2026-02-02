#include "../include/store.h"

Store::Store() {
    LOG("Store initialized"); 
}

void Store::set(const String& key, const String& value) {
    data[key] = value;
}

String Store::get(const String& key) {
    if (data.find(key) != data.end()) {
        return data[key];
    }
    return "(nil)";
}

bool Store::del(const String& key) {
    bool result = data.erase(key) > 0;
    if (result) {
        LOG("Deleted key: " + key);
    }
    return result;
}

bool Store::exists(const String& key) {
    return data.find(key) != data.end();
}