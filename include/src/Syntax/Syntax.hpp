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
    // Path
    std::string Path();
    
    // Erase Function 
    std::string EraseAllSubString(std::string & mainString, const std::string & erase);
    
};


#endif // SYNTAX_HPP
