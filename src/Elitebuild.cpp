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

// Print
#include "../include/src/Print/Colors.hpp"
#include "../include/src/Print/Print.hpp"

// Help
#include "../include/src/Help/Help.hpp"

// File
#include "../include/src/File/File.hpp"

// Main
#include "../include/src/Elitebuild.hpp"

File path;

int main(int argc, char *argv[])
{
    path.FindElitefile("/home/fegeya/Desktop/elite-build");
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
            BOLD_YELLOW_COLOR
            printlnf(ELITEBUILD_VERSION);
            BOLD_GREEN_COLOR
            printlnf("-");
            BOLD_CYAN_COLOR
            printlnf(ELITE_BUILD_STATE);
            BLACK_COLOR
            Slashn
        }
    }
    return 0;
}
