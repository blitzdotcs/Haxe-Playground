#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepad
#include <flixel/input/gamepad/FlxGamepad.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadButton
#include <flixel/input/gamepad/FlxGamepadButton.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#include <flixel/input/gamepad/FlxGamepadManager.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadModel
#include <flixel/input/gamepad/FlxGamepadModel.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_GameInputEvent
#include <openfl/events/GameInputEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInput
#include <openfl/ui/GameInput.h>
#endif
#ifndef INCLUDED_openfl_ui_GameInputDevice
#include <openfl/ui/GameInputDevice.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dd40c6c1396c027e_19_new,"flixel.input.gamepad.FlxGamepadManager","new",0x05218fad,"flixel.input.gamepad.FlxGamepadManager.new","flixel/input/gamepad/FlxGamepadManager.hx",19,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_77_getByID,"flixel.input.gamepad.FlxGamepadManager","getByID",0xe19992f5,"flixel.input.gamepad.FlxGamepadManager.getByID","flixel/input/gamepad/FlxGamepadManager.hx",77,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_81_removeByID,"flixel.input.gamepad.FlxGamepadManager","removeByID",0x7466a829,"flixel.input.gamepad.FlxGamepadManager.removeByID","flixel/input/gamepad/FlxGamepadManager.hx",81,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_106_createByID,"flixel.input.gamepad.FlxGamepadManager","createByID",0x09d52ee1,"flixel.input.gamepad.FlxGamepadManager.createByID","flixel/input/gamepad/FlxGamepadManager.hx",106,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_143_getActiveGamepadIDs,"flixel.input.gamepad.FlxGamepadManager","getActiveGamepadIDs",0x2dbae5a0,"flixel.input.gamepad.FlxGamepadManager.getActiveGamepadIDs","flixel/input/gamepad/FlxGamepadManager.hx",143,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_161_getActiveGamepads,"flixel.input.gamepad.FlxGamepadManager","getActiveGamepads",0xd3d79bdb,"flixel.input.gamepad.FlxGamepadManager.getActiveGamepads","flixel/input/gamepad/FlxGamepadManager.hx",161,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_177_getFirstActiveGamepadID,"flixel.input.gamepad.FlxGamepadManager","getFirstActiveGamepadID",0x40a7d549,"flixel.input.gamepad.FlxGamepadManager.getFirstActiveGamepadID","flixel/input/gamepad/FlxGamepadManager.hx",177,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_187_getFirstActiveGamepad,"flixel.input.gamepad.FlxGamepadManager","getFirstActiveGamepad",0x4c49bdee,"flixel.input.gamepad.FlxGamepadManager.getFirstActiveGamepad","flixel/input/gamepad/FlxGamepadManager.hx",187,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_199_anyButton,"flixel.input.gamepad.FlxGamepadManager","anyButton",0x595b810b,"flixel.input.gamepad.FlxGamepadManager.anyButton","flixel/input/gamepad/FlxGamepadManager.hx",199,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_211_anyInput,"flixel.input.gamepad.FlxGamepadManager","anyInput",0xa448cb11,"flixel.input.gamepad.FlxGamepadManager.anyInput","flixel/input/gamepad/FlxGamepadManager.hx",211,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_224_anyPressed,"flixel.input.gamepad.FlxGamepadManager","anyPressed",0x4626e969,"flixel.input.gamepad.FlxGamepadManager.anyPressed","flixel/input/gamepad/FlxGamepadManager.hx",224,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_232_anyJustPressed,"flixel.input.gamepad.FlxGamepadManager","anyJustPressed",0x8467941d,"flixel.input.gamepad.FlxGamepadManager.anyJustPressed","flixel/input/gamepad/FlxGamepadManager.hx",232,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_240_anyJustReleased,"flixel.input.gamepad.FlxGamepadManager","anyJustReleased",0x5d1012e2,"flixel.input.gamepad.FlxGamepadManager.anyJustReleased","flixel/input/gamepad/FlxGamepadManager.hx",240,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_244_anyHasState,"flixel.input.gamepad.FlxGamepadManager","anyHasState",0xbc3797b0,"flixel.input.gamepad.FlxGamepadManager.anyHasState","flixel/input/gamepad/FlxGamepadManager.hx",244,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_259_anyMovedXAxis,"flixel.input.gamepad.FlxGamepadManager","anyMovedXAxis",0x17da8f9f,"flixel.input.gamepad.FlxGamepadManager.anyMovedXAxis","flixel/input/gamepad/FlxGamepadManager.hx",259,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_280_anyMovedYAxis,"flixel.input.gamepad.FlxGamepadManager","anyMovedYAxis",0xab412420,"flixel.input.gamepad.FlxGamepadManager.anyMovedYAxis","flixel/input/gamepad/FlxGamepadManager.hx",280,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_299_destroy,"flixel.input.gamepad.FlxGamepadManager","destroy",0xf27a16c7,"flixel.input.gamepad.FlxGamepadManager.destroy","flixel/input/gamepad/FlxGamepadManager.hx",299,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_318_reset,"flixel.input.gamepad.FlxGamepadManager","reset",0x09fe365c,"flixel.input.gamepad.FlxGamepadManager.reset","flixel/input/gamepad/FlxGamepadManager.hx",318,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_348_onDeviceAdded,"flixel.input.gamepad.FlxGamepadManager","onDeviceAdded",0x0a66e6f8,"flixel.input.gamepad.FlxGamepadManager.onDeviceAdded","flixel/input/gamepad/FlxGamepadManager.hx",348,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_353_onDeviceRemoved,"flixel.input.gamepad.FlxGamepadManager","onDeviceRemoved",0xfdb62fd8,"flixel.input.gamepad.FlxGamepadManager.onDeviceRemoved","flixel/input/gamepad/FlxGamepadManager.hx",353,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_357_findGamepadIndex,"flixel.input.gamepad.FlxGamepadManager","findGamepadIndex",0xba70451d,"flixel.input.gamepad.FlxGamepadManager.findGamepadIndex","flixel/input/gamepad/FlxGamepadManager.hx",357,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_369_addGamepad,"flixel.input.gamepad.FlxGamepadManager","addGamepad",0xa73480d3,"flixel.input.gamepad.FlxGamepadManager.addGamepad","flixel/input/gamepad/FlxGamepadManager.hx",369,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_386_getModelFromDeviceName,"flixel.input.gamepad.FlxGamepadManager","getModelFromDeviceName",0x16d9cf71,"flixel.input.gamepad.FlxGamepadManager.getModelFromDeviceName","flixel/input/gamepad/FlxGamepadManager.hx",386,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_431_removeGamepad,"flixel.input.gamepad.FlxGamepadManager","removeGamepad",0xfe38fe4a,"flixel.input.gamepad.FlxGamepadManager.removeGamepad","flixel/input/gamepad/FlxGamepadManager.hx",431,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_577_update,"flixel.input.gamepad.FlxGamepadManager","update",0x32fe94dc,"flixel.input.gamepad.FlxGamepadManager.update","flixel/input/gamepad/FlxGamepadManager.hx",577,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_582_onFocus,"flixel.input.gamepad.FlxGamepadManager","onFocus",0x68bae806,"flixel.input.gamepad.FlxGamepadManager.onFocus","flixel/input/gamepad/FlxGamepadManager.hx",582,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_586_onFocusLost,"flixel.input.gamepad.FlxGamepadManager","onFocusLost",0xeb47390a,"flixel.input.gamepad.FlxGamepadManager.onFocusLost","flixel/input/gamepad/FlxGamepadManager.hx",586,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_590_get_numActiveGamepads,"flixel.input.gamepad.FlxGamepadManager","get_numActiveGamepads",0x4cfd1ae2,"flixel.input.gamepad.FlxGamepadManager.get_numActiveGamepads","flixel/input/gamepad/FlxGamepadManager.hx",590,0xccfee0a6)
HX_LOCAL_STACK_FRAME(_hx_pos_dd40c6c1396c027e_68_boot,"flixel.input.gamepad.FlxGamepadManager","boot",0x70552845,"flixel.input.gamepad.FlxGamepadManager.boot","flixel/input/gamepad/FlxGamepadManager.hx",68,0xccfee0a6)
namespace flixel{
namespace input{
namespace gamepad{

void FlxGamepadManager_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_dd40c6c1396c027e_19_new)
HXLINE(  62)		this->_activeGamepads = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  57)		this->_gamepads = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 326)		this->deviceConnected =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
HXLINE( 327)		this->deviceDisconnected =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
HXLINE( 337)		::flixel::input::gamepad::FlxGamepadManager_obj::_gameInput->addEventListener(HX_("deviceAdded",4a,08,84,0b),this->onDeviceAdded_dyn(),null(),null(),null());
HXLINE( 338)		::flixel::input::gamepad::FlxGamepadManager_obj::_gameInput->addEventListener(HX_("deviceRemoved",aa,c9,5b,59),this->onDeviceRemoved_dyn(),null(),null(),null());
HXLINE( 340)		{
HXLINE( 340)			int _g = 0;
HXDLIN( 340)			int _g1 = ::openfl::ui::GameInput_obj::numDevices;
HXDLIN( 340)			while((_g < _g1)){
HXLINE( 340)				_g = (_g + 1);
HXDLIN( 340)				int i = (_g - 1);
HXLINE( 341)				this->addGamepad(::openfl::ui::GameInput_obj::getDeviceAt(i));
            			}
            		}
            	}

