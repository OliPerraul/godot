/* summator.h */
#ifndef MOONMAN_CONSOLE_HELPER_H
#define MOONMAN_CONSOLE_HELPER_H

#include "scene\gui\text_edit.h"

#include "script_language.h"
#include "modules\gdscript\gdscript.h"
#include "modules\gdscript\gdscript_compiler.h"
#include "modules\gdscript\gdscript_parser.h"

#include "modules/moonman/editor/editor_settings.h"
#include "modules/moonman/editor/code_editor_helper.h"

class MoMaConsoleHelper : public MoMaCodeEditorHelper {
	GDCLASS(MoMaConsoleHelper, MoMaCodeEditorHelper);

private:

	//void _init() override;

public:

	void execute();
	static void _bind_methods();
	virtual void setup(Variant p_text_edit, Variant p_console) override;

	//ctor/dtor
	MoMaConsoleHelper();

};


#endif
