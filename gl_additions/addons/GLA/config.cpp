#include "config_macros.hpp"

class CfgPatches
{
	class ADDON {
		name=ADDON_NAME;
		units[]={};
		weapons[]={};
		magazines[]={};
		requiredVersion=1.0;
		requiredAddons[]=
		{
			"rhsusf_main",
			"rhsusf_c_weapons",
			"A3_Functions_F"
		};
		name="Grenade Launcher Additions";
		author="HBTurpin";
		authors[]={"HBTurpin"};
		url="https://github.com/HBTurpinArma";
	};
};

class CfgFunctions
{
	class ADDON
	{
		class Core
		{
			tag = QUOTE(ADDON);
            file = FUNCTION_PATH;
			class init {postInit=1;};
			class firedHandler {};
			class teargasEffectAI {};
			class teargasEffectPlayer {};
			class teargasGrenade {};
		};
	};
};
			
			
class CfgMagazineWells
{
	class CBA_40mm_M203
	{
		GLA_Ammo[]=
		{
			"gla_mag_m4009_impact",
			"gla_mag_M651_CS",
			"gla_mag_M1060_Thermobaric"
		};
	};
	class CBA_40mm_3GL
	{
		GLA_Ammo[]=
		{
			"gla_mag_3Rnd_M441_HE",
			"gla_mag_3Rnd_M397_HET",
			"gla_mag_3Rnd_m4009",
			"gla_mag_3Rnd_m4009_impact",
			"gla_mag_3Rnd_M433_HEDP",
			"gla_mag_3Rnd_M576_Buckshot",
			"gla_mag_3Rnd_M781_Practice",
			"gla_mag_3Rnd_M651_CS",
			"gla_mag_3Rnd_M1060_Thermobaric"
		};
	};
	class CBA_40mm_M203_6rnds
	{
		GLA_Ammo[]=
		{
			"gla_mag_6Rnd_m4009_impact",
			"gla_mag_6Rnd_M651_CS",
			"gla_mag_6Rnd_M1060_Thermobaric"
		};
	};
};

class CfgCloudlets {
	class Default;
	class GLA_Incendiary_Impact : Default {
		interval = 0.001;
		timerPeriod = 1;
		lifeTime = 3.6;
		moveVelocity[] = {"(- inDirX * 2 + surfNormalX / 2) * inSpeed / 1902", "( - inDirY * 2 + surfNormalY / 2) * inSpeed / 1902", "( - inDirZ * 2 + surfNormalZ / 2) * inSpeed / 1902"};
		rotationVelocity = 1;
		weight = 100;
		volume = 0.01;
		rubbing = 0.3;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		size[] = {0.101, 0.101, 0.101, 0.101, 0.101, 0.083, 0.082, 0.081, 0.08, 0};
		color[] = {{1, 0.24, 0, -6.5}, {1, 0.24, 0, -6}, {1, 0.24, 0, -5.5}, {1, 0.24, 0, -4.5}};
		emissiveColor[] = {{1, 0.1, 0.1, -6.5}, {1, 0.1, 0.1, -6}, {1, 0.1, 0.1, -5.5}, {1, 0.1, 0.1, -4.5}};
		animationSpeed[] = {1000};
		randomDirectionPeriod = 0.5;
		randomDirectionIntensity = 0.55;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		lifeTimeVar = 2.5;
		positionVar[] = {0, 0.2, 0};
		moveVelocityVar[] = {10, 10, 10};
		rotationVelocityVar = 2;
		sizeVar = 0.08;
		colorVar[] = {0, 0.15, 0.15, 0};
		randomDirectionPeriodVar = 0.3;
		randomDirectionIntensityVar = 0.15;
	};
	
};


class GLA_Incendiary {
	class Impact {
		intensity = 1;
		interval = 1;
		lifeTime = 0.6;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "GLA_Incendiary_Impact";
	};
	
	class LightExp {
		intensity = 0.0017;
		interval = 1;
		lifeTime = 1.6;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "ExploLight";
	};
};


class CfgAmmo
{
	class rhsusf_40mm_FLASHBANG;
	class gla_40mm_FLASHBANG_impact: rhsusf_40mm_FLASHBANG
	{
		hit=1;
		indirectHit=0;
		indirectHitRange=0;
		typicalspeed=70;
		fuseDistance=2;
		explosionTime=-1;
		ExplosionEffects="RHSUSF_flashbang_10";
	};
	
