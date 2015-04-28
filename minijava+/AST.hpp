#ifndef _AST_H
#define _AST_H 1

#include "includes.hpp"
#include "xdefs.hpp"
#include "visitor.hpp"

class ASTNode {
public:
	ASTNode() { }
	virtual ~ASTNode() { }
	virtual void accept(Visitor& v) { v.visit(*this); }

	virtual XTypes get_type() = 0;
	virtual void set_lineno(int ln) = 0;
	virtual int get_lineno() = 0;
	virtual void dump() = 0;
};

class ASTRootNode : public ASTNode {
public:
	ASTRootNode() { }
	~ASTRootNode() { }
	void accept(Visitor& v) { v.visit(*this); }

	XTypes get_type() { return XNone; }
	void set_lineno(int ln) {}
	int get_lineno() { return 0; }
	void dump() {}

public:
	ASTNode * node1;
	ASTNode * node2;
};

class ASTMainNode : public ASTNode  {
public:
	ASTMainNode() { }
	~ASTMainNode() { }
	void accept(Visitor& v) { v.visit(*this); }

	XTypes get_type() { return XNone; }
	void set_lineno(int ln) {}
	int get_lineno() { return 0; }
	void dump() {}

public:
	ASTNode * node1;
	ASTNode * node2;
	ASTNode * node3;
};

class ASTClassNode : public ASTNode  {
public:
	ASTClassNode() { }
	~ASTClassNode() { }
	void accept(Visitor& v) { v.visit(*this); }

	XTypes get_type() { return XNone; }
	void set_lineno(int ln) {}
	int get_lineno() { return 0; }
j	void dump() {}

public:
	ASTNode * node1;
	ASTNode * node2;
	ASTNode * node3;
	ASTNode * node4;
};

class ASTVarDeclNode : public ASTNode  {
public:
	ASTVarDeclNode() { }
	~ASTVarDeclNode() { }
	void accept(Visitor& v) { v.visit(*this); }

	XTypes get_type() { return XNone; }
	void set_lineno(int ln) {}
	int get_lineno() { return 0; }
j	void dump() {}

public:
	ASTNode * node1;
	ASTNode * node2;
};
