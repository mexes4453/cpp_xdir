#include "../inc/xdir.hpp"

namespace fs = std::filesystem;

void XDIR__ListDir(std::string &path, std::vector<std::string> &vStr)
{
    fs::path dirPath = path;
    std::ostringstream oss;
    std::string        strEntries;

    if (fs::exists(dirPath))
    {
        std::cout << "Director exist" << std::endl;
        for (fs::directory_entry const &dirent : fs::directory_iterator{dirPath})
        {   
            oss.clear();
            oss << dirent;
        }
        strEntries = oss.str();
        XSTRING__Split(vStr, strEntries, '"');
    }

    if (vStr.size())
    {
        for (std::size_t idx; idx < vStr.size(); idx++)
        {
            XSTRING__StripWhiteSpace(vStr.at(idx));
        }
    }
}




void XDIR__CopyFile(std::string const pathDst, std::string const pathSrc)
{
    fs::copy_options cpyOpt = fs::copy_options::overwrite_existing;
    fs::copy_file(pathSrc, pathDst, cpyOpt);
}




std::string XDIR__DirName(std::string &pathFile)
{
    int unsigned posFound = 0;
    std::string dirName = "";

    posFound = pathFile.rfind("/");
    if (posFound != std::string::npos)
    {
        dirName = pathFile.substr(0,posFound);
    }
    else
    {
        dirName = pathFile;
    }
    return (dirName);
}




std::string XDIR__BaseName(std::string &pathFile)
{
    int unsigned posFound = 0;
    std::string baseName = "";

    posFound = pathFile.rfind("/");
    if (posFound != std::string::npos)
    {
        baseName = pathFile.substr(posFound + 1);
    }
    else
    {
        baseName = pathFile;
    }
    return (baseName);
}




std::string XDIR__ExtName(std::string &pathFile)
{
    int unsigned posFound = 0;
    std::string extName = "";

    posFound = pathFile.rfind(".");
    if (posFound != std::string::npos)
    {
        extName = pathFile.substr(posFound);
    }
    else
    {
        extName = pathFile;
    }
    return (extName);
}




bool XDIR__IsFileExist(std::string &pathFile)
{
    bool ret = false;

    ret = fs::exists(pathFile);

    return (ret);
}