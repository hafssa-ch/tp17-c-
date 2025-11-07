
#include "Config.h"

Config::Config() {
    data["user"] = "admin";
    data["password"] = "1234";
}

std::string Config::get(const std::string& key) const {
    auto it = data.find(key);
    if(it != data.end()) return it->second;
    return "";
}
