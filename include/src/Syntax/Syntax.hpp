/*# MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#*/

#ifndef SYNTAX_HPP
#define SYNTAX_HPP

#include "../Elitebuild.hpp"

class Syntax {
public:
    std::string CommentLine();
};

class SyntaxModel {
public:
    SyntaxModel() {}
    ~SyntaxModel() {} 
    
    // Path
    std::string Path() { 
    	std::string path = getenv("PWD");
    	path.append("/");
	path.append("Elitefile");
	return path;
    }
    
    // Erase Function 
    std::string EraseAllSubString(std::string & mainString, const std::string & erase) {
        size_t pos = std::string::npos;
    	while((pos = mainString.find(erase)) != std::string::npos)
    	{
    	    mainString.erase(pos, erase.length());
    	}
    	return mainString;
    }    
};


#endif // SYNTAX_HPP
