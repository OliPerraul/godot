

#include "code_editor_helper.h"


void MoMaCodeEditorHelper::setup(Variant p_text_edit, Variant p_output)
{
	_language = memnew(GDScriptLanguage);
	_text_edit = (TextEdit*)(Node*)p_text_edit;
	_output = (Node*)(p_output);

}


Error MoMaCodeEditorHelper::_validate_script(Script* script, String &r_err_txt, int &r_err_line)
{
	///TODO: Detect if identifier is valid
	///TODO: Detect if func is valid

	//parse code
	GDScriptParser parser;		//TODO: polymorphism
	Error err = parser.parse(script->get_source_code(), "");
	if (err)
	{
		r_err_txt = parser.get_error();
		r_err_line = parser.get_error_line();
		return err;

	}

	//compile code
	GDScriptCompiler compiler; //TODO: polymorphism
	err = compiler.compile(&parser, (GDScript*)script);
	if (err)
	{
		r_err_txt = compiler.get_error();
		r_err_line = compiler.get_error_line();

	}

	return err;

}

void MoMaCodeEditorHelper::_display_script_error(String err_txt, int err_line)
{
	String error_msg = "Error on line " + String::num(err_line) + ". " + err_txt;
	_output->call("output", error_msg);
}


void MoMaCodeEditorHelper::_bind_methods()
{
	//ClassDB::bind_method(D_METHOD("setup", "text_edit", "console"), &MoMaCodeEditorHelper::setup);
	//ClassDB::bind_method(D_METHOD("execute"), &MoMaCodeEditorHelper::execute);

}

