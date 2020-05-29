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

int main(int argc, char** argv)
{
    if(argc < 2) {
        printlnf(Help.c_str());
        return 1;
    }
    return 0;
}
