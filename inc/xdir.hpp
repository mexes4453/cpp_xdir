
#ifndef XDIR_HPP
# define XDIR_HPP

# include <filesystem>
# include <vector>
# include <string>
# include <iostream>
# include <sstream>
# include "../xlib/xstring/inc/xstring.hpp"

/**
 * @brief List all the entries within a directory given the dir path
 * 
 * @param path 
 * @param vStr 
 */
void        XDIR__ListDir(std::string &path, std::vector<std::string> &vStr);



/**
 * @brief Create a file copy even when the same name exist.
 * @warning This method would overwrite the file with same name.
 * 
 * @param pathDst 
 * @param pathSrc 
 */
void        XDIR__CopyFile(std::string const pathDst, std::string const pathSrc);




/**
 * @brief Get the only the directory path from a file path [/c/tmp]/file.txt
 * 
 * @param pathFile 
 * @return std::string 
 */
std::string XDIR__DirName(std::string &pathFile);





/**
 * @brief Get the only the file name from a file path /c/tmp/[file.txt]
 * 
 * @param pathFile 
 * @return std::string 
 */
std::string XDIR__BaseName(std::string &pathFile);




/**
 * @brief Get the only the extension from file name or file path /c/tmp/file[.txt]
 * 
 * @param pathFile 
 * @return std::string 
 */
std::string XDIR__ExtName(std::string &pathFile);




/**
 * @brief returns true if a file or directory exist given its path.
 * 
 * @param pathFile 
 * @return true 
 * @return false 
 */
bool        XDIR__IsFileExist(std::string &pathFile);

#endif /* XDIR_HPP */