#ifndef _CNWSCREATURESTATS_H_
#define _CNWSCREATURESTATS_H_
#include "nwndef.h"
#include "CExoArrayList.h"
#include "CNWSCreature.h"
#include "CExoLocString.h"

class CNWSCreatureStats
{
public:
	int AddExperience(unsigned long);
	int AddFeat(unsigned short);
	int AddKnownSpell(unsigned char, unsigned long);
	int AddSpellLikeAbilityToList(unsigned long, int, unsigned char);
	int AdjustAlignment(unsigned char, short, unsigned long);
	int AdjustSpellUsesPerDay();
	int AutoMemorizeSpells(int);
	int CalcLevelUpNumberFeats(unsigned char, unsigned char, unsigned char &, unsigned char &);
	int CalcStatModifier(unsigned char);
	int CanChooseFeat(unsigned short, unsigned char, unsigned char, CExoArrayList<unsigned short> *);
	int CanLevelUp();
	int CheckSpellSuitability(int, CNWSpell *, int, int, int, int, int, int, unsigned char &, int);
	int ClearFeats();
	int ClearMemorizedSpellSlot(unsigned char, unsigned char, unsigned char);
	int ComputeFeatBonuses(CExoArrayList<unsigned short> *, int, int);
	int ComputeNumberKnownSpellsLeft(unsigned char, unsigned char);
	int ConfirmDomainSpell(unsigned char, unsigned char, unsigned long);
	int DecrementFeatRemainingUses(unsigned short);
	int DecrementSpellsPerDayLeft(unsigned char, unsigned char);
	int FeatAcquired(unsigned short, CExoArrayList<unsigned short> *, int);
	int FeatRequirementsMetAfterLevelUp(unsigned short, CNWLevelStats *, unsigned char);
	int FeatRequirementsMet(unsigned short, CExoArrayList<unsigned short> *);
	int GetACNaturalBase(int);
	int GetAlignmentString();
	int GetArmorClassVersus(CNWSCreature *, int);
	int GetAttackModifierVersus(CNWSCreature *);
	int GetAttacksPerRound();
	int GetBaseAttackBonus(int);
	int GetBaseFortSavingThrow();
	int GetBaseReflexSavingThrow();
	int GetBaseWillSavingThrow();
	int GetBonusFeat(unsigned short);
	int GetCHAStat();
	int GetCONStat();
	int GetCanUseRelatedCategory(int, int);
	int GetCanUseSkillAfterLevelUp(unsigned short, CNWLevelStats *);
	int GetCanUseSkill(unsigned char);
	int GetCasterLevel(unsigned char);
	int GetClassInfo(unsigned char);
	int GetClassLevel(unsigned char, int);
	int GetClassNegativeLevels(unsigned char);
	int GetClassString(unsigned char);
	int GetClass(unsigned char);
	int GetCreatureDamageDice(unsigned char);
	int GetCreatureDamageDie(unsigned char);
	int GetCreatureHasTalent(int, int, unsigned char);
	int GetCreatureTalentRandomFeat(int, int, int &, int &, unsigned char &);
	int GetCreatureTalentRandomKnownSpell(int, int, int &, int &, unsigned char &, int);
	int GetCreatureTalentRandomMemorisedSpell(int, int, int &, int &, unsigned char &, int, unsigned char &);
	int GetCreatureTalentRandomSkill(int, int, int &, int &, unsigned char &);
	int GetCreatureTalentRandomSpellFromItem(int, int, int &, int &, unsigned char &, unsigned long &, int &);
	int GetCreatureTalentRandomSpellLikeAbility(int, int, int &, int &, unsigned char &, unsigned char &);
	int GetCreatureTalentRandomSpell(int, int, int &, int &, unsigned char &, unsigned char &);
	int GetCreatureTalentRandom(int, int, int &, int &, unsigned char &, unsigned long &, int &, unsigned char &, unsigned char &);
	int GetCriticalHitMultiplier(int);
	int GetCriticalHitRoll(int);
	int GetDEXMod(int);
	int GetDEXStat();
	int GetDamageBonus(CNWSCreature *, int);
	int GetDamageRoll(CNWSObject *, int, int, int, int, int);
	int GetDomain1(unsigned char);
	int GetDomain2(unsigned char);
	int GetEffectImmunity(unsigned char, CNWSCreature *);
	int GetEffectiveCRForPotentialLevel();
	int GetEpicWeaponDevastatingCritical(CNWSItem *);
	int GetEpicWeaponFocus(CNWSItem *);
	int GetEpicWeaponOverwhelmingCritical(CNWSItem *);
	int GetEpicWeaponSpecialization(CNWSItem *);
	int GetExpNeededForLevelUp();
	int GetFavoredEnemyBonus(CNWSCreature *);
	int GetFeatRemainingUses(unsigned short);
	int GetFeatSourceClass(unsigned short);
	int GetFeatTotalUses(unsigned short);
	int GetFeat(unsigned short);
	int GetFortSavingThrow(int);
	int GetFullName();
	int GetHasLostClassAbilities(unsigned char);
	int GetHasSilencedSpell(unsigned long);
	int GetHasStilledSpell(unsigned long);
	int GetHighestLevelKnown();
	int GetHighestLevelOfFeat(unsigned short);
	int GetHitDie(unsigned char, unsigned char);
	int GetINTStat();
	int GetIsClassAvailable(unsigned char);
	int GetIsClass(unsigned char);
	int GetIsDomainSpell(unsigned char, unsigned char, unsigned char);
	int GetIsEpitomeOfAlignment();
	int GetIsInKnownSpellList(unsigned char, unsigned long);
	int GetIsInSpellLikeAbilityList(unsigned long);
	int GetIsWeaponOfChoice(unsigned long);
	int GetKnownSpell(unsigned char, unsigned char, unsigned char);
	int GetLargePortrait();
	int GetLevelStats(unsigned char);
	int GetLevel(int);
	int GetMeetsPrestigeClassRequirements(CNWClass *);
	int GetMeleeAttackBonus(int, int, int);
	int GetMeleeDamageBonus(int, unsigned char);
	int GetMemorizedSpellInSlotMetaType(unsigned char, unsigned char, unsigned char);
	int GetMemorizedSpellInSlotReady(unsigned char, unsigned char, unsigned char);
	int GetMemorizedSpellInSlot(unsigned char, unsigned char, unsigned char);
	int GetMemorizedSpellReadyCount(unsigned char, unsigned long, unsigned char *, unsigned char *);
	int GetMemorizedSpellReadyCount(unsigned char, unsigned long, unsigned char);
	int GetMemorizedSpellReadyCount(unsigned long);
	int GetNumLevelsOfClass(unsigned char);
	int GetNumLevelsOfClass(unsigned char, int);
	int GetNumberKnownSpells(unsigned char, unsigned char);
	int GetNumberMemorizedSpellSlots(unsigned char, unsigned char);
	int GetPotentialLevel();
	int GetPrimaryMod(unsigned char);
	int GetRaceString();
	int GetRangedAttackBonus(int, int);
	int GetRangedDamageBonus();
	int GetReflexSavingThrow(int);
	int GetSTRStat();
	int GetSchool(unsigned char);
	int GetSimpleAlignmentGoodEvil();
	int GetSimpleAlignmentLawChaos();
	int GetSkillRank(unsigned char, CNWSObject *, int);
	int GetSmallPortrait();
	int GetSpellFailure(unsigned char);
	int GetSpellGainWithBonusAfterLevelUp(unsigned char, unsigned char, CNWLevelStats *, unsigned char, int);
	int GetSpellGainWithBonus(unsigned char, unsigned char);
	int GetSpellLikeAbilityCasterLevel(unsigned long);
	int GetSpellMinAbilityMet(unsigned char, unsigned char);
	int GetSpellResistance();
	int GetSpellUsesLeft(unsigned long, unsigned char, unsigned char, unsigned char);
	int GetSpellsOfLevelReady(unsigned char, unsigned char);
	int GetSpellsPerDayLeft(unsigned char, unsigned char);
	int GetStatBonusesFromFeats(CExoArrayList<unsigned short> *, int *, unsigned char);
	int GetStatById(int);
	int GetTag();
	int GetTotalACSkillMod();
	int GetTotalCHABonus();
	int GetTotalCONBonus();
	int GetTotalDEXBonus();
	int GetTotalINTBonus();
	int GetTotalNegativeLevels();
	int GetTotalSTRBonus();
	int GetTotalWISBonus();
	int GetUnarmedDamageDice();
	int GetUnarmedDamageDie();
	int GetUnarmedDamageRoll(CNWSObject *);
	int GetUseMonkAttackTables(int);
	int GetWISStat();
	int GetWeaponFinesse(CNWSItem *);
	int GetWeaponFocus(CNWSItem *);
	int GetWeaponImprovedCritical(CNWSItem *);
	int GetWeaponSpecialization(CNWSItem *);
	int GetWillSavingThrow(int);
	int HasFeat(unsigned short);
	int IncrementFeatRemainingUses(unsigned short);
	int IncrementSpellsPerDayLeft(unsigned char, unsigned char);
	int LevelDown(CNWLevelStats *);
	int LevelUpAutomatic(unsigned char, int, unsigned char);
	int LevelUp(CNWLevelStats *, unsigned char, unsigned char, unsigned char, int);
	int ModifyAlignment(short, short);
	int ReadSpellsFromGff(CResGFF *, CResStruct *, int);
	int ReadStatsFromGff(CResGFF *, CResStruct *, CNWSCreatureAppearanceInfo *, int, int, int);
	int ReadySpellLevel(unsigned char);
	int RemoveFeat(unsigned short);
	int RemoveKnownSpell(unsigned char, unsigned long);
	int ResetFeatRemainingUses();
	int ResetSpellLikeAbilities();
	int ResetSpellsPerDayLeft(unsigned char, unsigned char);
	int ResolveSpecialAttackAttackBonus(CNWSCreature *);
	int ResolveSpecialAttackDamageBonus(CNWSCreature *);
	int SaveClassInfo(CResGFF *, CResStruct *);
	int SaveStats(CResGFF *, CResStruct *);
	int SetArcaneSpellFailure(char);
	int SetCHABase(unsigned char);
	int SetCONBase(unsigned char, int);
	int SetClassLevel(unsigned char, unsigned char);
	int SetClassNegativeLevels(unsigned char, unsigned char);
	int SetClass(unsigned char, unsigned char);
	int SetDEXBase(unsigned char);
	int SetDomain1(unsigned char, unsigned char);
	int SetDomain2(unsigned char, unsigned char);
	int SetExperience(unsigned long, int);
	int SetFeatRemainingUses(unsigned short, unsigned char);
	int SetHasLostClassAbilities(unsigned char, int);
	int SetINTBase(unsigned char);
	int SetMemorizedSpellInSlotReady(unsigned char, unsigned char, unsigned char, int);
	int SetMemorizedSpellSlot(unsigned char, unsigned char, unsigned long, unsigned char, unsigned char, int);
	int SetMovementRate(int);
	int SetNormalBonusFlags(unsigned short, int &, int &);
	int SetNumberBonusSpells(unsigned char, unsigned char, unsigned char);
	int SetNumberMemorizedSpellSlots(unsigned char, unsigned char, unsigned char);
	int SetSTRBase(unsigned char);
	int SetSchool(unsigned char, unsigned char);
	int SetSkillRank(unsigned char, char);
	int SetSpellFailure(unsigned char, unsigned char);
	int SetSpellLikeAbilityReady(unsigned long, int, unsigned char);
	int SetSpellResistancePenalty(char);
	int SetSpellResistance(char);
	int SetStatById(int, float);
	int SetTag(CExoString const &);
	int SetWISBase(unsigned char);
	int UnReadySpell(unsigned long, unsigned char, unsigned char, unsigned char);
	int UpdateCombatInformation();
	int UpdateLastStatsObject(unsigned long long, CNWCreatureStatsUpdate *);
	int UpdateNumberMemorizedSpellSlots();
	int ValidateLevelUp(CNWLevelStats *, unsigned char, unsigned char, unsigned char);
	~CNWSCreatureStats();
	CNWSCreatureStats(CNWSCreature *);

