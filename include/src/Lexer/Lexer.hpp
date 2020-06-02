/*# MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#*/

#ifndef LEXER_HPP
#define LEXER_HPP

#include "../Elitebuild.hpp"
#include "../Syntax/Syntax.hpp"

struct LexerKeywords {
public:
	std::string CommentLines = "//";
	std::string MultiLineCommentLinesBegin = "/-";
	std::string MultiLineCommentLinesEnd = "-/";
};

class Lexer {
	SyntaxModel model;
public:
	
};




#endif // LEXER_HPP
