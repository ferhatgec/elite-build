/*# MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#*/

#ifndef SYNTAX_HPP
#define SYNTAX_HPP

#include "../Elitebuild.hpp"
#include <fstream>

class Syntax {
public:
    std::string CommentLine();
};

class SyntaxModel {
public:
    SyntaxModel() {}
    ~SyntaxModel() {} 
    
    std::string line;
    
    // Path
    std::string Path() { 
    	std::string path = getenv("PWD");
    	path.append("/");
	path.append("Elitefile");
	return path;
    }
    
    // Elitefile Read Function
    void ReadElitefile() {
    	std::ifstream readfile(Path());
    	 if(readfile.is_open()) {
		while (std::getline(readfile, line)) {
    			printlnf(line.c_str());
    			Slashn
    		}
    	}
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
    
    /*bool FindAllSubString(std::string & mainString, const std::string & findstr) {
        size_t pos = std::string::npos;
    	while((pos = mainString.find(findstr)) != std::string::npos)
    	{
    	    return true;
    	}
    } */   
};


#endif // SYNTAX_HPP
