#ifndef _ASTUTILS_H
#define _ASTUTILS_H 1

#include "includes.hpp"
#include "SymbolTable.hpp"
#include "AST.hpp"

namespace ASTUtils {

	void init_ast_utils(SymbolTable &st);

	bool get_varsok();

	ASTNode * get_root_node();

	void set_root_node(ASTNode* rn);

	void push_scope();

	void pop_scope();

	void set_ast_root(ASTNode *);

	ASTNode * mk_tree_root(ASTNode * node1, ASTNode * node2);
	ASTNode * mk_main_node(ASTNode * node1, ASTNode * node2, ASTNode * node3);
	ASTNode * mk_class_decl_node(ASTNode * node1, ASTNode * node2, ASTNode * node3, ASTNode * node4);
	ASTNode * mk_var_decl_list_node(ASTNode * node1, ASTNode * node2);
	ASTNode * mk_var_decl_node(ASTNode * node1, ASTNode * node2);
	ASTNode * mk_method_decl_node(ASTNode * node1, ASTNode * node2, ASTNode * node3, ASTNode * node4, ASTNode * node5, ASTNode * node6, ASTNode * node7);
	ASTNode * mk_formal_list_node(ASTNode * node1, ASTNode * node2, ASTNode * node3) ;
	ASTNode * mk_formal_rest_node(ASTNode * node1, ASTNode * node2, ASTNode * node3);
	ASTNode * mk_array_type_node();
	ASTNode * mk_bool_type_node();
	ASTNode * mk_int_type_node();
	ASTNode * mk_class_type_node();
	ASTNode * mk_stmt_list_node(ASTNode * node1, ASTNode * node2);
	ASTNode * mk_print_node(ASTNode * node1);
	ASTNode * mk_assign_node(ASTNode * node1, ASTNode * node2);
	ASTNode * mk_array_assign_node(ASTNode * node1, ASTNode * node2, ASTNode * node3);
	ASTNode * mk_if_node(ASTNode * node1, ASTNode * node2, ASTNode * node3);
	ASTNode * mk_while_node(ASTNode * node1, ASTNode * node2);
	ASTNode * mk_and_expr_node(ASTNode * node1, ASTNode * node2);
	ASTNode * mk_lt_expr_node(ASTNode * node1, ASTNode * node2);
	ASTNode * mk_add_node(ASTNode * node1, ASTNode * node2);
	ASTNode * mk_sub_node(ASTNode * node1, ASTNode * node2);
	ASTNode * mk_mul_node(ASTNode * node1, ASTNode * node2);
	ASTNode * mk_int_val_node(ASTNode * node1);
	ASTNode * mk_true_node();
	ASTNode * mk_false_node();
	ASTNode * get_id_node(ASTNode * node1);
	ASTNode * mk_this_node();
	ASTNode * mk_read_int_node();
	ASTNode * mk_new_int_array_node(ASTNode * node1);
	ASTNode * mk_new_object(ASTNode * node1);
	ASTNode * mk_not_expr_node(ASTNode * node1);
	ASTNode * mk_length_expr_node(ASTNode * node1, ASTNode * node2);
	ASTNode * mk_array_index_expr_node(ASTNode * node1, ASTNode * node2);
	ASTNode * mk_function_call_node(ASTNode * node1, ASTNode * node2, ASTNode * node3);
	ASTNode * mk_expr_list_node(ASTNode * node1, ASTNode * node2);
	ASTNode * mk_expr_rest_node(ASTNode * node1, ASTNode * node2);

}

#endif /* _ASTUTILS_H */