Dynamic FlxGamepadManager_obj::__CreateEmpty() { return new FlxGamepadManager_obj; }

void *FlxGamepadManager_obj::_hx_vtable = 0;

Dynamic FlxGamepadManager_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxGamepadManager_obj > _hx_result = new FlxGamepadManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxGamepadManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x77bb146b;
}

static ::flixel::input::IFlxInputManager_obj _hx_flixel_input_gamepad_FlxGamepadManager__hx_flixel_input_IFlxInputManager= {
	( void (::hx::Object::*)())&::flixel::input::gamepad::FlxGamepadManager_obj::destroy,
	( void (::hx::Object::*)())&::flixel::input::gamepad::FlxGamepadManager_obj::reset,
	( void (::hx::Object::*)())&::flixel::input::gamepad::FlxGamepadManager_obj::update,
	( void (::hx::Object::*)())&::flixel::input::gamepad::FlxGamepadManager_obj::onFocus,
	( void (::hx::Object::*)())&::flixel::input::gamepad::FlxGamepadManager_obj::onFocusLost,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_input_gamepad_FlxGamepadManager__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::input::gamepad::FlxGamepadManager_obj::destroy,
};

void *FlxGamepadManager_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x65dd217a: return &_hx_flixel_input_gamepad_FlxGamepadManager__hx_flixel_input_IFlxInputManager;
		case (int)0xd4fe2fcd: return &_hx_flixel_input_gamepad_FlxGamepadManager__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::flixel::input::gamepad::FlxGamepad FlxGamepadManager_obj::getByID(int GamepadID){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_77_getByID)
HXDLIN(  77)		return this->_activeGamepads->__get(GamepadID).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getByID,return )

