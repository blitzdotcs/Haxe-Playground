#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__SpreadMethod_SpreadMethod_Impl_
#include <openfl/display/_SpreadMethod/SpreadMethod_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_86b0f571ca49f8a5_34_fromInt,"openfl.display._SpreadMethod.SpreadMethod_Impl_","fromInt",0xe901e0d0,"openfl.display._SpreadMethod.SpreadMethod_Impl_.fromInt","openfl/display/SpreadMethod.hx",34,0x882c619e)
HX_LOCAL_STACK_FRAME(_hx_pos_86b0f571ca49f8a5_39_fromString,"openfl.display._SpreadMethod.SpreadMethod_Impl_","fromString",0xf9dd3790,"openfl.display._SpreadMethod.SpreadMethod_Impl_.fromString","openfl/display/SpreadMethod.hx",39,0x882c619e)
HX_LOCAL_STACK_FRAME(_hx_pos_86b0f571ca49f8a5_50_toInt,"openfl.display._SpreadMethod.SpreadMethod_Impl_","toInt",0xdd4f109f,"openfl.display._SpreadMethod.SpreadMethod_Impl_.toInt","openfl/display/SpreadMethod.hx",50,0x882c619e)
HX_LOCAL_STACK_FRAME(_hx_pos_86b0f571ca49f8a5_55_toString,"openfl.display._SpreadMethod.SpreadMethod_Impl_","toString",0x8d8a9321,"openfl.display._SpreadMethod.SpreadMethod_Impl_.toString","openfl/display/SpreadMethod.hx",55,0x882c619e)
HX_LOCAL_STACK_FRAME(_hx_pos_86b0f571ca49f8a5_20_boot,"openfl.display._SpreadMethod.SpreadMethod_Impl_","boot",0x85bda827,"openfl.display._SpreadMethod.SpreadMethod_Impl_.boot","openfl/display/SpreadMethod.hx",20,0x882c619e)
HX_LOCAL_STACK_FRAME(_hx_pos_86b0f571ca49f8a5_25_boot,"openfl.display._SpreadMethod.SpreadMethod_Impl_","boot",0x85bda827,"openfl.display._SpreadMethod.SpreadMethod_Impl_.boot","openfl/display/SpreadMethod.hx",25,0x882c619e)
HX_LOCAL_STACK_FRAME(_hx_pos_86b0f571ca49f8a5_30_boot,"openfl.display._SpreadMethod.SpreadMethod_Impl_","boot",0x85bda827,"openfl.display._SpreadMethod.SpreadMethod_Impl_.boot","openfl/display/SpreadMethod.hx",30,0x882c619e)
namespace openfl{
namespace display{
namespace _SpreadMethod{

void SpreadMethod_Impl__obj::__construct() { }

Dynamic SpreadMethod_Impl__obj::__CreateEmpty() { return new SpreadMethod_Impl__obj; }

void *SpreadMethod_Impl__obj::_hx_vtable = 0;

Dynamic SpreadMethod_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SpreadMethod_Impl__obj > _hx_result = new SpreadMethod_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SpreadMethod_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0236f1b5;
}

 ::Dynamic SpreadMethod_Impl__obj::PAD;

 ::Dynamic SpreadMethod_Impl__obj::REFLECT;

 ::Dynamic SpreadMethod_Impl__obj::REPEAT;

 ::Dynamic SpreadMethod_Impl__obj::fromInt( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_86b0f571ca49f8a5_34_fromInt)
HXDLIN(  34)		return value;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SpreadMethod_Impl__obj,fromInt,return )

 ::Dynamic SpreadMethod_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_86b0f571ca49f8a5_39_fromString)
HXDLIN(  39)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("pad",53,51,55,00)) ){
HXLINE(  41)			return 0;
HXDLIN(  41)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("reflect",3d,84,29,e9)) ){
HXLINE(  42)			return 1;
HXDLIN(  42)			goto _hx_goto_1;
            		}
            		if (  (_hx_switch_0==HX_("repeat",5b,97,7c,06)) ){
HXLINE(  43)			return 2;
HXDLIN(  43)			goto _hx_goto_1;
            		}
            		/* default */{
HXLINE(  44)			return null();
            		}
            		_hx_goto_1:;
HXLINE(  39)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SpreadMethod_Impl__obj,fromString,return )

 ::Dynamic SpreadMethod_Impl__obj::toInt( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_86b0f571ca49f8a5_50_toInt)
HXDLIN(  50)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SpreadMethod_Impl__obj,toInt,return )

::String SpreadMethod_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_86b0f571ca49f8a5_55_toString)
HXDLIN(  55)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  57)			return HX_("pad",53,51,55,00);
HXDLIN(  57)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  58)			return HX_("reflect",3d,84,29,e9);
HXDLIN(  58)			goto _hx_goto_4;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  59)			return HX_("repeat",5b,97,7c,06);
HXDLIN(  59)			goto _hx_goto_4;
            		}
            		/* default */{
HXLINE(  60)			return null();
            		}
            		_hx_goto_4:;
HXLINE(  55)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(SpreadMethod_Impl__obj,toString,return )


SpreadMethod_Impl__obj::SpreadMethod_Impl__obj()
{
}

bool SpreadMethod_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *SpreadMethod_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo SpreadMethod_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &SpreadMethod_Impl__obj::PAD,HX_("PAD",33,ed,3c,00)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &SpreadMethod_Impl__obj::REFLECT,HX_("REFLECT",1d,58,fd,68)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &SpreadMethod_Impl__obj::REPEAT,HX_("REPEAT",5b,43,ff,b8)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void SpreadMethod_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SpreadMethod_Impl__obj::PAD,"PAD");
	HX_MARK_MEMBER_NAME(SpreadMethod_Impl__obj::REFLECT,"REFLECT");
	HX_MARK_MEMBER_NAME(SpreadMethod_Impl__obj::REPEAT,"REPEAT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SpreadMethod_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SpreadMethod_Impl__obj::PAD,"PAD");
	HX_VISIT_MEMBER_NAME(SpreadMethod_Impl__obj::REFLECT,"REFLECT");
	HX_VISIT_MEMBER_NAME(SpreadMethod_Impl__obj::REPEAT,"REPEAT");
};

#endif

::hx::Class SpreadMethod_Impl__obj::__mClass;

static ::String SpreadMethod_Impl__obj_sStaticFields[] = {
	HX_("PAD",33,ed,3c,00),
	HX_("REFLECT",1d,58,fd,68),
	HX_("REPEAT",5b,43,ff,b8),
	HX_("fromInt",a5,dd,fa,57),
	HX_("fromString",db,2d,74,54),
	HX_("toInt",34,be,11,14),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void SpreadMethod_Impl__obj::__register()
{
	SpreadMethod_Impl__obj _hx_dummy;
	SpreadMethod_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._SpreadMethod.SpreadMethod_Impl_",99,c0,ee,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SpreadMethod_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SpreadMethod_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SpreadMethod_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< SpreadMethod_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SpreadMethod_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SpreadMethod_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SpreadMethod_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SpreadMethod_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_86b0f571ca49f8a5_20_boot)
HXDLIN(  20)		PAD = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_86b0f571ca49f8a5_25_boot)
HXDLIN(  25)		REFLECT = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_86b0f571ca49f8a5_30_boot)
HXDLIN(  30)		REPEAT = 2;
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _SpreadMethod
