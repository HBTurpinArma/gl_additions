//Addition effects for ammo types
class GLA_Incendiary {
	class Impact {
		intensity = 1;
		interval = 1;
		lifeTime = 0.6;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "GLA_Incendiary_Impact";
	};
	class Fire1
	{
		intensity=1;
		interval=1;
		lifeTime=25;
		position[]={0,0,0};
		simulation="particles";
		type="GLA_Thermite";
	};
	class LightExp {
		intensity = 0.0017;
		interval = 1;
		lifeTime = 1.6;
		position[] = {0, 0, 0};
		simulation = "light";
		type = "ExploLight";
	};
	class FireSparks
	{
		intensity=1;
		interval=1;
		lifeTime=30;
		position[]={0,0,0};
		simulation="particles";
		type="FireSparks";
	};
	class SparksLightSabot
	{
		intensity=0.001;
		interval=1;
		lifeTime=30;
		position[]={0,0,0};
		simulation="light";
	};
};



//Actual start of ammo cfg..
class CfgAmmo
{	
	class B_12Gauge_Pellets_Submunition_Deploy;
	class B_12Gauge_Pellets_Submunition;
	class rhsusf_40mm_FLASHBANG;
	class G_40mm_HE;
	class SmokeShell;
    class FlareBase;

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
	
	class gla_40mm_M1060 : G_40mm_HE {
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

	class gla_40mm_APERS_Mine: G_40mm_HE
	{
		allowAgainstInfantry=1;
		submunitionAmmo[]={"APERSMineDispenser_Deploy", 1};
		submunitionConeType[]={"poissondisccenter", 1};
		submunitionCount=1;
		triggerOnImpact=1;
		submunitionDirectionType="SubmunitionModelDirection";
		submunitionInitialOffset[]={0,0,-0.5};
		fuseDistance=0;
		submunitionParentSpeedCoef=0;
		deleteParentWhenTriggered=-1;
		submunitionInitSpeed=1;
	};
};