void FlxGamepadManager_obj::removeByID(int GamepadID){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_81_removeByID)
HXLINE(  82)		 ::flixel::input::gamepad::FlxGamepad gamepad = this->_gamepads->__get(GamepadID).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
HXLINE(  84)		if (::hx::IsNotNull( gamepad )) {
HXLINE(  86)			this->_gamepads[GamepadID] = null();
HXLINE(  88)			int i = this->_activeGamepads->indexOf(gamepad,null());
HXLINE(  89)			if ((i != -1)) {
HXLINE(  91)				this->_activeGamepads[i] = null();
HXLINE(  92)				this->deviceDisconnected->dispatch(gamepad);
            			}
HXLINE(  95)			::flixel::util::FlxDestroyUtil_obj::destroy(gamepad);
            		}
HXLINE(  98)		if (::hx::IsInstanceEq( this->lastActive,gamepad )) {
HXLINE(  99)			this->lastActive = null();
            		}
HXLINE( 101)		if (::hx::IsInstanceEq( this->firstActive,gamepad )) {
HXLINE( 102)			this->firstActive = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,removeByID,(void))

 ::flixel::input::gamepad::FlxGamepad FlxGamepadManager_obj::createByID(int GamepadID, ::flixel::input::gamepad::FlxGamepadModel Model){
            	HX_GC_STACKFRAME(&_hx_pos_dd40c6c1396c027e_106_createByID)
HXLINE( 107)		 ::flixel::input::gamepad::FlxGamepad gamepad = this->_gamepads->__get(GamepadID).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
HXLINE( 108)		if (::hx::IsNull( gamepad )) {
HXLINE( 110)			gamepad =  ::flixel::input::gamepad::FlxGamepad_obj::__alloc( HX_CTX ,GamepadID,::hx::ObjectPtr<OBJ_>(this),Model,null());
HXLINE( 111)			this->_gamepads[GamepadID] = gamepad;
HXLINE( 114)			bool nullFound = false;
HXLINE( 115)			{
HXLINE( 115)				int _g = 0;
HXDLIN( 115)				int _g1 = this->_activeGamepads->length;
HXDLIN( 115)				while((_g < _g1)){
HXLINE( 115)					_g = (_g + 1);
HXDLIN( 115)					int i = (_g - 1);
HXLINE( 117)					if (::hx::IsNull( this->_activeGamepads->__get(i).StaticCast<  ::flixel::input::gamepad::FlxGamepad >() )) {
HXLINE( 119)						this->_activeGamepads[i] = gamepad;
HXLINE( 120)						nullFound = true;
HXLINE( 121)						goto _hx_goto_4;
            					}
            				}
            				_hx_goto_4:;
            			}
HXLINE( 125)			if (!(nullFound)) {
HXLINE( 126)				this->_activeGamepads->push(gamepad);
            			}
            		}
HXLINE( 129)		this->lastActive = gamepad;
HXLINE( 130)		if (::hx::IsNull( this->firstActive )) {
HXLINE( 131)			this->firstActive = gamepad;
            		}
HXLINE( 133)		return gamepad;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepadManager_obj,createByID,return )

::Array< int > FlxGamepadManager_obj::getActiveGamepadIDs(::Array< int > IDsArray){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_143_getActiveGamepadIDs)
HXLINE( 144)		if (::hx::IsNull( IDsArray )) {
HXLINE( 145)			IDsArray = ::Array_obj< int >::__new(0);
            		}
HXLINE( 147)		{
HXLINE( 147)			int _g = 0;
HXDLIN( 147)			::Array< ::Dynamic> _g1 = this->_gamepads;
HXDLIN( 147)			while((_g < _g1->length)){
HXLINE( 147)				 ::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
HXDLIN( 147)				_g = (_g + 1);
HXLINE( 148)				bool _hx_tmp;
HXDLIN( 148)				if (::hx::IsNotNull( gamepad )) {
HXLINE( 148)					_hx_tmp = gamepad->anyInput();
            				}
            				else {
HXLINE( 148)					_hx_tmp = false;
            				}
HXDLIN( 148)				if (_hx_tmp) {
HXLINE( 149)					IDsArray->push(gamepad->id);
            				}
            			}
            		}
HXLINE( 151)		return IDsArray;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getActiveGamepadIDs,return )

::Array< ::Dynamic> FlxGamepadManager_obj::getActiveGamepads(::Array< ::Dynamic> GamepadArray){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_161_getActiveGamepads)
HXLINE( 162)		if (::hx::IsNull( GamepadArray )) {
HXLINE( 163)			GamepadArray = ::Array_obj< ::Dynamic>::__new(0);
            		}
HXLINE( 165)		{
HXLINE( 165)			int _g = 0;
HXDLIN( 165)			::Array< ::Dynamic> _g1 = this->_gamepads;
HXDLIN( 165)			while((_g < _g1->length)){
HXLINE( 165)				 ::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
HXDLIN( 165)				_g = (_g + 1);
HXLINE( 166)				bool _hx_tmp;
HXDLIN( 166)				if (::hx::IsNotNull( gamepad )) {
HXLINE( 166)					_hx_tmp = gamepad->anyInput();
            				}
            				else {
HXLINE( 166)					_hx_tmp = false;
            				}
HXDLIN( 166)				if (_hx_tmp) {
HXLINE( 167)					GamepadArray->push(gamepad);
            				}
            			}
            		}
HXLINE( 169)		return GamepadArray;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getActiveGamepads,return )

int FlxGamepadManager_obj::getFirstActiveGamepadID(){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_177_getFirstActiveGamepadID)
HXLINE( 178)		 ::flixel::input::gamepad::FlxGamepad firstActive = this->getFirstActiveGamepad();
HXLINE( 179)		if (::hx::IsNull( firstActive )) {
HXLINE( 179)			return -1;
            		}
            		else {
HXLINE( 179)			return firstActive->id;
            		}
HXDLIN( 179)		return 0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,getFirstActiveGamepadID,return )

 ::flixel::input::gamepad::FlxGamepad FlxGamepadManager_obj::getFirstActiveGamepad(){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_187_getFirstActiveGamepad)
