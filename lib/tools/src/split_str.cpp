/*
** EPITECH PROJECT, 2025
** Setup
** File description:
** split_str
*/

#include "tools.hpp"

std::vector<std::string> splitString(const std::string &str, char delimiter)
{
    std::vector<std::string> result;
    std::string token;

    for (char ch : str) {
        if (ch == delimiter) {
            if (!token.empty()) {
                result.push_back(token);
                token.clear();
            }
        } else {
            token += ch;
        }
    }
    if (!token.empty()) {
        result.push_back(token);
    }
    return result;
}
