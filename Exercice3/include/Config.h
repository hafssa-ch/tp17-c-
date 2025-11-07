
#ifndef CONFIG_H
#define CONFIG_H

#include <string>
#include <map>

class Config {
private:
    std::map<std::string, std::string> data;
public:
    Config();
    std::string get(const std::string& key) const;
};

#endif
