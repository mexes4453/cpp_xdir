#include "../inc/xdir.hpp"

int main(void)
{
    std::string pSrc("../src");
    std::vector<std::string> vStr;
    XDIR__ListDir(pSrc, vStr);
    std::cout << vStr.size() << std::endl;
    for (int unsigned x=0; x<vStr.size(); x++)
    {
        std::cout << vStr.at(x) << std::endl;
    }


}