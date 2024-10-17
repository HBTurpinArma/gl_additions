class CfgPatches
{
	class gl_additions
	{
		units[]={};
		weapons[]={};
		magazines[]={};
		requiredVersion=1.0;
		requiredAddons[]=
		{
			"rhsusf_main",
			"rhsusf_c_weapons"
		};
		name="Grenade Launcher Additions";
		author="HBTurpin";
		url="https://github.com/HBTurpinArma";
	};
};


class CfgMagazineWells
{
	class CBA_40mm_M203
	{
		GL_Additions[]=
		{
			"gla_mag_m4009_impact"
		};
	};
	class CBA_40mm_3GL
	{
		GL_Additions[]=
		{
			"gla_mag_3Rnd_M441_HE",
			"gla_mag_3Rnd_M397_HET",
			"gla_mag_3Rnd_m4009",
			"gla_mag_3Rnd_m4009_impact",
			"gla_mag_3Rnd_M433_HEDP",
			"gla_mag_3Rnd_M576_Buckshot",
			"gla_mag_3Rnd_M781_Practice"
		};
	};
	class CBA_40mm_M203_6rnds
	{
		GL_Additions[]=
		{
			"gla_mag_6Rnd_m4009_impact"
		};
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
		displaynameshort="Stun Grenade (Impact)";
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
};