HXLINE( 188)		{
HXLINE( 188)			int _g = 0;
HXDLIN( 188)			::Array< ::Dynamic> _g1 = this->_gamepads;
HXDLIN( 188)			while((_g < _g1->length)){
HXLINE( 188)				 ::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
HXDLIN( 188)				_g = (_g + 1);
HXLINE( 189)				bool _hx_tmp;
HXDLIN( 189)				if (::hx::IsNotNull( gamepad )) {
HXLINE( 189)					_hx_tmp = gamepad->anyInput();
            				}
            				else {
HXLINE( 189)					_hx_tmp = false;
            				}
HXDLIN( 189)				if (_hx_tmp) {
HXLINE( 190)					return gamepad;
            				}
            			}
            		}
HXLINE( 192)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,getFirstActiveGamepad,return )

bool FlxGamepadManager_obj::anyButton(::hx::Null< int >  __o_state){
            		int state = __o_state.Default(1);
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_199_anyButton)
HXLINE( 200)		{
HXLINE( 200)			int _g = 0;
HXDLIN( 200)			::Array< ::Dynamic> _g1 = this->_gamepads;
HXDLIN( 200)			while((_g < _g1->length)){
HXLINE( 200)				 ::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
HXDLIN( 200)				_g = (_g + 1);
HXLINE( 201)				bool _hx_tmp;
HXDLIN( 201)				if (::hx::IsNotNull( gamepad )) {
HXLINE( 201)					_hx_tmp = gamepad->anyButton(state);
            				}
            				else {
HXLINE( 201)					_hx_tmp = false;
            				}
HXDLIN( 201)				if (_hx_tmp) {
HXLINE( 202)					return true;
            				}
            			}
            		}
HXLINE( 204)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyButton,return )

bool FlxGamepadManager_obj::anyInput(){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_211_anyInput)
HXLINE( 212)		{
HXLINE( 212)			int _g = 0;
HXDLIN( 212)			::Array< ::Dynamic> _g1 = this->_gamepads;
HXDLIN( 212)			while((_g < _g1->length)){
HXLINE( 212)				 ::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
HXDLIN( 212)				_g = (_g + 1);
HXLINE( 213)				bool _hx_tmp;
HXDLIN( 213)				if (::hx::IsNotNull( gamepad )) {
HXLINE( 213)					_hx_tmp = gamepad->anyInput();
            				}
            				else {
HXLINE( 213)					_hx_tmp = false;
            				}
HXDLIN( 213)				if (_hx_tmp) {
HXLINE( 214)					return true;
            				}
            			}
            		}
HXLINE( 216)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,anyInput,return )

bool FlxGamepadManager_obj::anyPressed(int buttonID){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_224_anyPressed)
HXDLIN( 224)		return this->anyHasState(buttonID,1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyPressed,return )

bool FlxGamepadManager_obj::anyJustPressed(int buttonID){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_232_anyJustPressed)
HXDLIN( 232)		return this->anyHasState(buttonID,2);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyJustPressed,return )

bool FlxGamepadManager_obj::anyJustReleased(int buttonID){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_240_anyJustReleased)
HXDLIN( 240)		return this->anyHasState(buttonID,-1);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyJustReleased,return )

bool FlxGamepadManager_obj::anyHasState(int buttonID,int state){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_244_anyHasState)
HXLINE( 245)		{
HXLINE( 245)			int _g = 0;
HXDLIN( 245)			::Array< ::Dynamic> _g1 = this->_gamepads;
HXDLIN( 245)			while((_g < _g1->length)){
HXLINE( 245)				 ::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
HXDLIN( 245)				_g = (_g + 1);
HXLINE( 246)				bool _hx_tmp;
HXDLIN( 246)				if (::hx::IsNotNull( gamepad )) {
HXLINE( 246)					switch((int)(buttonID)){
            						case (int)-2: {
HXLINE( 246)							_hx_tmp = gamepad->anyButton(state);
            						}
            						break;
            						case (int)-1: {
HXLINE( 246)							_hx_tmp = !(gamepad->anyButton(state));
            						}
            						break;
            						default:{
HXLINE( 246)							int RawID = gamepad->mapping->getRawID(buttonID);
HXDLIN( 246)							 ::flixel::input::gamepad::FlxGamepadButton button = gamepad->buttons->__get(RawID).StaticCast<  ::flixel::input::gamepad::FlxGamepadButton >();
HXDLIN( 246)							if (::hx::IsNotNull( button )) {
HXLINE( 246)								_hx_tmp = button->hasState(state);
            							}
            							else {
HXLINE( 246)								_hx_tmp = false;
            							}
            						}
            					}
            				}
            				else {
HXLINE( 246)					_hx_tmp = false;
            				}
HXDLIN( 246)				if (_hx_tmp) {
HXLINE( 247)					return true;
            				}
            			}
            		}
HXLINE( 249)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxGamepadManager_obj,anyHasState,return )

Float FlxGamepadManager_obj::anyMovedXAxis( ::flixel::input::gamepad::FlxGamepadAnalogStick RawAxisID){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_259_anyMovedXAxis)
HXLINE( 260)		{
HXLINE( 260)			int _g = 0;
HXDLIN( 260)			::Array< ::Dynamic> _g1 = this->_gamepads;
HXDLIN( 260)			while((_g < _g1->length)){
HXLINE( 260)				 ::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
HXDLIN( 260)				_g = (_g + 1);
HXLINE( 262)				if (::hx::IsNull( gamepad )) {
HXLINE( 263)					continue;
            				}
HXLINE( 265)				Float value = gamepad->getAnalogXAxisValue(RawAxisID);
HXLINE( 266)				if ((value != 0)) {
HXLINE( 267)					return value;
            				}
            			}
            		}
