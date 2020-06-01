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

class FLanguage {
public:
    // Keywords
    std::string name;

    std::string EraseAllSubString(std::string & mainString, const std::string & erase)
    {
    size_t pos = std::string::npos;
    while((pos = mainString.find(erase)) != std::string::npos)
    {
        mainString.erase(pos, erase.length());
    }
    return mainString;
    }

    virtual void ReadFunc()
    {
    std::string line;
    float floatvar;
    std::string path = getenv("PWD");
    path.append("Elitefile");
    std::ifstream readfile(path.c_str());
    char* printstr;
    std::string sfname;
    std::string inputcommand;
    int finteger = 0;
    int f;
    if(readfile.is_open()) {

    while (std::getline(readfile, line))
    {
        if(line.find("slashn", 0) == 0) {
            slashn
        }

        if(line.find("integer", 0) == 0) {
            finteger = std::atoi(line.erase(0, 8).c_str());
        }
        if(line.find("#*", 0) == 0) {
            if(line.find("*#", 0) == 0) {
                printlnf("Found..\n");
            }
        }

        if(line == "return")
        {
            return;
        }

	if(line.find("(green)printlnf", 0) == 0)
	{
           std::string test = EraseAllSubString(line, "(green)printlnf(\"");
           std::cout << WBOLD_GREEN_COLOR << EraseAllSubString(test, "\");") << WBLACK_COLOR;
	}
	
	
	if(line.find("(red)printlnf", 0) == 0)
	{
           std::string test = EraseAllSubString(line, "(red)printlnf(\"");
           std::cout << WBOLD_RED_COLOR << EraseAllSubString(test, "\");") << WBLACK_COLOR;
	}
		
        if(line.find("printlnf", 0) == 0)
        {
           std::string test = EraseAllSubString(line, "printlnf(\"");
           std::cout << EraseAllSubString(test, "\");");
        }

        if (line.find("system", 0) == 0)
        {
            std::string test = EraseAllSubString(line, "system(\"");
            test = EraseAllSubString(test, "\");");
            if(test.rfind("fr", 0) == 0)
            {
            	test = EraseAllSubString(line, "fr ");
            	std::string path = "cd ";
            	path.append(test);
            	system(path.c_str());
            }
          //  run->RunFunction(test);
            std::cout << "RunFunction calling " + test;
            slashn
        }
    }

}

};


#endif // SYNTAX_HPP
