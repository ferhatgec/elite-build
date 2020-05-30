/*# MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#*/

#include <File/File.hpp>
#include <iostream>
#include <cstring>
#include <unistd.h>
#include <Print/Print.hpp>
#include <unistd.h>
#include <sys/stat.h>
#include <dirent.h>
#include <sys/types.h>
#include <stdio.h> 

std::string 
File::GetCurrentWorkingDir()
{
    std::string cwd("\0",FILENAME_MAX+1);
    return getcwd(&cwd[0],cwd.capacity());
}

char*
File::Path()
{
    char * cwd;
    cwd = (char*) malloc(FILENAME_MAX * sizeof(char));
    getcwd(cwd,FILENAME_MAX);
    return cwd;
}

void
File::FindElitefile(const char *path)
{
    struct stat filestat;
    struct dirent *entryname;
    DIR *directory;
    directory = opendir(path);
    if(directory == NULL) {
        printlnf("ERR: DIRECTORY NOT FOUND OR NULL\n");
        return;
    }
    while ((entryname = readdir(directory)))
    {
        stat(entryname->d_name, &filestat);
        if(strstr(entryname->d_name, "Elitefile"))
        {
            printlnf("%4s: %s\n", "Elitefile found!", entryname->d_name);
        } else {
            printlnf("Elitefile not found!");
        }
    closedir(directory);
    }
}

