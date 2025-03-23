#include <iostream>
#include <preparation/preparation.h>
#include <args/args.h>

int main(int argc, char *argv[])
{
    ArgsManager args(argc, argv);
    if(args.getArgsCount() == 0) { std::cerr << "No project name args!" << std::endl; return -1; };
    
    std::string project_name = args.getArg(0);
    std::string work_dir = project_name + "/";

    Preparation preparation(work_dir);
}