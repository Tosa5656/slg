#pragma once

#include <iostream>
#include <vector>

class ArgsManager
{
public:
    ArgsManager(int argc, char *argv[]);
    std::string getArg(int index);
    std::vector<std::string> getArgs();
    int getArgsCount();

    std::string checkVar(std::string var);
    bool checkFlag(std::string flag);
private:
    int m_ArgsCount;
    std::vector<std::string> m_Args;
};