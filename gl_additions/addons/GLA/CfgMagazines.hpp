//The below config is purely the magazine items and what ammo type they use.
class CfgMagazines
{
	//RHS 3GL Compatability
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


	//New GL Additions
	//Ideally we want to create new magaine icon for all of these using //picture = "\gl_additions\assets\xxx.paa";
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


	class 1Rnd_HE_Grenade_shell;
	class gla_mag_M651_CS : 1Rnd_HE_Grenade_shell {
		ammo = "gla_40mm_cs_gas";
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