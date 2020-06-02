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
	
	// Brackets
	std::string BracketsBegin = "(";
	std::string BracketsEnd = ")";
	
	// Quotation Marks
	std::string QuotationMarks = "\"";
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
	std::string FBracketsBegin() {
		return keywords.BracketsBegin;
	}
	std::string FBracketsEnd() {
		return keywords.BracketsEnd;
	}
	std::string FQuotationMarks() {
		return keywords.QuotationMarks;
	}
};




#endif // LEXER_HPP
