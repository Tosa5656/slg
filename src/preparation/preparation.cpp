#include "preparation/preparation.h"

Preparation::Preparation(std::string work_dir)
{
    m_WorkDir = work_dir;

    CreateMainDir();
    CreateMainHeader();
}

bool Preparation::CreateMainDir()
{
    if(!exists(m_WorkDir))
    {
        create_directory(m_WorkDir);
        return true;
    }
    else
    {
        std::cerr << "Directory already exists!" << std::endl;
        return false;
    }
}

bool Preparation::CreateMainHeader()
{
    std::ofstream ofs;
    ofs.open(m_WorkDir + "lib.h");

    ofs << "#include <slg.h>\n\nextern 'C'\n{\n\n}" << std::endl;

    ofs.close();
    return true;
}