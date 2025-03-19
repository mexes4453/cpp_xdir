
#ifndef XDIR_HPP
# define XDIR_HPP

# include <filesystem>
# include <vector>
# include <string>
#include <iostream>
#include <sstream>

void        XDIR__ListDir(std::string &path, std::vector<std::string> &vStr);
void        XDIR__CopyFile(std::string const pathDst, std::string const pathSrc);
std::string XDIR__DirName(std::string &pathFile);
std::string XDIR__BaseName(std::string &pathFile);
std::string XDIR__ExtName(std::string &pathFile);
bool        XDIR__IsFileExist(std::string &pathFile);

#endif /* XDIR_HPP */