HXLINE( 270)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyMovedXAxis,return )

Float FlxGamepadManager_obj::anyMovedYAxis( ::flixel::input::gamepad::FlxGamepadAnalogStick RawAxisID){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_280_anyMovedYAxis)
HXLINE( 281)		{
HXLINE( 281)			int _g = 0;
HXDLIN( 281)			::Array< ::Dynamic> _g1 = this->_gamepads;
HXDLIN( 281)			while((_g < _g1->length)){
HXLINE( 281)				 ::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
HXDLIN( 281)				_g = (_g + 1);
HXLINE( 283)				if (::hx::IsNull( gamepad )) {
HXLINE( 284)					continue;
            				}
HXLINE( 286)				Float value = gamepad->getYAxisRaw(RawAxisID);
HXLINE( 287)				if ((value != 0)) {
HXLINE( 288)					return value;
            				}
            			}
            		}
HXLINE( 291)		return ( (Float)(0) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,anyMovedYAxis,return )

void FlxGamepadManager_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_299_destroy)
HXLINE( 300)		this->_gamepads = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->_gamepads);
HXLINE( 302)		this->firstActive = null();
HXLINE( 303)		this->lastActive = null();
HXLINE( 304)		this->_gamepads = null();
HXLINE( 308)		::flixel::input::gamepad::FlxGamepadManager_obj::_gameInput->removeEventListener(HX_("deviceAdded",4a,08,84,0b),this->onDeviceAdded_dyn(),null());
HXLINE( 309)		::flixel::input::gamepad::FlxGamepadManager_obj::_gameInput->removeEventListener(HX_("deviceRemoved",aa,c9,5b,59),this->onDeviceRemoved_dyn(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,destroy,(void))

void FlxGamepadManager_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_318_reset)
HXDLIN( 318)		int _g = 0;
HXDLIN( 318)		::Array< ::Dynamic> _g1 = this->_gamepads;
HXDLIN( 318)		while((_g < _g1->length)){
HXDLIN( 318)			 ::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
HXDLIN( 318)			_g = (_g + 1);
HXLINE( 319)			if (::hx::IsNotNull( gamepad )) {
HXLINE( 320)				gamepad->reset();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,reset,(void))

void FlxGamepadManager_obj::onDeviceAdded( ::openfl::events::GameInputEvent Event){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_348_onDeviceAdded)
HXDLIN( 348)		this->addGamepad(Event->device);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,onDeviceAdded,(void))

void FlxGamepadManager_obj::onDeviceRemoved( ::openfl::events::GameInputEvent Event){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_353_onDeviceRemoved)
HXDLIN( 353)		this->removeGamepad(Event->device);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,onDeviceRemoved,(void))

int FlxGamepadManager_obj::findGamepadIndex( ::openfl::ui::GameInputDevice Device){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_357_findGamepadIndex)
HXLINE( 358)		if (::hx::IsNull( Device )) {
HXLINE( 359)			return -1;
            		}
HXLINE( 361)		{
HXLINE( 361)			int _g = 0;
HXDLIN( 361)			int _g1 = ::openfl::ui::GameInput_obj::numDevices;
HXDLIN( 361)			while((_g < _g1)){
HXLINE( 361)				_g = (_g + 1);
HXDLIN( 361)				int i = (_g - 1);
HXLINE( 362)				if (::hx::IsInstanceEq( ::openfl::ui::GameInput_obj::getDeviceAt(i),Device )) {
HXLINE( 363)					return i;
            				}
            			}
            		}
HXLINE( 365)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,findGamepadIndex,return )

void FlxGamepadManager_obj::addGamepad( ::openfl::ui::GameInputDevice Device){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_369_addGamepad)
HXLINE( 370)		if (::hx::IsNull( Device )) {
HXLINE( 371)			return;
            		}
HXLINE( 373)		Device->enabled = true;
HXLINE( 374)		int id = this->findGamepadIndex(Device);
HXLINE( 376)		if ((id < 0)) {
HXLINE( 377)			return;
            		}
HXLINE( 379)		 ::flixel::input::gamepad::FlxGamepad gamepad = this->createByID(id,this->getModelFromDeviceName(Device->name));
HXLINE( 380)		gamepad->_device = Device;
HXLINE( 382)		this->deviceConnected->dispatch(gamepad);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,addGamepad,(void))

 ::flixel::input::gamepad::FlxGamepadModel FlxGamepadManager_obj::getModelFromDeviceName(::String name){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_386_getModelFromDeviceName)
HXLINE( 389)		if (::hx::IsNull( name )) {
HXLINE( 390)			return ::flixel::input::gamepad::FlxGamepadModel_obj::UNKNOWN_dyn();
            		}
