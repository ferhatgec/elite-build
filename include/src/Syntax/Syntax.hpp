/*# MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#*/

#ifndef SYNTAX_HPP
#define SYNTAX_HPP

#include "../Print/Print.hpp"
#include "../Print/Colors.hpp"
#include "../Lexer/Lexer.hpp"
#include "../Elitebuild.hpp"
#include <fstream>

class Syntax {
public:
    std::string CommentLine();
};

class SyntaxModel {
	LexerKeywords keywords;
	Lexer lex;
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
        
    // Erase Function 
    std::string EraseAllSubString(std::string & mainString, const std::string & erase) {
        size_t pos = std::string::npos;
    	while((pos = mainString.find(erase)) != std::string::npos)
    	{
    	    mainString.erase(pos, erase.length());
    	}
    	return mainString;
    }
    
    // Elitefile Read Function
    void ReadElitefile() {
    	std::ifstream readfile(Path());
    	 if(readfile.is_open()) {
		while (std::getline(readfile, line)) {
			if(line.rfind(keywords.CommentLines, 0) == 0) {
				line.erase(0, line.length());
				lex.FCommentLines();
			}
			
			if(line.rfind(keywords.Printlnf + keywords.Whitespace, 0) == 0) {
					std::cout << EraseAllSubString(line, keywords.Printlnf + keywords.Whitespace);
			} else if(line.rfind(keywords.Printlnf + keywords.Whitespace, 0) == 0) {
				BOLD_RED_COLOR
				printlnf("Please put Whitespace front printlnf\n");
				BLACK_COLOR 
			}
    		}
    	}
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
