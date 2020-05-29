/*# MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#*/

#include <File/File.hpp>
#include <iostream>
#include <cstring>
#include <unistd.h>

char*
File::Path()
{
    char * cwd;
    cwd = (char*) malloc( FILENAME_MAX * sizeof(char) );
    getcwd(cwd,FILENAME_MAX);    
    return cwd;
}

