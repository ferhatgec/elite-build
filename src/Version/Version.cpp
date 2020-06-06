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
#include <Version/Version.hpp>
#include <Syntax/Syntax.hpp>

const std::string compilation_date = __DATE__;
const std::string compilation_time = __TIME__;

SyntaxModel remove_model; // For EraseAllSubString
std::string ftime(compilation_time); // Convert

std::string 
Version::VersionGenerator() {
	return "elitev" + remove_model.EraseAllSubString(ftime, ":");
};


void 
Version::PrintVersion() {
	BOLD_YELLOW_COLOR
        printlnf(ELITEBUILD_VERSION);
        BOLD_GREEN_COLOR
        printlnf("-");
        BOLD_CYAN_COLOR
        printlnf(ELITE_BUILD_STATE);
        BOLD_BLUE_COLOR
        printlnf("-");
        BOLD_MAGENTA_COLOR
        printlnf(VersionGenerator().c_str());
        BLACK_COLOR
        Slashn
}

