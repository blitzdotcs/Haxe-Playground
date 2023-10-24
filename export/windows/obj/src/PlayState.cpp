#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif
#ifndef INCLUDED_sys_Http
#include <sys/Http.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_af23706db05c7feb_8_new,"PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",8,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_17_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",17,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_24_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",24,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_14_create,"PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",14,0xb30d7781)
HX_LOCAL_STACK_FRAME(_hx_pos_af23706db05c7feb_34_update,"PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",34,0xb30d7781)

void PlayState_obj::__construct( ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_8_new)
HXDLIN(   8)		super::__construct(MaxSize);
            	}

Dynamic PlayState_obj::__CreateEmpty() { return new PlayState_obj; }

void *PlayState_obj::_hx_vtable = 0;

Dynamic PlayState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PlayState_obj > _hx_result = new PlayState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool PlayState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x0a05f89d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0a05f89d;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void PlayState_obj::create(){
            		HX_BEGIN_LOCAL_FUNC_S1(::hx::LocalFunc,_hx_Closure_0, ::PlayState,_gthis) HXARGC(1)
            		void _hx_run(::String ipdata){
            			HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_17_create)
HXLINE(  18)			_gthis->ipText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,10,10,null(),(HX_("IP Address: ",c1,1b,4c,3c) + ipdata),null(),null());
HXLINE(  19)			{
HXLINE(  19)				 ::flixel::text::FlxText _this = _gthis->ipText;
HXDLIN(  19)				 ::flixel::util::FlxAxes axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXDLIN(  19)				bool _hx_tmp;
HXDLIN(  19)				switch((int)(axes->_hx_getIndex())){
            					case (int)0: case (int)2: {
HXLINE(  19)						_hx_tmp = true;
            					}
            					break;
            					default:{
HXLINE(  19)						_hx_tmp = false;
            					}
            				}
HXDLIN(  19)				if (_hx_tmp) {
HXLINE(  19)					int _hx_tmp = ::flixel::FlxG_obj::width;
HXDLIN(  19)					_this->set_x(((( (Float)(_hx_tmp) ) - _this->get_width()) / ( (Float)(2) )));
            				}
HXDLIN(  19)				bool _hx_tmp1;
HXDLIN(  19)				switch((int)(axes->_hx_getIndex())){
            					case (int)1: case (int)2: {
HXLINE(  19)						_hx_tmp1 = true;
            					}
            					break;
            					default:{
HXLINE(  19)						_hx_tmp1 = false;
            					}
            				}
HXDLIN(  19)				if (_hx_tmp1) {
HXLINE(  19)					int _hx_tmp = ::flixel::FlxG_obj::height;
HXDLIN(  19)					_this->set_y(((( (Float)(_hx_tmp) ) - _this->get_height()) / ( (Float)(2) )));
            				}
            			}
HXLINE(  20)			_gthis->add(_gthis->ipText).StaticCast<  ::flixel::FlxBasic >();
            		}
            		HX_END_LOCAL_FUNC1((void))

            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            		void _hx_run(::String error){
            			HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_24_create)
HXLINE(  24)			::haxe::Log_obj::trace((HX_("error: ",6e,80,0a,ea) + error),::hx::SourceInfo(HX_("source/PlayState.hx",75,24,2b,b8),24,HX_("PlayState",5d,83,c2,46),HX_("create",fc,66,0f,7c)));
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_af23706db05c7feb_14_create)
HXDLIN(  14)		 ::PlayState _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  16)		 ::sys::Http http =  ::sys::Http_obj::__alloc( HX_CTX ,HX_("https://api.ipify.org/?format=txt",a2,4c,7b,eb));
HXLINE(  17)		http->onData =  ::Dynamic(new _hx_Closure_0(_gthis));
HXLINE(  23)		http->onError =  ::Dynamic(new _hx_Closure_1());
HXLINE(  27)		http->request(null());
HXLINE(  29)		this->super::create();
            	}


void PlayState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_af23706db05c7feb_34_update)
HXDLIN(  34)		this->super::update(elapsed);
            	}



::hx::ObjectPtr< PlayState_obj > PlayState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< PlayState_obj > __this = new PlayState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< PlayState_obj > PlayState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	PlayState_obj *__this = (PlayState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PlayState_obj), true, "PlayState"));
	*(void **)__this = PlayState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(ipText,"ipText");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ipText,"ipText");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PlayState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ipText") ) { return ::hx::Val( ipText ); }
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PlayState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"ipText") ) { ipText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("ipText",34,d4,2c,b0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PlayState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PlayState_obj,ipText),HX_("ipText",34,d4,2c,b0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PlayState_obj_sStaticStorageInfo = 0;
#endif

static ::String PlayState_obj_sMemberFields[] = {
	HX_("ipText",34,d4,2c,b0),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	PlayState_obj _hx_dummy;
	PlayState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PlayState",5d,83,c2,46);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PlayState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PlayState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PlayState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PlayState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

