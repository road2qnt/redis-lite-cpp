#include "../include/parser.h"
#include <sstream>

Strings Parser::parse(const String& input) {
    Strings tokens;
    std::stringstream ss(input);
    String segment;

    while (std::getline(ss, segment, ' ')) {
        if (!segment.empty()) {
            tokens.push_back(segment);
        }
    }
    
    return tokens;
}