	class B_12Gauge_Pellets_Submunition_Deploy;
	class gla_40mm_dragonsbreath_spark : B_12Gauge_Pellets_Submunition_Deploy{
		hit = 4;
		caliber = 0.8;
		airFriction = -0.0094;
		coefGravity = 2.8;
		AP = 2;
		SH = 16;
		CH = 120;
		EN = 100;
		VE = 380;
		explosive = 0.4;
		indirectHit = 2;
		indirectHitRange = 1.2;
		deleteParentWhenTriggered = 1;
		triggerTime = 0;
		explosionTime = 0.02;
		deflecting = 40;
		visibleFire = 100;
		visibleFireTime = 9;
		audibleFire = 850;
		audibleFireTime = 12;
		explosionType = "explosive";
		craterEffects = "ATMissileCrater";
		effectFly = "GLA_Incendiary";
		explosionEffects = "NPExplosion_tiny";
		craterWaterEffects = "ImpactEffectsWater";
		explosionSoundEffect = "DefaultExplosion";
	};
	
	class B_12Gauge_Pellets_Submunition;
	class gla_40mm_dragonsbreath : B_12Gauge_Pellets_Submunition { 
		hit = 6;
		caliber = 1;
		airFriction = -0.001;
		timeToLive = 3;
		simulationStep = 0.01;
		
		AP = 2;
		SH = 10;
		CH = 90;
		EN = 95;
		VE = 340;
		
		visibleFire = 100;
		visibleFireTime = 9;
		audibleFire = 850;
		audibleFireTime = 12;
	
		submunitionAmmo[] = {"gla_40mm_dragonsbreath_spark",1};
		submunitionConeAngle = 6.4;
		submunitionConeType[] = {"random",5};
	};
	
	class G_40mm_HE;
	class gla_40mm_M1060 : G_40mm_HE { //1
		hit = 76;
		caliber = 1.8;
		indirectHit = 395;
		indirectHitRange = 8;
		explosionEffects = "TBExplosion";
		ace_frag_skip = 0;
		ace_frag_charge = 30;
		ace_frag_force = 1;
		ace_frag_metal = 160;
		SH = 220;
		ace_frag_classes[] = {"ACE_frag_small", "ACE_frag_small_HD", "gla_40mm_dragonsbreath"};
	};
	
	class SmokeShell;
	class gla_40mm_cs_gas : SmokeShell {
		timeToLive = 46;
		hit = 4;
		caliber = 2;
		airFriction = -0.0075;
		simulation = "shotSmoke";
		explosionTime = 3;
		AP = 1;
		SH = 2;
		CH = 50;
		EN = 50;
		VE = 180;
		deflecting = 0;
		deflectionSlowDown = 0;
	};
};

