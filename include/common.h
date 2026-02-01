#ifndef COMMON_H
#define COMMON_H

#include <iostream>
#include <string>
#include <vector>

#define LOG(msg) \
    std::cout << "[INFO] [" << __FILE__ << ":" << __LINE__ << "] " << msg << std::endl


#define LOG_ERR(msg) \
    std::cerr << "[ERROR] [" << __FILE__ << ":" << __LINE__ << "] " << msg << std::endl

using String = std::string;
using Strings = std::vector<std::string>;

#endif