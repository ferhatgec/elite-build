/*# MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#*/

#ifndef FILE_HPP
#define FILE_HPP

#include "../Elitebuild.hpp"

/*std::string FileName = "Elitefile";

std::string EraseAllSubString(std::string & mainString, const std::string & erase)
{
    size_t pos = std::string::npos;
    while((pos = mainString.find(erase)) != std::string::npos)
    {
        mainString.erase(pos, erase.length());
    }
    return mainString;
}*/

class File {
public:
    virtual char* Path();
    virtual void FindElitefile(); // PWD
    std::string GetCurrentWorkingDir();
};



#endif // FILE_HPP