class CfgMagazines
{
	class rhs_mag_M441_HE;
	class gla_mag_3Rnd_M441_HE: rhs_mag_M441_HE
	{
		scope=2;
		displayName="3rnd M441 HE Grenade Rounds";
		descriptionshort="Type: High Explosive Grenade<br />Caliber: 40 mm<br />Rounds: 3";
		count=3;
		mass=15.130001;
	};
	class rhs_mag_M433_HEDP;
	class gla_mag_3Rnd_M433_HEDP: rhs_mag_M433_HEDP
	{
		scope=2;
		displayName="3rnd M433 HEDP Grenades";
		descriptionshort="Type: High Explosive Dual Purpose Grenade<br />Caliber: 40 mm<br />Rounds: 32";
		count=3;
		mass=15.130001;
	};
	class rhs_mag_M397_HET;
	class gla_mag_3Rnd_M397_HET: rhs_mag_M397_HET
	{
		scope=2;
		displayName="3rnd M397 HET Grenades";
		descriptionshort="Type: High Explosive Timed<br />Caliber: 40 mm<br />Rounds: 3";
		count=3;
		mass=15.130001;
	};
	class rhs_mag_M781_Practice;
	class gla_mag_3Rnd_M781_Practice: rhs_mag_M781_Practice
	{
		scope=2;
		displayName="3Rnd M781 Practice Round";
		descriptionshort="Type: Practice Grenade<br />Caliber: 40 mm<br />Rounds: 3";
		count=3;
		mass=15.130001;
	};
	class rhs_mag_m4009;
	class gla_mag_3Rnd_m4009: rhs_mag_m4009
	{
		scope=2;
		displayName="3rnd GL Stun Grenade Round";
		descriptionShort="Type: Stun Grenade<br />Caliber: 40 mm<br />Rounds: 3";
		count=3;
		mass=15.130001;
	};
	class gla_mag_m4009_impact: rhs_mag_m4009
	{
		scope=2;
		displayName="GL Stun Grenade (Impact) Round";
		displaynameshort="Stun (Impact)";
		descriptionShort="Type: Stun Grenade (Impact)<br />Caliber: 40 mm<br />Rounds: 1<br />Used in: M203, M320, M79";
		ammo="gla_40mm_FLASHBANG_impact";
	};
	class gla_mag_3Rnd_m4009_impact: gla_mag_m4009_impact 
	{
		scope=2;
		displayName="3rnd GL Stun Grenade (Impact) Round";
		descriptionShort="Type: Stun Grenade (Impact)<br />Caliber: 40 mm<br />Rounds: 3";
		count=3;
		mass=15.130001;
	};
	class gla_mag_6Rnd_m4009_impact: gla_mag_m4009_impact
	{
		scope=2;
		displayName="6rnd GL Stun Grenade (Impact) Round";
		descriptionShort="Type: Stun Grenade (Impact)<br />Caliber: 40 mm<br />Rounds: 6<br />Used in: M32";
		count=6;
		mass=30.360001;
	};
	class rhs_mag_m576;
	class gla_mag_3Rnd_M576_Buckshot: rhs_mag_m576
	{
		scope=2;
		displayName="3rnd M576 Buckshot Round";
		displaynameshort="Buckshot";
		descriptionShort="Type: Buckshot Round<br />Caliber: 40 mm<br />Rounds: 3";
		model="\rhsusf\addons\rhsusf_weapons2\magazines\40mm\rhs_m576";
		picture="\rhsusf\addons\rhsusf_weapons\icons\m576_buckshot_ca.paa";
		ammo="rhs_ammo_m576_buckshot";
		count=3;
		mass=15.130001;
	};
	class 1Rnd_HE_Grenade_shell;
	class gla_mag_M651_CS : 1Rnd_HE_Grenade_shell {
		ammo = "gla_40mm_cs_gas";
		//picture = "\gl_additions\assets\m651.paa";
		displayName = "M651 CS Gas Round";
		displayNameShort = "M651 CS Gas";
		descriptionShort = "Type: CS Gas Grenade<br />Caliber: 40mm<br />Rounds: 1<br />Used in: M203, M320, M79";
	};
	class gla_mag_3Rnd_M651_CS : gla_mag_M651_CS {
		ammo = "gla_40mm_cs_gas";
		displayName = "3Rnd M651 CS Gas Round";
		descriptionShort = "Type: CS Gas Grenade<br />Caliber: 40mm<br />Rounds: 3";
		count=3;
		mass=15.130001;
	};
	class gla_mag_6Rnd_M651_CS : gla_mag_M651_CS {
		ammo = "gla_40mm_cs_gas";
		displayName = "6Rnd M651 CS Gas Round";
		descriptionShort = "Type: CS Gas Grenade<br />Caliber: 40mm<br />Rounds: 6<br />Used in: M32";
		count=6;
		mass=30.360001;
	};
	class 1Rnd_HE_Grenade_shell;
	class gla_mag_M1060_Thermobaric : 1Rnd_HE_Grenade_shell {
		ammo = "gla_40mm_M1060";
		//picture = "\gl_additions\assets\m651.paa";
		displayName = "M1060 Thermobaric Grenade";
		displayNameShort = "M1060 Thermobaric";
		descriptionShort = "Type: Thermobaric Grenade<br />Caliber: 40mm<br />Rounds: 1<br />Used in: M203, M320, M79";
	};
	class gla_mag_3Rnd_M1060_Thermobaric : gla_mag_M1060_Thermobaric {
		ammo = "gla_40mm_M1060";
		displayName = "3Rnd M1060 Thermobaric Grenade";
		descriptionShort = "Type: Thermobaric Grenade<br />Caliber: 40mm<br />Rounds: 3";
		count=3;
		mass=15.130001;
	};
	class gla_mag_6Rnd_M1060_Thermobaric : gla_mag_M1060_Thermobaric {
		ammo = "gla_40mm_M1060";
		displayName = "6Rnd M1060 Thermobaric Grenade";
		descriptionShort = "Type: Thermobaric Grenade<br />Caliber: 40mm<br />Rounds: 6<br />Used in: M32";
		count=6;
		mass=30.360001;
	};
	
};
