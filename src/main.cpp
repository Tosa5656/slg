#include <iostream>
#include <args/args.h>

int main(int argc, char *argv[])
{
    ArgsManager args(argc, argv);
    if(args.getArgsCount() == 0) { std::cerr << "No project name args!" << std::endl; return -1; };
    
    std::string project_name = args.getArg(0);
}