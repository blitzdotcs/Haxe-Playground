#include <hxcpp.h>

#ifndef INCLUDED_openfl_text__AntiAliasType_AntiAliasType_Impl_
#include <openfl/text/_AntiAliasType/AntiAliasType_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_d860189a36ec7114_35_fromString,"openfl.text._AntiAliasType.AntiAliasType_Impl_","fromString",0x0b2fac83,"openfl.text._AntiAliasType.AntiAliasType_Impl_.fromString","openfl/text/AntiAliasType.hx",35,0x9da7f159)
HX_LOCAL_STACK_FRAME(_hx_pos_d860189a36ec7114_45_toString,"openfl.text._AntiAliasType.AntiAliasType_Impl_","toString",0xa8e1d554,"openfl.text._AntiAliasType.AntiAliasType_Impl_.toString","openfl/text/AntiAliasType.hx",45,0x9da7f159)
HX_LOCAL_STACK_FRAME(_hx_pos_d860189a36ec7114_22_boot,"openfl.text._AntiAliasType.AntiAliasType_Impl_","boot",0x423514da,"openfl.text._AntiAliasType.AntiAliasType_Impl_.boot","openfl/text/AntiAliasType.hx",22,0x9da7f159)
HX_LOCAL_STACK_FRAME(_hx_pos_d860189a36ec7114_31_boot,"openfl.text._AntiAliasType.AntiAliasType_Impl_","boot",0x423514da,"openfl.text._AntiAliasType.AntiAliasType_Impl_.boot","openfl/text/AntiAliasType.hx",31,0x9da7f159)
namespace openfl{
namespace text{
namespace _AntiAliasType{

void AntiAliasType_Impl__obj::__construct() { }

Dynamic AntiAliasType_Impl__obj::__CreateEmpty() { return new AntiAliasType_Impl__obj; }

void *AntiAliasType_Impl__obj::_hx_vtable = 0;

Dynamic AntiAliasType_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AntiAliasType_Impl__obj > _hx_result = new AntiAliasType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AntiAliasType_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x621ee39a;
}

 ::Dynamic AntiAliasType_Impl__obj::ADVANCED;

 ::Dynamic AntiAliasType_Impl__obj::NORMAL;

 ::Dynamic AntiAliasType_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_d860189a36ec7114_35_fromString)
HXDLIN(  35)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("advanced",a2,69,7b,3b)) ){
HXLINE(  37)			return 0;
HXDLIN(  37)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("normal",27,72,69,30)) ){
HXLINE(  38)			return 1;
HXDLIN(  38)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  39)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  35)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AntiAliasType_Impl__obj,fromString,return )

::String AntiAliasType_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_d860189a36ec7114_45_toString)
HXDLIN(  45)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  47)			return HX_("advanced",a2,69,7b,3b);
HXDLIN(  47)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  48)			return HX_("normal",27,72,69,30);
HXDLIN(  48)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  49)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  45)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AntiAliasType_Impl__obj,toString,return )


AntiAliasType_Impl__obj::AntiAliasType_Impl__obj()
{
}

bool AntiAliasType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AntiAliasType_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo AntiAliasType_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &AntiAliasType_Impl__obj::ADVANCED,HX_("ADVANCED",a2,f9,00,95)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &AntiAliasType_Impl__obj::NORMAL,HX_("NORMAL",27,1e,ec,e2)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void AntiAliasType_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AntiAliasType_Impl__obj::ADVANCED,"ADVANCED");
	HX_MARK_MEMBER_NAME(AntiAliasType_Impl__obj::NORMAL,"NORMAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AntiAliasType_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AntiAliasType_Impl__obj::ADVANCED,"ADVANCED");
	HX_VISIT_MEMBER_NAME(AntiAliasType_Impl__obj::NORMAL,"NORMAL");
};

#endif

::hx::Class AntiAliasType_Impl__obj::__mClass;

static ::String AntiAliasType_Impl__obj_sStaticFields[] = {
	HX_("ADVANCED",a2,f9,00,95),
	HX_("NORMAL",27,1e,ec,e2),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void AntiAliasType_Impl__obj::__register()
{
	AntiAliasType_Impl__obj _hx_dummy;
	AntiAliasType_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._AntiAliasType.AntiAliasType_Impl_",c6,90,74,c5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AntiAliasType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AntiAliasType_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AntiAliasType_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AntiAliasType_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AntiAliasType_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AntiAliasType_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AntiAliasType_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AntiAliasType_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d860189a36ec7114_22_boot)
HXDLIN(  22)		ADVANCED = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d860189a36ec7114_31_boot)
HXDLIN(  31)		NORMAL = 1;
            	}
}

} // end namespace openfl
} // end namespace text
} // end namespace _AntiAliasType
