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

// Syntax
#include "../include/src/Syntax/Syntax.hpp"

// Main
#include "../include/src/Elitebuild.hpp"


std::string 
Syntax::CommentLine()
{
	
}

std::string
SyntaxModel::Path()
{
	std::string path = getenv("PWD");
	path.append("Elitefile");
	return path;
}


std::string 
SyntaxModel::EraseAllSubString(std::string & mainString, const std::string & erase);
{
    size_t pos = std::string::npos;
    while((pos = mainString.find(erase)) != std::string::npos)
    {
        mainString.erase(pos, erase.length());
    }
    return mainString;
}