HXLINE( 403)		name = ::StringTools_obj::replace(::StringTools_obj::replace(name.toLowerCase(),HX_("-",2d,00,00,00),HX_("",00,00,00,00)),HX_("_",5f,00,00,00),HX_("",00,00,00,00));
HXLINE( 404)		if ((name.indexOf(HX_("ouya",6e,e0,b7,49),null()) != -1)) {
HXLINE( 405)			return ::flixel::input::gamepad::FlxGamepadModel_obj::OUYA_dyn();
            		}
            		else {
HXLINE( 406)			bool _hx_tmp;
HXDLIN( 406)			if ((name.indexOf(HX_("wireless controller",5e,0b,31,72),null()) == -1)) {
HXLINE( 406)				_hx_tmp = (name.indexOf(HX_("ps4",d1,60,55,00),null()) != -1);
            			}
            			else {
HXLINE( 406)				_hx_tmp = true;
            			}
HXDLIN( 406)			if (_hx_tmp) {
HXLINE( 407)				return ::flixel::input::gamepad::FlxGamepadModel_obj::PS4_dyn();
            			}
            			else {
HXLINE( 408)				if ((name.indexOf(HX_("logitech",3b,70,e5,19),null()) != -1)) {
HXLINE( 409)					return ::flixel::input::gamepad::FlxGamepadModel_obj::LOGITECH_dyn();
            				}
            				else {
HXLINE( 410)					bool _hx_tmp;
HXDLIN( 410)					bool _hx_tmp1;
HXDLIN( 410)					if ((name.indexOf(HX_("xbox",93,58,9c,4f),null()) != -1)) {
HXLINE( 410)						_hx_tmp1 = (name.indexOf(HX_("360",2d,e2,26,00),null()) != -1);
            					}
            					else {
HXLINE( 410)						_hx_tmp1 = false;
            					}
HXDLIN( 410)					if (!(_hx_tmp1)) {
HXLINE( 410)						_hx_tmp = (name.indexOf(HX_("xinput",92,10,f1,b8),null()) != -1);
            					}
            					else {
HXLINE( 410)						_hx_tmp = true;
            					}
HXDLIN( 410)					if (_hx_tmp) {
HXLINE( 411)						return ::flixel::input::gamepad::FlxGamepadModel_obj::XINPUT_dyn();
            					}
            					else {
HXLINE( 412)						if ((name.indexOf(HX_("nintendo rvlcnt01tr",cb,02,13,80),null()) != -1)) {
HXLINE( 413)							return ::flixel::input::gamepad::FlxGamepadModel_obj::WII_REMOTE_dyn();
            						}
            						else {
HXLINE( 414)							if ((name.indexOf(HX_("nintendo rvlcnt01",0d,c0,58,28),null()) != -1)) {
HXLINE( 415)								return ::flixel::input::gamepad::FlxGamepadModel_obj::WII_REMOTE_dyn();
            							}
            							else {
HXLINE( 416)								if ((name.indexOf(HX_("mayflash wiimote pc adapter",ed,5a,02,8e),null()) != -1)) {
HXLINE( 417)									return ::flixel::input::gamepad::FlxGamepadModel_obj::MAYFLASH_WII_REMOTE_dyn();
            								}
            								else {
HXLINE( 418)									bool _hx_tmp;
HXDLIN( 418)									if ((name.indexOf(HX_("pro controller",af,e5,18,de),null()) == -1)) {
HXLINE( 418)										_hx_tmp = (name.indexOf(HX_("joycon l+r",e1,d0,50,00),null()) != -1);
            									}
            									else {
HXLINE( 418)										_hx_tmp = true;
            									}
HXDLIN( 418)									if (_hx_tmp) {
HXLINE( 419)										return ::flixel::input::gamepad::FlxGamepadModel_obj::SWITCH_PRO_dyn();
            									}
            									else {
HXLINE( 420)										if ((name.indexOf(HX_("joycon (l)",f3,6f,1d,00),null()) != -1)) {
HXLINE( 421)											return ::flixel::input::gamepad::FlxGamepadModel_obj::SWITCH_JOYCON_LEFT_dyn();
            										}
            										else {
HXLINE( 422)											if ((name.indexOf(HX_("joycon (r)",2d,75,1d,00),null()) != -1)) {
HXLINE( 423)												return ::flixel::input::gamepad::FlxGamepadModel_obj::SWITCH_JOYCON_RIGHT_dyn();
            											}
            											else {
HXLINE( 424)												if ((name.indexOf(HX_("mfi",f0,0e,53,00),null()) != -1)) {
HXLINE( 425)													return ::flixel::input::gamepad::FlxGamepadModel_obj::MFI_dyn();
            												}
            												else {
HXLINE( 427)													return ::flixel::input::gamepad::FlxGamepadModel_obj::UNKNOWN_dyn();
            												}
            											}
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 404)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,getModelFromDeviceName,return )

void FlxGamepadManager_obj::removeGamepad( ::openfl::ui::GameInputDevice Device){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_431_removeGamepad)
HXLINE( 432)		if (::hx::IsNull( Device )) {
HXLINE( 433)			return;
            		}
HXLINE( 435)		{
HXLINE( 435)			int _g = 0;
HXDLIN( 435)			int _g1 = this->_gamepads->length;
HXDLIN( 435)			while((_g < _g1)){
HXLINE( 435)				_g = (_g + 1);
HXDLIN( 435)				int i = (_g - 1);
HXLINE( 437)				 ::flixel::input::gamepad::FlxGamepad gamepad = this->_gamepads->__get(i).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
HXLINE( 438)				bool _hx_tmp;
HXDLIN( 438)				if (::hx::IsNotNull( gamepad )) {
HXLINE( 438)					_hx_tmp = ::hx::IsInstanceEq( gamepad->_device,Device );
            				}
            				else {
HXLINE( 438)					_hx_tmp = false;
            				}
HXDLIN( 438)				if (_hx_tmp) {
HXLINE( 440)					this->removeByID(i);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGamepadManager_obj,removeGamepad,(void))

void FlxGamepadManager_obj::update(){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_577_update)
HXDLIN( 577)		int _g = 0;
HXDLIN( 577)		::Array< ::Dynamic> _g1 = this->_gamepads;
HXDLIN( 577)		while((_g < _g1->length)){
HXDLIN( 577)			 ::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
HXDLIN( 577)			_g = (_g + 1);
HXLINE( 578)			if (::hx::IsNotNull( gamepad )) {
HXLINE( 579)				gamepad->update();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,update,(void))

void FlxGamepadManager_obj::onFocus(){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_582_onFocus)
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,onFocus,(void))

void FlxGamepadManager_obj::onFocusLost(){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_586_onFocusLost)
HXDLIN( 586)		this->reset();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,onFocusLost,(void))

int FlxGamepadManager_obj::get_numActiveGamepads(){
            	HX_STACKFRAME(&_hx_pos_dd40c6c1396c027e_590_get_numActiveGamepads)
HXLINE( 591)		int count = 0;
HXLINE( 592)		{
HXLINE( 592)			int _g = 0;
HXDLIN( 592)			::Array< ::Dynamic> _g1 = this->_gamepads;
HXDLIN( 592)			while((_g < _g1->length)){
HXLINE( 592)				 ::flixel::input::gamepad::FlxGamepad gamepad = _g1->__get(_g).StaticCast<  ::flixel::input::gamepad::FlxGamepad >();
HXDLIN( 592)				_g = (_g + 1);
HXLINE( 593)				if (::hx::IsNotNull( gamepad )) {
HXLINE( 594)					count = (count + 1);
            				}
            			}
            		}
HXLINE( 595)		return count;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGamepadManager_obj,get_numActiveGamepads,return )

 ::openfl::ui::GameInput FlxGamepadManager_obj::_gameInput;


::hx::ObjectPtr< FlxGamepadManager_obj > FlxGamepadManager_obj::__new() {
	::hx::ObjectPtr< FlxGamepadManager_obj > __this = new FlxGamepadManager_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxGamepadManager_obj > FlxGamepadManager_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxGamepadManager_obj *__this = (FlxGamepadManager_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxGamepadManager_obj), true, "flixel.input.gamepad.FlxGamepadManager"));
	*(void **)__this = FlxGamepadManager_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxGamepadManager_obj::FlxGamepadManager_obj()
{
}

void FlxGamepadManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGamepadManager);
	HX_MARK_MEMBER_NAME(firstActive,"firstActive");
	HX_MARK_MEMBER_NAME(lastActive,"lastActive");
	HX_MARK_MEMBER_NAME(globalDeadZone,"globalDeadZone");
	HX_MARK_MEMBER_NAME(deviceConnected,"deviceConnected");
	HX_MARK_MEMBER_NAME(deviceDisconnected,"deviceDisconnected");
	HX_MARK_MEMBER_NAME(_gamepads,"_gamepads");
	HX_MARK_MEMBER_NAME(_activeGamepads,"_activeGamepads");
	HX_MARK_END_CLASS();
}

void FlxGamepadManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(firstActive,"firstActive");
	HX_VISIT_MEMBER_NAME(lastActive,"lastActive");
	HX_VISIT_MEMBER_NAME(globalDeadZone,"globalDeadZone");
	HX_VISIT_MEMBER_NAME(deviceConnected,"deviceConnected");
	HX_VISIT_MEMBER_NAME(deviceDisconnected,"deviceDisconnected");
	HX_VISIT_MEMBER_NAME(_gamepads,"_gamepads");
	HX_VISIT_MEMBER_NAME(_activeGamepads,"_activeGamepads");
}

::hx::Val FlxGamepadManager_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getByID") ) { return ::hx::Val( getByID_dyn() ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocus") ) { return ::hx::Val( onFocus_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"anyInput") ) { return ::hx::Val( anyInput_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_gamepads") ) { return ::hx::Val( _gamepads ); }
		if (HX_FIELD_EQ(inName,"anyButton") ) { return ::hx::Val( anyButton_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastActive") ) { return ::hx::Val( lastActive ); }
		if (HX_FIELD_EQ(inName,"removeByID") ) { return ::hx::Val( removeByID_dyn() ); }
		if (HX_FIELD_EQ(inName,"createByID") ) { return ::hx::Val( createByID_dyn() ); }
		if (HX_FIELD_EQ(inName,"anyPressed") ) { return ::hx::Val( anyPressed_dyn() ); }
		if (HX_FIELD_EQ(inName,"addGamepad") ) { return ::hx::Val( addGamepad_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstActive") ) { return ::hx::Val( firstActive ); }
		if (HX_FIELD_EQ(inName,"anyHasState") ) { return ::hx::Val( anyHasState_dyn() ); }
		if (HX_FIELD_EQ(inName,"onFocusLost") ) { return ::hx::Val( onFocusLost_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"anyMovedXAxis") ) { return ::hx::Val( anyMovedXAxis_dyn() ); }
		if (HX_FIELD_EQ(inName,"anyMovedYAxis") ) { return ::hx::Val( anyMovedYAxis_dyn() ); }
		if (HX_FIELD_EQ(inName,"onDeviceAdded") ) { return ::hx::Val( onDeviceAdded_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeGamepad") ) { return ::hx::Val( removeGamepad_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"globalDeadZone") ) { return ::hx::Val( globalDeadZone ); }
		if (HX_FIELD_EQ(inName,"anyJustPressed") ) { return ::hx::Val( anyJustPressed_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"deviceConnected") ) { return ::hx::Val( deviceConnected ); }
		if (HX_FIELD_EQ(inName,"_activeGamepads") ) { return ::hx::Val( _activeGamepads ); }
		if (HX_FIELD_EQ(inName,"anyJustReleased") ) { return ::hx::Val( anyJustReleased_dyn() ); }
		if (HX_FIELD_EQ(inName,"onDeviceRemoved") ) { return ::hx::Val( onDeviceRemoved_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"findGamepadIndex") ) { return ::hx::Val( findGamepadIndex_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"numActiveGamepads") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_numActiveGamepads() ); }
		if (HX_FIELD_EQ(inName,"getActiveGamepads") ) { return ::hx::Val( getActiveGamepads_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"deviceDisconnected") ) { return ::hx::Val( deviceDisconnected ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getActiveGamepadIDs") ) { return ::hx::Val( getActiveGamepadIDs_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getFirstActiveGamepad") ) { return ::hx::Val( getFirstActiveGamepad_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_numActiveGamepads") ) { return ::hx::Val( get_numActiveGamepads_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getModelFromDeviceName") ) { return ::hx::Val( getModelFromDeviceName_dyn() ); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getFirstActiveGamepadID") ) { return ::hx::Val( getFirstActiveGamepadID_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxGamepadManager_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_gameInput") ) { outValue = ( _gameInput ); return true; }
	}
	return false;
}

::hx::Val FlxGamepadManager_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"_gamepads") ) { _gamepads=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lastActive") ) { lastActive=inValue.Cast<  ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"firstActive") ) { firstActive=inValue.Cast<  ::flixel::input::gamepad::FlxGamepad >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"globalDeadZone") ) { globalDeadZone=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"deviceConnected") ) { deviceConnected=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_activeGamepads") ) { _activeGamepads=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"deviceDisconnected") ) { deviceDisconnected=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxGamepadManager_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_gameInput") ) { _gameInput=ioValue.Cast<  ::openfl::ui::GameInput >(); return true; }
	}
	return false;
}

void FlxGamepadManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("firstActive",16,72,e8,fa));
	outFields->push(HX_("lastActive",bc,24,21,e1));
	outFields->push(HX_("numActiveGamepads",7e,81,36,4b));
	outFields->push(HX_("globalDeadZone",73,c7,06,a4));
	outFields->push(HX_("deviceConnected",53,a3,18,17));
	outFields->push(HX_("deviceDisconnected",71,3d,19,e9));
	outFields->push(HX_("_gamepads",11,a4,34,13));
	outFields->push(HX_("_activeGamepads",37,29,57,2d));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxGamepadManager_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxGamepad */ ,(int)offsetof(FlxGamepadManager_obj,firstActive),HX_("firstActive",16,72,e8,fa)},
	{::hx::fsObject /*  ::flixel::input::gamepad::FlxGamepad */ ,(int)offsetof(FlxGamepadManager_obj,lastActive),HX_("lastActive",bc,24,21,e1)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxGamepadManager_obj,globalDeadZone),HX_("globalDeadZone",73,c7,06,a4)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(FlxGamepadManager_obj,deviceConnected),HX_("deviceConnected",53,a3,18,17)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(FlxGamepadManager_obj,deviceDisconnected),HX_("deviceDisconnected",71,3d,19,e9)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxGamepadManager_obj,_gamepads),HX_("_gamepads",11,a4,34,13)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxGamepadManager_obj,_activeGamepads),HX_("_activeGamepads",37,29,57,2d)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxGamepadManager_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::ui::GameInput */ ,(void *) &FlxGamepadManager_obj::_gameInput,HX_("_gameInput",79,2e,db,4e)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxGamepadManager_obj_sMemberFields[] = {
	HX_("firstActive",16,72,e8,fa),
	HX_("lastActive",bc,24,21,e1),
	HX_("globalDeadZone",73,c7,06,a4),
	HX_("deviceConnected",53,a3,18,17),
	HX_("deviceDisconnected",71,3d,19,e9),
	HX_("_gamepads",11,a4,34,13),
	HX_("_activeGamepads",37,29,57,2d),
	HX_("getByID",28,a9,a5,13),
	HX_("removeByID",d6,33,42,be),
	HX_("createByID",8e,ba,b0,53),
	HX_("getActiveGamepadIDs",53,fc,e8,b1),
	HX_("getActiveGamepads",ce,8f,6a,56),
	HX_("getFirstActiveGamepadID",7c,c1,52,55),
	HX_("getFirstActiveGamepad",61,27,31,c9),
	HX_("anyButton",fe,c9,3f,37),
	HX_("anyInput",7e,21,d0,3c),
	HX_("anyPressed",16,75,02,90),
	HX_("anyJustPressed",4a,fa,b6,a6),
	HX_("anyJustReleased",15,14,3a,40),
	HX_("anyHasState",63,43,76,12),
	HX_("anyMovedXAxis",12,ce,e1,7b),
	HX_("anyMovedYAxis",93,62,48,0f),
	HX_("destroy",fa,2c,86,24),
	HX_("reset",cf,49,c8,e6),
	HX_("onDeviceAdded",6b,25,6e,6e),
	HX_("onDeviceRemoved",0b,31,e0,e0),
	HX_("findGamepadIndex",8a,50,07,9c),
	HX_("addGamepad",80,0c,10,f1),
	HX_("getModelFromDeviceName",9e,aa,6e,e4),
	HX_("removeGamepad",bd,3c,40,62),
	HX_("update",09,86,05,87),
	HX_("onFocus",39,fe,c6,9a),
	HX_("onFocusLost",bd,e4,85,41),
	HX_("get_numActiveGamepads",55,84,e4,c9),
	::String(null()) };

static void FlxGamepadManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxGamepadManager_obj::_gameInput,"_gameInput");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxGamepadManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxGamepadManager_obj::_gameInput,"_gameInput");
};

#endif

::hx::Class FlxGamepadManager_obj::__mClass;

static ::String FlxGamepadManager_obj_sStaticFields[] = {
	HX_("_gameInput",79,2e,db,4e),
	::String(null())
};

void FlxGamepadManager_obj::__register()
{
	FlxGamepadManager_obj _hx_dummy;
	FlxGamepadManager_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.input.gamepad.FlxGamepadManager",3b,35,83,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxGamepadManager_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxGamepadManager_obj::__SetStatic;
	__mClass->mMarkFunc = FlxGamepadManager_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxGamepadManager_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxGamepadManager_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxGamepadManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxGamepadManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGamepadManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGamepadManager_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxGamepadManager_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_dd40c6c1396c027e_68_boot)
HXDLIN(  68)		_gameInput =  ::openfl::ui::GameInput_obj::__alloc( HX_CTX );
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
