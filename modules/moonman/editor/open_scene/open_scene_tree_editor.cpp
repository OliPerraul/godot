//
//
//#include "open_scene_tree_editor.h"
//
//void MoMaOpenSceneTreeEditor::_add_node_hierarchy(Node* p_node, TreeItem* p_item)
//{
//	if (!p_node)
//	{
//		return;
//	}
//
//	for (int i = 0; i < p_node->get_child_count(); i++)
//	{
//		Node* child_node = ((Node*)p_node->get_child(i));
//		TreeItem* child_item = nullptr;
//		_add_node(child_node, p_item, child_item);
//		_add_node_hierarchy(child_node, child_item);
//	}
//
//}
//
//void MoMaOpenSceneTreeEditor::update_tree()
//{
//	_tree_node->clear();
//	TreeItem* root_item = nullptr;
//	_add_node(_root_node, nullptr, root_item);
//	_add_node_hierarchy(_root_node, root_item);
//}
//
//
//void MoMaOpenSceneTreeEditor::_add_node(Node* p_node, TreeItem* p_parent_item, TreeItem*& r_item)
//{
//	r_item = (TreeItem*)(Object*)_tree_node->create_item(p_parent_item, 0);
//	r_item->set_block_signals(true);
//	r_item->set_text(0, p_node->get_name());
//	r_item->set_editable(0, true);
//
//	r_item->set_metadata(0, p_node->get_path());
//}
//
//
//void MoMaOpenSceneTreeEditor::setup(Variant p_tree, Variant p_node)
//{
//	this->_tree_node = (Tree*) (Node*) p_tree;
//	this->_root_node = (Node*) p_node;
//}
//
//
//void MoMaOpenSceneTreeEditor::_bind_methods()
//{
//	ClassDB::bind_method(D_METHOD("setup", "tree_node", "root_node"), &MoMaOpenSceneTreeEditor::setup);
//	ClassDB::bind_method(D_METHOD("update_tree"), &MoMaOpenSceneTreeEditor::update_tree);
//}
