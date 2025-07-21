// FXnRXn copyright notice


#include "KWGameplayTags.h"

namespace KWGameplayTags
{
	//--  Input Tags  --
	//--> To handle Input Mapping context and input action
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Move, "KnightWarrior.InputTag.Move");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_Look, "KnightWarrior.InputTag.Look");
	UE_DEFINE_GAMEPLAY_TAG(Equip_Axe, "KnightWarrior.InputTag.EquipAxe");
	UE_DEFINE_GAMEPLAY_TAG(Unequip_Axe, "KnightWarrior.InputTag.UnequipAxe");
	UE_DEFINE_GAMEPLAY_TAG(Equip_Sword, "KnightWarrior.InputTag.EquipSword");
	UE_DEFINE_GAMEPLAY_TAG(Unequip_Sword, "KnightWarrior.InputTag.UnequipSword");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_LightAttack_Axe, "KnightWarrior.InputTag.LightAttack.Axe");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_LightAttack_Sword, "KnightWarrior.InputTag.LightAttack.Sword");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_HeavyAttack_Axe, "KnightWarrior.InputTag.HeavyAttack.Axe");
	UE_DEFINE_GAMEPLAY_TAG(InputTag_HeavyAttack_Sword, "KnightWarrior.InputTag.HeavyAttack.Sword");
	
	
	//--  Player Tags  --
	UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_Axe, "KnightWarrior.Player.Weapon.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Weapon_Sword, "KnightWarrior.Player.Weapon.Sword");

	//--> Ability
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Equip_Axe, "KnightWarrior.Player.Ability.Equip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Unequip_Axe, "KnightWarrior.Player.Ability.UnEquip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Equip_Sword, "KnightWarrior.Player.Ability.Equip.Sword");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Unequip_Sword, "KnightWarrior.Player.Ability.UnEquip.Sword");

	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Light_Axe, "KnightWarrior.Player.Ability.Attack.Light.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Heavy_Axe, "KnightWarrior.Player.Ability.Attack.Heavy.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Light_Sword, "KnightWarrior.Player.Ability.Attack.Light.Sword");
	UE_DEFINE_GAMEPLAY_TAG(Player_Ability_Attack_Heavy_Sword, "KnightWarrior.Player.Ability.Attack.Heavy.Sword");


	//--  Event  --
	//--> Check which current weapon tag/weapon player have
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_EquipAxe,"KnightWarrior.Player.Event.Equip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_UnEquipAxe,"KnightWarrior.Player.Event.UnEquip.Axe");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_EquipSword,"KnightWarrior.Player.Event.Equip.Sword");
	UE_DEFINE_GAMEPLAY_TAG(Player_Event_UnEquipSword,"KnightWarrior.Player.Event.UnEquip.Sword");
	
}