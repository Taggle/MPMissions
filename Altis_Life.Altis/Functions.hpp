class Socket_Reciever {
	tag = "SOCK";
	class SQL_Socket {
		file = "core\session";
		class dataQuery {};
		class insertPlayerInfo {};
		class requestReceived {};
		class syncData {};
		class updatePartial {};
		class updateRequest {};
	};
};

class Life_Client_Core {
	tag = "life";

	class Master_Directory {
		file = "core";
		class initCiv {};
		class initCop {};
		class initMedic {};
		class setupActions {};
		class setupEVH {};
		class survival {};
		class welcomeNotification {};
	};

	class Actions {
		file = "core\actions";
		class arrestAction {};
		class buyLicense {};
		class captureHideout {};
		class catchFish {};
		class dpFinish {};
		class dropFishingNet {};
		class escortAction {};
		class gather {};
		class getDPMission {};
		class gutAnimal {};
		class healHospital {};
		class impoundAction {};
		class mine {};
		class packupSpikes {};
		class pickupItem {};
		class pickupMoney {};
		class postBail {};
		class processAction {};
		class pulloutAction {};
		class pushVehicle {};
		class putInCar {};
		class removeContainer {};
		class repairTruck {};
		class restrainAction {};
		class robAction {};
		class searchAction {};
		class searchVehAction {};
		class seizePlayerAction {};
		class serviceChopper {};
		class stopEscorting {};
		class storeVehicle {};
		class surrender {};
		class ticketAction {};
		class unrestrain {};
	};

	class Admin {
		file = "core\admin";
		class adminCompensate {};
		class adminDebugCon {};
		class adminFreeze {};
		class admingetID {};
		class adminGodMode {};
		class adminid {};
		class admininfo {};
		class adminMarkers {};
		class adminMenu {};
		class adminQuery {};
		class adminSpectate {};
		class adminTeleport {};
		class adminTpHere {};
	};

	class Civilian {
		file = "core\civilian";
		class civLoadout {};
		class civMarkers {};
		class demoChargeTimer {};
		class freezePlayer {};
		class jail {};
		class jailMe {};
		class knockedOut {};
		class knockoutAction {};
		class removeLicenses {};
		class robPerson {};
		class robReceive {};
		class tazed {};
	};

	class Config {
		file = "core\config";
		class houseConfig {};
		class itemWeight {};
		class taxRate {};
		class vehicleAnimate {};
		class vehicleWeightCfg {};
	};

	class Cop {
		file = "core\cop";
		class bountyReceive {};
		class containerInvSearch {};
		class copInteractionMenu {};
		class copLights {};
		class copLoadout {};
		class copMarkers {};
		class copSearch {};
		class copSiren {};
		class doorAnimate {};
		class fedCamDisplay {};
		class licenseCheck {};
		class licensesRead {};
		class questionDealer {};
		class radar {};
		class repairDoor {};
		class restrain {};
		class searchClient {};
		class seizeClient {};
		class sirenLights {};
		class spikeStripEffect {};
		class ticketGive {};
		class ticketPaid {};
		class ticketPay {};
		class ticketPrompt {};
		class vehInvSearch {};
		class wantedGrab {};
	};

	class Dialog_Controls {
		file = "dialog\function";
		class bankDeposit {};
		class bankTransfer {};
		class bankWithdraw {};
		class displayHandler {};
		class gangDeposit {};
		class gangWithdraw {};
		class garageLBChange {};
		class impoundMenu {};
		class progressBar {};
		class safeFix {};
		class safeInventory {};
		class safeOpen {};
		class safeTake {};
		class sellGarage {};
		class setMapPosition {};
		class spawnConfirm {};
		class spawnMenu {};
		class spawnPointCfg {};
		class spawnPointSelected {};
		class unimpound {};
		class vehicleGarage {};
		class wireTransfer {};
		class forcerRespawn {};
	};

	class Functions	{
		file = "core\functions";
		class accType {};
		class actionKeyHandler {};
		class animSync {};
		class calWeightDiff {};
		class clearVehicleAmmo {};
		class dropItems {};
		class escInterupt {};
		class fetchCfgDetails {};
		class fetchDeadGear {};
		class fetchVehInfo {};
		class giveDiff {};
		class handleDamage {};
		class handleInv {};
		class handleItem {};
		class hideObj {};
		class hudSetup {};
		class hudUpdate {};
		class inventoryClosed {};
		class inventoryOpened {};
		class isnumeric {};
		class isUIDActive {};
		class keyHandler {};
		class loadDeadGear {};
		class loadGear {};
		class nearATM {};
		class nearestDoor {};
		class nearUnits {};
		class numberText {};
		class onFired {};
		class onTakeItem {};
		class playerCount {};
		class playerSkins {};
		class playerTags {};
		class pullOutVeh {};
		class pushObject {};
		class receiveItem {};
		class receiveMoney {};
		class revealObjects {};
		class saveGear {};
		class searchPosEmpty {};
		class simDisable {};
		class stripDownPlayer {};
		class tazeSound {};
		class teleport {};
		class whereAmI {};
		class jihad {};
	};

