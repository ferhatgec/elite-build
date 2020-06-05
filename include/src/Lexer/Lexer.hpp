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
	
	// Integration 
	std::string System = "system";
	std::string SetEnvironmentName = "setname";
	std::string SetEnvironmentNameTo = "setto";
	std::string GetEnvr = "getenvr";
	
	// Sign
	std::string EqualsSign = "=";
	std::string NumberSign = "#";
		
	// Quotation Marks
	std::string QuotationMarks = "\"";

	// Whitespace
	std::string Whitespace = " ";
};

class Lexer {
	LexerKeywords keywords;
public:
	std::string FCommentLines() { return keywords.CommentLines; }
	std::string FMultiLineCommentLinesBegin() { return keywords.MultiLineCommentLinesBegin; }
	std::string FMultiLineCommentLinesEnd() { return keywords.MultiLineCommentLinesEnd; }
	std::string FPrintlnf() { return keywords.Printlnf; }
	std::string FBracketsBegin() { return keywords.BracketsBegin; }
	std::string FBracketsEnd() { return keywords.BracketsEnd; }
	std::string FQuotationMarks() { return keywords.QuotationMarks; }
	std::string FSystem() { return keywords.System; }
	std::string FEqualsSign() { return keywords.EqualsSign; }
	std::string FSetEnvironmentName() { return keywords.SetEnvironmentName; }
	std::string FSetEnvironmentNameTo() { return keywords.SetEnvironmentNameTo; }
	std::string FGetEnvr() { return keywords.GetEnvr; }
};




#endif // LEXER_HPP
