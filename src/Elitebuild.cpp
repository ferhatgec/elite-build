/*# MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#*/


#include <iostream>
#include <ctype.h>
#include <memory>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>
#include <cstdio>
#include <algorithm>
#include <string.h>
#include <stdio.h>

#include "../include/src/Elitebuild.hpp"
#include "../include/src/Print/Print.hpp"
#include "../include/src/Help/Help.hpp"
#include "../include/src/File/File.hpp"

File path;

int main(int argc, char *argv[])
{
    char * pch;
    if(argc < 2) {
        printlnf(Help.c_str());
    //    path.FindElitefile();
        return 1;
    }
    for (int i = 0; i < argc; ++i) {
        pch = strstr(argv[i], "-v");
        if(pch)
        {
            printlnf(ELITEBUILD_VERSION);
            printlnf("-");
            printlnf(ELITE_BUILD_STATE);
            Slashn
        }
    }
    return 0;
}
