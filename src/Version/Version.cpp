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















