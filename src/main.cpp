#include "../include/store.h"

int main() {
    LOG("🔥 Redis-Lite Starting..."); 

    Store db;

    db.set("user", "ega");
    String val = db.get("user");
    
    LOG("Got value: " + val);

    if (db.del("user")) {
        LOG("User deleted successfully");
    }

    return 0;
}