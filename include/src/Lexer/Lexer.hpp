/*# MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#*/

#ifndef LEXER_HPP
#define LEXER_HPP

#include "../Elitebuild.hpp"
#include "../Syntax/Syntax.hpp"
#include "../Print/Print.hpp"
#include "../Print/Colors.hpp"

struct LexerKeywords {
public:
	// Comments
	std::string CommentLines = "//";
	std::string MultiLineCommentLinesBegin = "/-";
	std::string MultiLineCommentLinesEnd = "-/";
	
	// Printlnf
	std::string Printlnf = "printlnf";
};

class Lexer {
	LexerKeywords keywords;
public:
	std::string FCommentLines() {
		return keywords.CommentLines;
	}
	
	std::string FMultiLineCommentLinesBegin() {
		return keywords.MultiLineCommentLinesBegin;	
	}
	std::string FMultiLineCommentLinesEnd() {
		return keywords.MultiLineCommentLinesEnd;
	}
	std::string FPrintlnf() {
		return keywords.Printlnf;
	}
};




#endif // LEXER_HPP
