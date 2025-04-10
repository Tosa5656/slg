#include "args/args.h"

ArgsManager::ArgsManager(int argc, char *argv[])
{
    m_ArgsCount = argc-1;
    for(int i = 1; i < argc; i++)
    {
        m_Args.push_back(argv[i]);
    }
}

std::string ArgsManager::getArg(int index)
{
    if(index <= m_ArgsCount-1)
    {
        return m_Args[index];
    }
    else
    {
        std::cerr << "Index " << index << " out of range!" << std::endl;
        return "";
    }
}

std::vector<std::string> ArgsManager::getArgs()
{
    return m_Args;
}

int ArgsManager::getArgsCount()
{
    return m_ArgsCount;
}

bool ArgsManager::checkFlag(std::string flag)
{
    for(int i = 0; i < m_ArgsCount; i++)
    {
        if(m_Args[i] == flag) return true;
    }
    return false;
}