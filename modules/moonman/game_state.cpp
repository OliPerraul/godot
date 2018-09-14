//
//#include "game_state.h"
//
//#define CAMERA "Camera"
//
//
//MoMaGameState::MoMaGameState()
//{
//	_dictionary = new Dictionary();
//}
//
//MoMaGameState::~MoMaGameState()
//{
//	delete _dictionary;
//}
//
//void MoMaGameState::set_game_data(Variant p_dic)
//{
//	Dictionary& dic = (Dictionary)p_dic;
//	List<Variant> keys;
//	dic.get_key_list(&keys);
//
//	for (auto i = 0; i < dic.size(); i++)
//	{
//		Variant& key = keys[i];
//		Variant& val = dic[key];
//		(*_dictionary)[key] = val;
//	}
//}
//
//Variant MoMaGameState::get_game_data_member(String p_key)
//{
//	return (*_dictionary)[p_key];
//}
//
//void MoMaGameState::_bind_methods()
//{
//	ClassDB::bind_method(D_METHOD("set_game_data","dict"), &MoMaGameState::set_game_data);
//	ClassDB::bind_method(D_METHOD("get_game_data_member", "key"), &MoMaGameState::get_game_data_member);
//}
