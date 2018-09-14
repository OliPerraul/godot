//
//#include "node_util.h"
//#include "scene/main/node.h"
//#include "scene/gui/text_edit.h"
//
//
//
//
//Variant MoMaNodeUtil::control_get_root_parent(Variant p_base) {
//	return (Variant)((Control *)(Node *)p_base)->get_root_parent_control();
//}
//
//
//Variant MoMaNodeUtil::text_edit_get_v_scroll(Variant p_text_edit)
//{
//	return ((TextEdit*)(Node*)p_text_edit)->get_v_scroll();
//}
//
//void MoMaNodeUtil::text_edit_set_v_scroll(Variant p_text_edit, Variant p_base)
//{
//	return ((TextEdit*)(Node*)p_text_edit)->set_v_scroll(p_base);
//}
//
//Variant MoMaNodeUtil::text_edit_get_h_scroll(Variant p_text_edit)
//{
//	return ((TextEdit*)(Node*)p_text_edit)->get_h_scroll();
//}
//
//void MoMaNodeUtil::text_edit_set_h_scroll(Variant p_text_edit, Variant p_base)
//{
//	return ((TextEdit*)(Node*)p_text_edit)->set_h_scroll(p_base);
//}
//
//
//
//void MoMaNodeUtil::_bind_methods() {
//	ClassDB::bind_method(D_METHOD("control_get_root_parent", "base"), &MoMaNodeUtil::control_get_root_parent);
//
//	ClassDB::bind_method(D_METHOD("text_edit_get_h_scroll", "text_edit"), &MoMaNodeUtil::text_edit_get_h_scroll);
//	ClassDB::bind_method(D_METHOD("text_edit_set_h_scroll", "text_edit", "base" ), &MoMaNodeUtil::text_edit_set_h_scroll);
//	ClassDB::bind_method(D_METHOD("text_edit_get_v_scroll", "text_edit"), &MoMaNodeUtil::text_edit_get_v_scroll);
//	ClassDB::bind_method(D_METHOD("text_edit_set_v_scroll", "text_edit", "base"), &MoMaNodeUtil::text_edit_set_v_scroll);
//}
//
