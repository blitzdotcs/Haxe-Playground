#include <hxcpp.h>

#ifndef INCLUDED_lime_system_JNISafetyTools
#include <lime/system/JNISafetyTools.h>
#endif
#ifndef INCLUDED_sys_thread__Thread_HaxeThread
#include <sys/thread/_Thread/HaxeThread.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_5786630d52b5ea59_411_onMainThread,"lime.system.JNISafetyTools","onMainThread",0x0513e4a6,"lime.system.JNISafetyTools.onMainThread","lime/system/JNI.hx",411,0x21970b7f)
HX_LOCAL_STACK_FRAME(_hx_pos_5786630d52b5ea59_400_boot,"lime.system.JNISafetyTools","boot",0x25fbcaf6,"lime.system.JNISafetyTools.boot","lime/system/JNI.hx",400,0x21970b7f)
namespace lime{
namespace _hx_system{

void JNISafetyTools_obj::__construct() { }

Dynamic JNISafetyTools_obj::__CreateEmpty() { return new JNISafetyTools_obj; }

void *JNISafetyTools_obj::_hx_vtable = 0;

Dynamic JNISafetyTools_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< JNISafetyTools_obj > _hx_result = new JNISafetyTools_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool JNISafetyTools_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x24820a78;
}

 ::sys::thread::_Thread::HaxeThread JNISafetyTools_obj::mainThread;

bool JNISafetyTools_obj::onMainThread(){
            	HX_STACKFRAME(&_hx_pos_5786630d52b5ea59_411_onMainThread)
HXDLIN( 411)		return ::hx::IsInstanceEq( ::sys::thread::_Thread::HaxeThread_obj::current(),::lime::_hx_system::JNISafetyTools_obj::mainThread );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(JNISafetyTools_obj,onMainThread,return )


JNISafetyTools_obj::JNISafetyTools_obj()
{
}

bool JNISafetyTools_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"mainThread") ) { outValue = ( mainThread ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onMainThread") ) { outValue = onMainThread_dyn(); return true; }
	}
	return false;
}

bool JNISafetyTools_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"mainThread") ) { mainThread=ioValue.Cast<  ::sys::thread::_Thread::HaxeThread >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *JNISafetyTools_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo JNISafetyTools_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::sys::thread::_Thread::HaxeThread */ ,(void *) &JNISafetyTools_obj::mainThread,HX_("mainThread",e3,97,65,e4)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void JNISafetyTools_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JNISafetyTools_obj::mainThread,"mainThread");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JNISafetyTools_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JNISafetyTools_obj::mainThread,"mainThread");
};

#endif

::hx::Class JNISafetyTools_obj::__mClass;

static ::String JNISafetyTools_obj_sStaticFields[] = {
	HX_("mainThread",e3,97,65,e4),
	HX_("onMainThread",e2,39,a9,bc),
	::String(null())
};

void JNISafetyTools_obj::__register()
{
	JNISafetyTools_obj _hx_dummy;
	JNISafetyTools_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system.JNISafetyTools",2a,90,e1,36);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &JNISafetyTools_obj::__GetStatic;
	__mClass->mSetStaticField = &JNISafetyTools_obj::__SetStatic;
	__mClass->mMarkFunc = JNISafetyTools_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(JNISafetyTools_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< JNISafetyTools_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JNISafetyTools_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JNISafetyTools_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JNISafetyTools_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void JNISafetyTools_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5786630d52b5ea59_400_boot)
HXDLIN( 400)		mainThread = ::sys::thread::_Thread::HaxeThread_obj::current();
            	}
}

} // end namespace lime
} // end namespace system