	/* 0x0/0 */ unsigned long field_0;
	/* 0x4/4 */ unsigned long field_4;
	/* 0x8/8 */ unsigned short field_8;
	/* 0xA/10 */ unsigned short field_A;
	/* 0x10/16 */ char rsvd1[4];
	/* 0x10/16 */ unsigned long field_10;
	/* 0x24/36 */ char rsvd2[16];
	/* 0x24/36 */ CNWSCreature *OriginalObject;
	/* 0x34/52 */ char rsvd3[12];
	/* 0x34/52 */ CExoLocString FirstName;
	/* 0x3C/60 */ char rsvd4[4];
	/* 0x3C/60 */ CExoLocString LastName;
	/* 0x64/100 */ char rsvd5[36];
	/* 0x64/100 */ unsigned long field_64;
	/* 0x70/112 */ char rsvd6[8];
	/* 0x70/112 */ unsigned long XP;
	/* 0x74/116 */ unsigned long field_74;
	/* 0x78/120 */ unsigned long IsDM;
	/* 0x7C/124 */ unsigned long field_7C;
	/* 0x49A/1178 */ char rsvd7[1050];
	/* 0x49A/1178 */ char ArmorPart_RFoot;
	/* 0x49B/1179 */ char BodyPart_LFoot;
	/* 0x49C/1180 */ char BodyPart_RShin;
	/* 0x49D/1181 */ char BodyPart_LShin;
	/* 0x49E/1182 */ char BodyPart_LThigh;
	/* 0x49F/1183 */ char BodyPart_RThigh;
	/* 0x4A0/1184 */ char BodyPart_Pelvis;
	/* 0x4A1/1185 */ char BodyPart_Torso;
	/* 0x4A2/1186 */ char BodyPart_Belt;
	/* 0x4A3/1187 */ char BodyPart_Neck;
	/* 0x4A4/1188 */ char BodyPart_RFArm;
	/* 0x4A5/1189 */ char BodyPart_LFArm;
	/* 0x4A6/1190 */ char BodyPart_RBicep;
	/* 0x4A7/1191 */ char BodyPart_LBicep;
	/* 0x4A8/1192 */ char BodyPart_RShoul;
	/* 0x4A9/1193 */ char BodyPart_LShoul;
	/* 0x4AA/1194 */ char BodyPart_RHand;
	/* 0x4AB/1195 */ char BodyPart_LHand;
	/* 0x4E4/1252 */ char rsvd8[56];
	/* 0x4E4/1252 */ unsigned long field_4E4;
};
#endif
