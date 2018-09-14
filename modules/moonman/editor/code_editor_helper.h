///* summator.h */
//#ifndef MOONMAN_CODE_EDITOR_HELPER_H
//#define MOONMAN_CODE_EDITOR_HELPER_H
//
//#include "scene\gui\box_container.h"
//#include "scene\gui\text_edit.h"
//#include "scene\resources\environment.h"
//#include "scene\2d\node_2d.h"
//
//
//#include "script_language.h"
//#include "modules\gdscript\gdscript.h"
//#include "modules\gdscript\gdscript_compiler.h"
//#include "modules\gdscript\gdscript_parser.h"
//
////#include "user_editor_settings.h"
////#include "user_singletons.h"
//
//// TODO : on error (add subscriber)
//// Connect here to console box
//
//
//class MoMaCodeEditorHelper : public Node {
//	GDCLASS(MoMaCodeEditorHelper, Node);
//
//
//protected:
//	TextEdit* _text_edit;
//	Node* _output;
//	ScriptLanguage* _language;
//
//	virtual void execute() = 0;
//	virtual void setup(Variant p_text_edit, Variant p_output);
//
//	Error _validate_script(Script * script, String & r_err_txt, int & r_err_line);
//
//	virtual void _display_script_error(String err_txt, int err_line);
//
//	static void _bind_methods();
//
//};
//
//
//
//#endif
