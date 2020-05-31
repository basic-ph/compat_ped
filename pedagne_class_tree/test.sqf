// OVERPRESSURE
private _id = ["ace_overpressure", {copyToClipboard str _this}] call CBA_fnc_addEventHandler;
_id;

// TESTING

_configs = "true" configClasses (configfile >> "CfgVehicles" >> "B_Quadbike_01_F");
_configs; // [bin\config.bin/CfgVehicles/B_Quadbike_01_F/SimpleObject]

_props = configProperties [configFile >> "CfgVehicles" >> "B_Quadbike_01_F", "true", false];
_props;
[
bin\config.bin/CfgVehicles/B_Quadbike_01_F/author,
bin\config.bin/CfgVehicles/B_Quadbike_01_F/SimpleObject,
bin\config.bin/CfgVehicles/B_Quadbike_01_F/editorPreview,
bin\config.bin/CfgVehicles/B_Quadbike_01_F/_generalMacro,
bin\config.bin/CfgVehicles/B_Quadbike_01_F/scope
,bin\config.bin/CfgVehicles/B_Quadbike_01_F/side,
bin\config.bin/CfgVehicles/B_Quadbike_01_F/faction,
bin\config.bin/CfgVehicles/B_Quadbike_01_F/crew,
bin\config.bin/CfgVehicles/B_Quadbike_01_F/typicalCargo,
bin\config.bin/CfgVehicles/B_Quadbike_01_F/hiddenSelectionsTextures,
bin\config.bin/CfgVehicles/B_Quadbike_01_F/textureList
]

_scope = getNumber (configFile >> "CfgVehicles" >> "B_Quadbike_01_F" >> "scope");
_scope; // 2
_author = getText (configFile >> "CfgVehicles" >> "B_Quadbike_01_F" >> "author");
_author; // "Bohemia Interactive"

_test = "true" configClasses (configfile >> "CfgPatches" >> "ASZ_Wheel_A3"); // [] non ha classi
_test = configProperties [configFile >> "CfgPatches" >> "ASZ_Wheel_A3", "true", false];
_test;
[
bin\config.bin/CfgPatches/ASZ_Wheel_A3/Units,
bin\config.bin/CfgPatches/ASZ_Wheel_A3/weapons,
bin\config.bin/CfgPatches/ASZ_Wheel_A3/requiredVersion,
bin\config.bin/CfgPatches/ASZ_Wheel_A3/requiredAddons
]

typeName (_units select 0); // Returns the data type of an expression

_units = getArray (configfile >> "CfgPatches" >> "ASZ_Wheel_A3" >> "Units");
_units;
_data = [];
{
  _baseClass = configName (inheritsFrom (configfile >> "CfgVehicles" >> _x));
  _data pushBack [_x, _baseClass];
} forEach _units;
_data;
count _data;
// --------------------------------------------------------------------------------------

_classes = ( "isClass _x && ('ASZ' in (configName _x) || 'asz' in (configName _x))" configClasses( configFile >> "CfgVehicles" ));


_classes = ( "isClass _x && ('ASZ' in (configName _x))" configClasses( configFile >> "CfgVehicles" ));
_data = [];
{
  _data pushBack (configName _x);
} forEach _classes;
_data;




// -------------------------------------------------------------------------------------
_hiarachy = [];

_classes = ( "isClass _x && ('ACE' in (configName _x))" configClasses( configFile >> "CfgVehicles" ));

{
	_parents = [ _x, true ] call BIS_fnc_returnParents;
	reverse _parents;
	_tree = _hiarachy;

	{
		_x params[ "_className" ];
		
		_index = { if ( _x select 0 == _classname )exitWith{ _forEachIndex } }forEach _tree;
		if ( isNil "_index" ) exitWith {
			_index = _tree pushBack [ _classname, [] ];
			_tree = _tree select _index select 1;

			{
				_index = _tree pushBack _x;
				_tree = _tree select _index select 1;

			}forEach ( _parents select[ _forEachIndex +1, count _parents ] );
		};
		_tree = _tree select _index select 1;

	}forEach _parents;
}forEach _classes;

_RETURN = [ 13, 10 ];
_TAB = [ 09 ];

_output = "";
_tabIndent = 0;

_fnc_addTabs = {
	params[ "_numTabs" ];
	
	_tabs = "";
	for "_i" from 1 to _numTabs do {
		_tabs = formatText[ "%1%2", _tabs, toString _TAB ];
	};
	
	_tabs
};

_fnc_output = {
	params[ "_array" ];
	
	{
		_x params[ "_class", "_derived" ];
		
		_tabs = [ _tabIndent ] call _fnc_addTabs;
		_output = formatText[ "%1%2%3,%4", _output, _tabs, str _class, toString _RETURN ];
		
		if ( count _derived > 0 ) then {
			_tabIndent = _tabIndent + 1;
			[ _derived ] call _fnc_output;
			_tabIndent = _tabIndent - 1;
		};
	}forEach _array;
};

[ _hiarachy ] call _fnc_output;

copyToClipboard str _output;