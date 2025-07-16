// FXnRXn copyright notice


#include "KWGameplayTags.h"

namespace KWGameplayTags
{
	//--  Input Tags  --

	UE_DEFINE_GAMEPLAY_TAG(InputTag_Move, "KnightWarrior.InputTag.Move");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Look, "KnightWarrior.InputTag.Look");
	UE_DEFINE_GAMEPLAY_TAG(Equip_Axe, "KnightWarrior.InputTag.EquipAxe");
	UE_DEFINE_GAMEPLAY_TAG(Unequip_Axe, "KnightWarrior.InputTag.UnequipAxe");
	UE_DEFINE_GAMEPLAY_TAG(Equip_Sword, "KnightWarrior.InputTag.EquipSword");
	UE_DEFINE_GAMEPLAY_TAG(Unequip_Sword, "KnightWarrior.InputTag.UnequipSword");
	
	
	
	//--  Player Tags  --
	UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_Axe, "KnightWarrior.Player.Weapon.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_Sword, "KnightWarrior.Player.Weapon.Sword");


	//--  Event  --
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_EquipAxe,"KnightWarrior.Player.Event.Equip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_UnEquipAxe,"KnightWarrior.Player.Event.UnEquip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_EquipSword,"KnightWarrior.Player.Event.Equip.Sword");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_UnEquipSword,"KnightWarrior.Player.Event.UnEquip.Sword");
	
}