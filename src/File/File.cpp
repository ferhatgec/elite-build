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
#include <Print/Colors.hpp>

#ifdef WINDOWS
#include <direct.h>
#define GetCurrentDir _getcwd
#else
#include <unistd.h>
#define GetCurrentDir getcwd
#endif

std::string 
GetCurrentWorkingDir( void ) {
  char buff[FILENAME_MAX];
  GetCurrentDir( buff, FILENAME_MAX );
  std::string current_working_dir(buff);
  return current_working_dir;
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
    directory = opendir(getenv("PWD"));
    if(directory == NULL) {
        printlnf("ERR: DIRECTORY NOT FOUND OR NULL\n");
        return;
    }
    while ((entryname = readdir(directory)))
    {
        stat(entryname->d_name, &filestat);
        if(strstr(entryname->d_name, "Elitefile"))
        {
            WHITE_COLOR
            printlnf("%4s: %s\n", "Elitefile found!", entryname->d_name);
        }   	
        BLACK_COLOR // Reset
    }
    closedir(directory);
}




















