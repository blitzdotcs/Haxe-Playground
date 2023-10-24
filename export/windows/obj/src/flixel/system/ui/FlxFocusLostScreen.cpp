#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_FlxAssets
#include <flixel/system/FlxAssets.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_system_ui_FlxFocusLostScreen
#include <flixel/system/ui/FlxFocusLostScreen.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9d905e044df65333_12_new,"flixel.system.ui.FlxFocusLostScreen","new",0xbe260b15,"flixel.system.ui.FlxFocusLostScreen.new","flixel/system/ui/FlxFocusLostScreen.hx",12,0x1e64ca7a)
HX_LOCAL_STACK_FRAME(_hx_pos_9d905e044df65333_30_draw,"flixel.system.ui.FlxFocusLostScreen","draw",0x9c914faf,"flixel.system.ui.FlxFocusLostScreen.draw","flixel/system/ui/FlxFocusLostScreen.hx",30,0x1e64ca7a)
namespace flixel{
namespace _hx_system{
namespace ui{

void FlxFocusLostScreen_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_9d905e044df65333_12_new)
HXLINE(  13)		super::__construct();
HXLINE(  14)		this->draw();
HXLINE(  16)		 ::openfl::display::Sprite logo =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE(  17)		::flixel::_hx_system::FlxAssets_obj::drawLogo(logo->get_graphics());
HXLINE(  18)		logo->set_scaleX(logo->set_scaleY(((Float)0.2)));
HXLINE(  19)		logo->set_x(logo->set_y(( (Float)(5) )));
HXLINE(  20)		logo->set_alpha(((Float)0.35));
HXLINE(  21)		this->addChild(logo);
HXLINE(  23)		this->set_visible(false);
            	}

Dynamic FlxFocusLostScreen_obj::__CreateEmpty() { return new FlxFocusLostScreen_obj; }

void *FlxFocusLostScreen_obj::_hx_vtable = 0;

Dynamic FlxFocusLostScreen_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxFocusLostScreen_obj > _hx_result = new FlxFocusLostScreen_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxFocusLostScreen_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1f4df417) {
		if (inClassId<=(int)0x0c89e854) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x0c89e854;
			}
		} else {
			return inClassId==(int)0x1f4df417;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x3b2887d5 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

void FlxFocusLostScreen_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_9d905e044df65333_30_draw)
HXLINE(  31)		 ::openfl::display::Graphics gfx = this->get_graphics();
HXLINE(  33)		int screenWidth = ::Std_obj::_hx_int(( (Float)(::openfl::Lib_obj::get_current()->stage->stageWidth) ));
HXLINE(  34)		int screenHeight = ::Std_obj::_hx_int(( (Float)(::openfl::Lib_obj::get_current()->stage->stageHeight) ));
HXLINE(  37)		gfx->clear();
HXLINE(  38)		gfx->moveTo(( (Float)(0) ),( (Float)(0) ));
HXLINE(  39)		gfx->beginFill(0,((Float)0.5));
HXLINE(  40)		gfx->drawRect(( (Float)(0) ),( (Float)(0) ),( (Float)(screenWidth) ),( (Float)(screenHeight) ));
HXLINE(  41)		gfx->endFill();
HXLINE(  44)		int halfWidth = ::Std_obj::_hx_int((( (Float)(screenWidth) ) / ( (Float)(2) )));
HXLINE(  45)		int halfHeight = ::Std_obj::_hx_int((( (Float)(screenHeight) ) / ( (Float)(2) )));
HXLINE(  46)		int helper = ::Std_obj::_hx_int((::Math_obj::min(( (Float)(halfWidth) ),( (Float)(halfHeight) )) / ( (Float)(3) )));
HXLINE(  47)		gfx->moveTo(( (Float)((halfWidth - helper)) ),( (Float)((halfHeight - helper)) ));
HXLINE(  48)		gfx->beginFill(16777215,((Float)0.65));
HXLINE(  49)		gfx->lineTo(( (Float)((halfWidth + helper)) ),( (Float)(halfHeight) ));
HXLINE(  50)		gfx->lineTo(( (Float)((halfWidth - helper)) ),( (Float)((halfHeight + helper)) ));
HXLINE(  51)		gfx->lineTo(( (Float)((halfWidth - helper)) ),( (Float)((halfHeight - helper)) ));
HXLINE(  52)		gfx->endFill();
HXLINE(  54)		this->set_x(-(::flixel::FlxG_obj::scaleMode->offset->x));
HXLINE(  55)		this->set_y(-(::flixel::FlxG_obj::scaleMode->offset->y));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFocusLostScreen_obj,draw,(void))


::hx::ObjectPtr< FlxFocusLostScreen_obj > FlxFocusLostScreen_obj::__new() {
	::hx::ObjectPtr< FlxFocusLostScreen_obj > __this = new FlxFocusLostScreen_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxFocusLostScreen_obj > FlxFocusLostScreen_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxFocusLostScreen_obj *__this = (FlxFocusLostScreen_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxFocusLostScreen_obj), true, "flixel.system.ui.FlxFocusLostScreen"));
	*(void **)__this = FlxFocusLostScreen_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxFocusLostScreen_obj::FlxFocusLostScreen_obj()
{
}

::hx::Val FlxFocusLostScreen_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxFocusLostScreen_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxFocusLostScreen_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxFocusLostScreen_obj_sMemberFields[] = {
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class FlxFocusLostScreen_obj::__mClass;

void FlxFocusLostScreen_obj::__register()
{
	FlxFocusLostScreen_obj _hx_dummy;
	FlxFocusLostScreen_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.ui.FlxFocusLostScreen",a3,dc,fb,83);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxFocusLostScreen_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxFocusLostScreen_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxFocusLostScreen_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxFocusLostScreen_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace ui