	class Gangs	{
		file = "core\gangs";
		class createGang {};
		class gangCreated {};
		class gangDisband {};
		class gangDisbanded {};
		class gangInvite {};
		class gangInvitePlayer {};
		class gangKick {};
		class gangLeave {};
		class gangMenu {};
		class gangNewLeader {};
		class gangUpgrade {};
		class initGang {};
	};

	class Housing {
		file = "core\housing";
		class buyHouse {};
		class containerMenu {};
		class copBreakDoor {};
		class copHouseOwner {};
		class garageRefund {};
		class getBuildingPositions {};
		class houseMenu {};
		class initHouses {};
		class lightHouse {};
		class lightHouseAction {};
		class lockHouse {};
		class lockupHouse {};
		class placeContainer {};
		class PlayerInBuilding {};
		class raidHouse {};
		class sellHouse {};
	};

	class Items	{
		file = "core\items";
		class blastingCharge {};
		class boltcutter {};
		class defuseKit {};
		class flashbang {};
		class jerryRefuel {};
		class lockpick {};
		class placedefinestorage {};
		class placestorageBig {};
		class placestorageSmall {};
		class spikeStrip {};
		class storageBoxBig {};
		class storageBoxSmall {};
	};

	class Medical_System {
		file = "core\medical";
		class deathScreen {};
		class medicLights {};
		class medicLoadout {};
		class medicMarkers {};
		class medicRequest {};
		class medicSiren {};
		class medicSirenLights {};
		class onPlayerKilled {};
		class onPlayerRespawn {};
		class requestMedic {};
		class respawned {};
		class revived {};
		class revivePlayer {};
	};

	class Network {
		file = "core\functions\network";
		class broadcast {};
		class corpse {};
		class jumpFnc {};
		class say3D {};
		class setFuel {};
		class soundDevice {};
		class MP {};
		class MPexec {};
	};

	class Player_Menu {
		file = "core\pmenu";
		class altisPhone {};
		class cellphone {};
		class giveItem {};
		class giveMoney {};
		class keyDrop {};
		class keyGive {};
		class keyMenu {};
		class p_openMenu {};
		class p_updateMenu {};
		class pardon {};
		class removeItem {};
		class s_onChar {};
		class s_onCheckedChange {};
		class s_onSliderChange {};
		class settingsMenu {};
		class updateViewDistance {};
		class useItem {};
		class wantedAddP {};
		class wantedInfo {};
		class wantedList {};
		class wantedMenu {};
		class revokeLicense {};
	};

	class Shops	{
		file = "core\shops";
		class atmMenu {};
		class buyClothes {};
		class changeClothes {};
		class chopShopMenu {};
		class chopShopSelection {};
		class chopShopSell {};
		class clothingFilter {};
		class clothingMenu {};
		class FuelLBchange {};
		class FuelStatOpen {};
		class vehicleShop3DPreview {};
		class vehicleShopBuy {};
		class vehicleShopEnd3DPreview {};
		class vehicleShopInit3DPreview {};
		class vehicleShopLBChange {};
		class vehicleShopMenu {};
		class virt_buy {};
		class virt_menu {};
		class virt_sell {};
		class virt_update {};
		class weaponShopAccs {};
		class weaponShopBuySell {};
		class weaponShopFilter {};
		class weaponShopMags {};
		class weaponShopMenu {};
		class weaponShopSelection {};
	};

	class Vehicle {
		file = "core\vehicle";
		class addVehicle2Chain {};
		class colorVehicle {};
		class deviceMine {};
		class FuelRefuelcar {};
		class fuelStore {};
		class fuelSupply {};
		class lockVehicle {};
		class openInventory {};
		class vehiclecolor3DRefresh {};
		class vehicleOwners {};
		class vehicleWeight {};
		class vehInventory {};
		class vehStoreItem {};
		class vehTakeItem {};
		class vInteractionMenu {};
	};

	class Shark_Communications {
		file = "Shark\Communications";
		class smartphone {};
		class newMsg {};
		class showMsg {};
		class checkPhone {};
	};

	class Shark_Police {
		file = "Shark\Police";
		class gpsTracker {};
	};

	class Shark_Actions {
		file = "Shark\Actions";
		class executer {};
		class montrerPapiers {};
		class souffler {};
		class soufflerBallon {};
		class voirPapiers {};
	};

	class Shark_Functions {
		file = "Shark\Functions";
		class breathalyzer {};
		class overdose {};
		class airsoft {};
	};

	class Shark_Items {
		file = "Shark\Items";
		class biere {};
		class moonshine {};
		class whiskey {};
	};

	class Shark_Placeables {
		file = "Shark\Placeables";
		class Cone {};
		class packupCone {};
		class ConeL {};
		class packupConeL {};
		class barriere {};
		class packupBarriere {};
		class barriereRef {};
		class packupBarriereRef {};
		class barriereL {};
		class packupBarriereL {};
		class bornebeton {};
		class packupBornebeton {};
		class cordonsecurite {};
		class packupCordonsecurite {};
	};

	class DynMarket
    {
        file = "core\DynMarket";
        class bought {};
        class update {};
        class DisplayPrices {};
        class LoadIntoListbox {};
        class ForcePrice {};
        class DYNMARKET_getPrice {};
    };
};
