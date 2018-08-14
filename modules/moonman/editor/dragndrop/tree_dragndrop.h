

#ifndef MOONMAN_TREE_DRAGNDROP_H
#define MOONMAN_TREE_DRAGNDROP_H

#include "scene/gui/control.h"
#include "scene/gui/tree.h"

class MoMaTreeDragnDrop : public Control
{
	GDCLASS(MoMaTreeDragnDrop, Control);

public:
	MoMaTreeDragnDrop() {};
	~MoMaTreeDragnDrop() {};

	void setup(Variant p_tree, Variant p_root_node);
	void update_tree();

	static void _bind_methods();


private:
	Tree* _tree_node;
	Node* _root_node;


	void _add_node_hierarchy(Node* p_node, TreeItem* p_item);
	void _add_node(Node* p_node, TreeItem* p_parent_item, TreeItem*& r_item);

};

#endif