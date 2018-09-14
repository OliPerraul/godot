//
//#include "console_helper.h"
//
//
//void MoMaConsoleHelper::execute()
//{
//	String source = R"(
//static func _execute():
//
//{}	
//	pass
//)";
//	_text_edit->select_all();
//	_text_edit->indent_right(); //indent to match function scope
//	source = source.replace("{}", _text_edit->get_text());
//	_text_edit->indent_left(); //indent back
//	_text_edit->deselect();
//
//	Script* scr = _language->create_script();
//	scr->set_source_code(source);
//
//	String err_txt;
//	int err_line;
//
//	Error err = _validate_script(scr, err_txt, err_line);
//	if (err)
//	{
//		_display_script_error(err_txt, err_line);
//		return;
//	}
//
//	scr->reload();
//	scr->call("_execute");
//}
//
//void MoMaConsoleHelper::_bind_methods()
//{
//	ClassDB::bind_method(D_METHOD("setup", "text_edit", "console"), &MoMaConsoleHelper::setup);
//	ClassDB::bind_method(D_METHOD("execute"), &MoMaConsoleHelper::execute);
//}
//
//void MoMaConsoleHelper::setup(Variant p_text_edit, Variant p_console)
//{
//	MoMaCodeEditorHelper::setup(p_text_edit, p_console);
//
//	String source = "text";
//	_text_edit->set_text(source);
//
//}
//
//MoMaConsoleHelper::MoMaConsoleHelper()
//{
//	//_init();
//}
//
