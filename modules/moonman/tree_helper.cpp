#include "tree_helper.h"

void MoMaTreeHelper::_add_item_hierarchy(Node* p_node, TreeItem* p_item)
{
	if (!p_node)
	{
		return;
	}

	for (int i = 0; i < p_node->get_child_count(); i++)
	{
		Node* child_node = ((Node*)p_node->get_child(i));
		TreeItem* child_item = nullptr;
		_add_node(child_node, p_item, child_item);
		_add_item_hierarchy(child_node, child_item);
	}

}

void MoMaTreeHelper::update_tree()
{
	Node* duplicated_tree = _tree_node->duplicate();


	if (_tree_node->get_root() != NULL)
	{
		TreeItem* child = _tree_node->get_root()->get_children();
		while (child != NULL)
		{
			// put code here
			print_line(child->get_text(0));
			child = child->get_next();
		}
	}


	TreeItem* root_item = nullptr;
	_add_node(_root_node, nullptr, root_item);
	_add_item_hierarchy(_root_node, root_item);
}


void MoMaTreeHelper::_add_node(Node* p_node, TreeItem* p_parent_item, TreeItem*& r_item)
{
	r_item = (TreeItem*)(Object*)_tree_node->create_item(p_parent_item, 0);
	r_item->set_block_signals(true);
	r_item->set_text(0, p_node->get_name());
	r_item->set_editable(0, true);

	r_item->set_metadata(0, p_node->get_path());
}


void MoMaTreeHelper::setup(Variant p_tree, Variant p_node)
{
	this->_tree_node = (Tree*)(Node*)p_tree;
	this->_root_node = (Node*)p_node;
}


void MoMaTreeHelper::_bind_methods()
{
	ClassDB::bind_method(D_METHOD("setup", "tree_node", "root_node"), &MoMaTreeHelper::setup);
	ClassDB::bind_method(D_METHOD("update_tree"), &MoMaTreeHelper::update_tree);
}
