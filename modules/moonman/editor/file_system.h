
/* summator.h */
#ifndef MOONMAN_FILE_SYSTEM_H
#define MOONMAN_FILE_SYSTEM_H

#include "scene\gui\control.h"


class MoMaFileSystem : public Control {
	GDCLASS(MoMaFileSystem, Control);

private:

	//void _init() override;
	void update_tree();

protected:

public:

	void setup(Variant tree);

	//ctor/dtor
	MoMaFileSystem();

};


#endif