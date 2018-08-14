
#ifndef CONTROL_UTIL_H
#define	CONTROL_UTIL_H

#include "scene/main/node.h"
#include "scene/gui/control.h"

class MoMaNodeUtil : public Node
{
	GDCLASS(MoMaNodeUtil, Node);

public:
	MoMaNodeUtil() {};
	~MoMaNodeUtil() {};

	Variant control_get_root_parent(Variant base);
	
	Variant text_edit_get_v_scroll(Variant p_text_edit);
	void text_edit_set_v_scroll(Variant p_text_edit, Variant base);
	Variant text_edit_get_h_scroll(Variant p_text_edit);
	void text_edit_set_h_scroll(Variant p_text_edit, Variant base);
	static void _bind_methods();

};


#endif