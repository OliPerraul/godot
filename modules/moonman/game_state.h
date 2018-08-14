


#ifndef MOONMAN_GAME_STATE_H
#define MOONMAN_GAME_STATE_H

#include "dictionary.h"
#include "list.h"
#include "ustring.h"
#include "variant.h"

#include "scene/main/node.h"
#include "game_state.h"


class MoMaGameState : public Node
{
	GDCLASS(MoMaGameState, Node);

public:
	MoMaGameState::MoMaGameState();
	MoMaGameState::~MoMaGameState();

	void set_game_data(Variant p_dic);
	Variant get_game_data_member(String p_key);
	
	static void _bind_methods();

protected:

private:
	Dictionary* _dictionary = nullptr;

};

#endif