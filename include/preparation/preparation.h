#include <iostream>
#include <fstream>
#include <filesystem>
#include <vector>

using namespace std::filesystem;

class Preparation
{
public:
    Preparation(std::string work_dir);
private:
    bool CreateMainDir();
    bool CreateMainHeader();

    std::string m_WorkDir;
};