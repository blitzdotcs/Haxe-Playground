#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_Log
#include <lime/utils/Log.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_TypeError
#include <openfl/errors/TypeError.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_net_URLLoader
#include <openfl/net/URLLoader.h>
#endif
#ifndef INCLUDED_openfl_net_URLRequest
#include <openfl/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl_utils__internal_Lib
#include <openfl/utils/_internal/Lib.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_62_as,"openfl.Lib","as",0x3965ffb9,"openfl.Lib.as","openfl/Lib.hx",62,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_71_attach,"openfl.Lib","attach",0xe350160c,"openfl.Lib.attach","openfl/Lib.hx",71,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_83_clearInterval,"openfl.Lib","clearInterval",0x3d2e488b,"openfl.Lib.clearInterval","openfl/Lib.hx",83,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_99_clearTimeout,"openfl.Lib","clearTimeout",0x5e39561b,"openfl.Lib.clearTimeout","openfl/Lib.hx",99,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_131_getDefinitionByName,"openfl.Lib","getDefinitionByName",0xbac193c4,"openfl.Lib.getDefinitionByName","openfl/Lib.hx",131,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_154_getQualifiedClassName,"openfl.Lib","getQualifiedClassName",0x7f8a34b6,"openfl.Lib.getQualifiedClassName","openfl/Lib.hx",154,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_194_getQualifiedSuperclassName,"openfl.Lib","getQualifiedSuperclassName",0xc02d02d5,"openfl.Lib.getQualifiedSuperclassName","openfl/Lib.hx",194,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_228_getTimer,"openfl.Lib","getTimer",0xd73d4956,"openfl.Lib.getTimer","openfl/Lib.hx",228,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_237_getURL,"openfl.Lib","getURL",0xa66862c0,"openfl.Lib.getURL","openfl/Lib.hx",237,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_390_navigateToURL,"openfl.Lib","navigateToURL",0x74efcc5c,"openfl.Lib.navigateToURL","openfl/Lib.hx",390,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_427_notImplemented,"openfl.Lib","notImplemented",0x6ff873b6,"openfl.Lib.notImplemented","openfl/Lib.hx",427,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_439_preventDefaultTouchMove,"openfl.Lib","preventDefaultTouchMove",0x0727aa40,"openfl.Lib.preventDefaultTouchMove","openfl/Lib.hx",439,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_494_sendToURL,"openfl.Lib","sendToURL",0xb7c4ca65,"openfl.Lib.sendToURL","openfl/Lib.hx",494,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_529_setInterval,"openfl.Lib","setInterval",0x38558760,"openfl.Lib.setInterval","openfl/Lib.hx",529,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_523_setInterval,"openfl.Lib","setInterval",0x38558760,"openfl.Lib.setInterval","openfl/Lib.hx",523,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_557_setTimeout,"openfl.Lib","setTimeout",0x1b9e88e6,"openfl.Lib.setTimeout","openfl/Lib.hx",557,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_560_setTimeout,"openfl.Lib","setTimeout",0x1b9e88e6,"openfl.Lib.setTimeout","openfl/Lib.hx",560,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_569_trace,"openfl.Lib","trace",0xeba99a1e,"openfl.Lib.trace","openfl/Lib.hx",569,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_577_isXMLName,"openfl.Lib","isXMLName",0x250ff111,"openfl.Lib.isXMLName","openfl/Lib.hx",577,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_611_getClassByAlias,"openfl.Lib","getClassByAlias",0x8623c170,"openfl.Lib.getClassByAlias","openfl/Lib.hx",611,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_641_registerClassAlias,"openfl.Lib","registerClassAlias",0xa0b10b42,"openfl.Lib.registerClassAlias","openfl/Lib.hx",641,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_660_get_application,"openfl.Lib","get_application",0x64b447c0,"openfl.Lib.get_application","openfl/Lib.hx",660,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_664_get_current,"openfl.Lib","get_current",0x315640a9,"openfl.Lib.get_current","openfl/Lib.hx",664,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_29_boot,"openfl.Lib","boot",0xdf56aeb9,"openfl.Lib.boot","openfl/Lib.hx",29,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_30_boot,"openfl.Lib","boot",0xdf56aeb9,"openfl.Lib.boot","openfl/Lib.hx",30,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_31_boot,"openfl.Lib","boot",0xdf56aeb9,"openfl.Lib.boot","openfl/Lib.hx",31,0x62fb7c98)
HX_LOCAL_STACK_FRAME(_hx_pos_c4ab5e3027df58c9_32_boot,"openfl.Lib","boot",0xdf56aeb9,"openfl.Lib.boot","openfl/Lib.hx",32,0x62fb7c98)
namespace openfl{

void Lib_obj::__construct() { }

Dynamic Lib_obj::__CreateEmpty() { return new Lib_obj; }

void *Lib_obj::_hx_vtable = 0;

Dynamic Lib_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Lib_obj > _hx_result = new Lib_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Lib_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0758d9a1;
}

int Lib_obj::_hx___lastTimerID;

 ::haxe::ds::StringMap Lib_obj::_hx___sentWarnings;

 ::haxe::ds::IntMap Lib_obj::_hx___timers;

 ::haxe::ds::StringMap Lib_obj::_hx___registeredClassAliases;

 ::Dynamic Lib_obj::as( ::Dynamic v,::hx::Class c){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_62_as)
HXDLIN(  62)		if (::Std_obj::isOfType(v,c)) {
HXDLIN(  62)			return v;
            		}
            		else {
HXDLIN(  62)			return null();
            		}
HXDLIN(  62)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,as,return )

 ::openfl::display::MovieClip Lib_obj::attach(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_71_attach)
HXDLIN(  71)		return  ::openfl::display::MovieClip_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,attach,return )

void Lib_obj::clearInterval(int id){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_83_clearInterval)
HXDLIN(  83)		if (::openfl::Lib_obj::_hx___timers->exists(id)) {
HXLINE(  85)			 ::haxe::Timer timer = ( ( ::haxe::Timer)(::openfl::Lib_obj::_hx___timers->get(id)) );
HXLINE(  86)			timer->stop();
HXLINE(  87)			::openfl::Lib_obj::_hx___timers->remove(id);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,clearInterval,(void))

void Lib_obj::clearTimeout(int id){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_99_clearTimeout)
HXDLIN(  99)		if (::openfl::Lib_obj::_hx___timers->exists(id)) {
HXLINE( 101)			 ::haxe::Timer timer = ( ( ::haxe::Timer)(::openfl::Lib_obj::_hx___timers->get(id)) );
HXLINE( 102)			timer->stop();
HXLINE( 103)			::openfl::Lib_obj::_hx___timers->remove(id);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,clearTimeout,(void))

::hx::Class Lib_obj::getDefinitionByName(::String name){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_131_getDefinitionByName)
HXLINE( 132)		if (::hx::IsNull( name )) {
HXLINE( 132)			return null();
            		}
HXLINE( 141)		return ::Type_obj::resolveClass(name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,getDefinitionByName,return )

::String Lib_obj::getQualifiedClassName( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_154_getQualifiedClassName)
HXLINE( 155)		if (::hx::IsNull( value )) {
HXLINE( 155)			return null();
            		}
HXLINE( 156)		::hx::Class ref;
HXDLIN( 156)		if (::Std_obj::isOfType(value,::hx::ClassOf< ::hx::Class >())) {
HXLINE( 156)			ref = value;
            		}
            		else {
HXLINE( 156)			ref = ::Type_obj::getClass(value);
            		}
HXLINE( 157)		if (::hx::IsNull( ref )) {
HXLINE( 159)			bool _hx_tmp;
HXDLIN( 159)			if (!(::Std_obj::isOfType(value,::hx::ClassOf< bool >()))) {
HXLINE( 159)				_hx_tmp = ::hx::IsPointerEq( value,::hx::ClassOf< bool >() );
            			}
            			else {
HXLINE( 159)				_hx_tmp = true;
            			}
HXDLIN( 159)			if (_hx_tmp) {
HXLINE( 159)				return HX_("Bool",4a,b0,f4,2b);
            			}
            			else {
HXLINE( 160)				bool _hx_tmp;
HXDLIN( 160)				if (!(::Std_obj::isOfType(value,::hx::ClassOf< int >()))) {
HXLINE( 160)					_hx_tmp = ::hx::IsPointerEq( value,::hx::ClassOf< int >() );
            				}
            				else {
HXLINE( 160)					_hx_tmp = true;
            				}
HXDLIN( 160)				if (_hx_tmp) {
HXLINE( 160)					return HX_("Int",cf,c4,37,00);
            				}
            				else {
HXLINE( 161)					bool _hx_tmp;
HXDLIN( 161)					if (!(::Std_obj::isOfType(value,::hx::ClassOf< ::Float >()))) {
HXLINE( 161)						_hx_tmp = ::hx::IsPointerEq( value,::hx::ClassOf< ::Float >() );
            					}
            					else {
HXLINE( 161)						_hx_tmp = true;
            					}
HXDLIN( 161)					if (_hx_tmp) {
HXLINE( 161)						return HX_("Float",7c,35,c4,95);
            					}
            					else {
HXLINE( 164)						return null();
            					}
            				}
            			}
            		}
HXLINE( 166)		return ::Type_obj::getClassName(ref);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,getQualifiedClassName,return )

::String Lib_obj::getQualifiedSuperclassName( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_194_getQualifiedSuperclassName)
HXLINE( 195)		if (::hx::IsNull( value )) {
HXLINE( 195)			return null();
            		}
HXLINE( 196)		::hx::Class ref;
HXDLIN( 196)		if (::Std_obj::isOfType(value,::hx::ClassOf< ::hx::Class >())) {
HXLINE( 196)			ref = value;
            		}
            		else {
HXLINE( 196)			ref = ::Type_obj::getClass(value);
            		}
HXLINE( 197)		if (::hx::IsNull( ref )) {
HXLINE( 197)			return null();
            		}
HXLINE( 198)		::hx::Class parentRef = ::Type_obj::getSuperClass(ref);
HXLINE( 199)		if (::hx::IsNull( parentRef )) {
HXLINE( 199)			return null();
            		}
HXLINE( 200)		return ::Type_obj::getClassName(parentRef);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,getQualifiedSuperclassName,return )

int Lib_obj::getTimer(){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_228_getTimer)
HXDLIN( 228)		return ::lime::_hx_system::System_obj::getTimer();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,getTimer,return )

void Lib_obj::getURL( ::openfl::net::URLRequest request,::String target){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_237_getURL)
HXDLIN( 237)		::openfl::Lib_obj::navigateToURL(request,target);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,getURL,(void))

void Lib_obj::navigateToURL( ::openfl::net::URLRequest request,::String window){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_390_navigateToURL)
HXLINE( 391)		if (::hx::IsNull( window )) {
HXLINE( 393)			window = HX_("_blank",95,26,d9,b0);
            		}
HXLINE( 399)		::String uri = request->url;
HXLINE( 401)		if (::hx::IsPointerEq( ::Type_obj::_hx_typeof(request->data),::ValueType_obj::TObject_dyn() )) {
HXLINE( 403)			::String query = HX_("",00,00,00,00);
HXLINE( 404)			::Array< ::String > fields = ::Reflect_obj::fields(request->data);
HXLINE( 406)			{
HXLINE( 406)				int _g = 0;
HXDLIN( 406)				while((_g < fields->length)){
HXLINE( 406)					::String field = fields->__get(_g);
HXDLIN( 406)					_g = (_g + 1);
HXLINE( 408)					if ((query.length > 0)) {
HXLINE( 408)						query = (query + HX_("&",26,00,00,00));
            					}
HXLINE( 409)					::String query1 = (::StringTools_obj::urlEncode(field) + HX_("=",3d,00,00,00));
HXDLIN( 409)					query = (query + (query1 + ::StringTools_obj::urlEncode(::Std_obj::string(::Reflect_obj::field(request->data,field)))));
            				}
            			}
HXLINE( 412)			if ((uri.indexOf(HX_("?",3f,00,00,00),null()) > -1)) {
HXLINE( 414)				uri = (uri + (HX_("&",26,00,00,00) + query));
            			}
            			else {
HXLINE( 418)				uri = (uri + (HX_("?",3f,00,00,00) + query));
            			}
            		}
HXLINE( 422)		::lime::_hx_system::System_obj::openURL(uri,window);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,navigateToURL,(void))

void Lib_obj::notImplemented( ::Dynamic posInfo){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_427_notImplemented)
HXLINE( 428)		::String api = ( (::String)(((posInfo->__Field(HX_("className",a3,92,3d,dc),::hx::paccDynamic) + HX_(".",2e,00,00,00)) + posInfo->__Field(HX_("methodName",cc,19,0f,12),::hx::paccDynamic))) );
HXLINE( 430)		if (!(::openfl::Lib_obj::_hx___sentWarnings->exists(api))) {
HXLINE( 432)			::openfl::Lib_obj::_hx___sentWarnings->set(api,true);
HXLINE( 434)			::lime::utils::Log_obj::warn( ::Dynamic((posInfo->__Field(HX_("methodName",cc,19,0f,12),::hx::paccDynamic) + HX_(" is not implemented",1f,12,d2,b9))),posInfo);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,notImplemented,(void))

void Lib_obj::preventDefaultTouchMove(){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_439_preventDefaultTouchMove)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,preventDefaultTouchMove,(void))

void Lib_obj::sendToURL( ::openfl::net::URLRequest request){
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_494_sendToURL)
HXLINE( 495)		 ::openfl::net::URLLoader urlLoader =  ::openfl::net::URLLoader_obj::__alloc( HX_CTX ,null());
HXLINE( 496)		urlLoader->load(request);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,sendToURL,(void))

int Lib_obj::setInterval( ::Dynamic closure,int delay,::cpp::VirtualArray args){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::Dynamic,closure,::cpp::VirtualArray,args) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_529_setInterval)
HXLINE( 529)			::cpp::VirtualArray _hx_tmp;
HXDLIN( 529)			if (::hx::IsNull( args )) {
HXLINE( 529)				_hx_tmp = ::cpp::VirtualArray_obj::__new(0);
            			}
            			else {
HXLINE( 529)				_hx_tmp = args;
            			}
HXDLIN( 529)			::Reflect_obj::callMethod(closure,closure,_hx_tmp);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_523_setInterval)
HXLINE( 524)		int id = ++::openfl::Lib_obj::_hx___lastTimerID;
HXLINE( 525)		 ::haxe::Timer timer =  ::haxe::Timer_obj::__alloc( HX_CTX ,( (Float)(delay) ));
HXLINE( 526)		::openfl::Lib_obj::_hx___timers->set(id,timer);
HXLINE( 527)		timer->run =  ::Dynamic(new _hx_Closure_0(closure,args));
HXLINE( 531)		return id;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,setInterval,return )

int Lib_obj::setTimeout( ::Dynamic closure,int delay,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_557_setTimeout)
HXLINE( 558)		int id = ++::openfl::Lib_obj::_hx___lastTimerID;
HXLINE( 559)		{
            			HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0,int,id, ::Dynamic,closure,::cpp::VirtualArray,args) HXARGC(0)
            			void _hx_run(){
            				HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_560_setTimeout)
HXLINE( 561)				::openfl::Lib_obj::_hx___timers->remove(id);
HXLINE( 562)				::cpp::VirtualArray v;
HXDLIN( 562)				if (::hx::IsNull( args )) {
HXLINE( 562)					v = ::cpp::VirtualArray_obj::__new(0);
            				}
            				else {
HXLINE( 562)					v = args;
            				}
HXDLIN( 562)				::Reflect_obj::callMethod(closure,closure,v);
            			}
            			HX_END_LOCAL_FUNC0((void))

HXLINE( 559)			::Dynamic this1 = ::openfl::Lib_obj::_hx___timers;
HXDLIN( 559)			 ::haxe::Timer v = ::haxe::Timer_obj::delay( ::Dynamic(new _hx_Closure_0(id,closure,args)),delay);
HXDLIN( 559)			( ( ::haxe::ds::IntMap)(this1) )->set(id,v);
            		}
HXLINE( 564)		return id;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Lib_obj,setTimeout,return )

void Lib_obj::trace( ::Dynamic arg){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_569_trace)
HXDLIN( 569)		::haxe::Log_obj::trace(arg,::hx::SourceInfo(HX_("openfl/Lib.hx",98,7c,fb,62),569,HX_("openfl.Lib",47,43,57,2f),HX_("trace",85,8e,1f,16)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,trace,(void))

bool Lib_obj::isXMLName(::String name){
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_577_isXMLName)
HXLINE( 581)		if (::hx::IsNull( name )) {
HXLINE( 583)			return false;
            		}
HXLINE( 586)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^[a-zA-Z_]",db,66,24,e5),HX_("",00,00,00,00))->match(name))) {
HXLINE( 588)			return false;
            		}
HXLINE( 591)		if ( ::EReg_obj::__alloc( HX_CTX ,HX_("^[xX][mM][lL]",84,2a,12,bb),HX_("",00,00,00,00))->match(name)) {
HXLINE( 593)			return false;
            		}
HXLINE( 596)		if (!( ::EReg_obj::__alloc( HX_CTX ,HX_("^[a-zA-Z0-9_\\-\\.]+$",f3,c5,d1,03),HX_("",00,00,00,00))->match(name))) {
HXLINE( 598)			return false;
            		}
HXLINE( 600)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,isXMLName,return )

::hx::Class Lib_obj::getClassByAlias(::String aliasName){
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_611_getClassByAlias)
HXLINE( 615)		if (!(::openfl::Lib_obj::_hx___registeredClassAliases->exists(aliasName))) {
HXLINE( 617)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,((HX_("Class ",08,2d,a5,39) + aliasName) + HX_(" could not be found.",9d,35,06,90)),null()));
            		}
HXLINE( 619)		return ::openfl::Lib_obj::_hx___registeredClassAliases->get(aliasName);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Lib_obj,getClassByAlias,return )

void Lib_obj::registerClassAlias(::String aliasName,::hx::Class classObject){
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_641_registerClassAlias)
HXLINE( 645)		if (::hx::IsNull( classObject )) {
HXLINE( 647)			HX_STACK_DO_THROW( ::openfl::errors::TypeError_obj::__alloc( HX_CTX ,HX_("Parameter classObject must be non-null",8d,5e,6b,41)));
            		}
HXLINE( 649)		if (::hx::IsNull( aliasName )) {
HXLINE( 651)			HX_STACK_DO_THROW( ::openfl::errors::TypeError_obj::__alloc( HX_CTX ,HX_("Parameter aliasName must be non-null",69,cf,07,4f)));
            		}
HXLINE( 653)		::openfl::Lib_obj::_hx___registeredClassAliases->set(aliasName,classObject);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Lib_obj,registerClassAlias,(void))

 ::openfl::display::Application Lib_obj::get_application(){
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_660_get_application)
HXDLIN( 660)		return ::openfl::utils::_internal::Lib_obj::application;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_application,return )

 ::openfl::display::MovieClip Lib_obj::get_current(){
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_664_get_current)
HXLINE( 668)		if (::hx::IsNull( ::openfl::utils::_internal::Lib_obj::current )) {
HXLINE( 668)			::openfl::utils::_internal::Lib_obj::current =  ::openfl::display::MovieClip_obj::__alloc( HX_CTX );
            		}
HXLINE( 669)		return ::openfl::utils::_internal::Lib_obj::current;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Lib_obj,get_current,return )


Lib_obj::Lib_obj()
{
}

bool Lib_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"as") ) { outValue = as_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"trace") ) { outValue = trace_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"attach") ) { outValue = attach_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getURL") ) { outValue = getURL_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_current() ); return true; } }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__timers") ) { outValue = ( _hx___timers ); return true; }
		if (HX_FIELD_EQ(inName,"getTimer") ) { outValue = getTimer_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"sendToURL") ) { outValue = sendToURL_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isXMLName") ) { outValue = isXMLName_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"setTimeout") ) { outValue = setTimeout_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"application") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_application() ); return true; } }
		if (HX_FIELD_EQ(inName,"setInterval") ) { outValue = setInterval_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_current") ) { outValue = get_current_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clearTimeout") ) { outValue = clearTimeout_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__lastTimerID") ) { outValue = ( _hx___lastTimerID ); return true; }
		if (HX_FIELD_EQ(inName,"clearInterval") ) { outValue = clearInterval_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"navigateToURL") ) { outValue = navigateToURL_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { outValue = ( _hx___sentWarnings ); return true; }
		if (HX_FIELD_EQ(inName,"notImplemented") ) { outValue = notImplemented_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getClassByAlias") ) { outValue = getClassByAlias_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_application") ) { outValue = get_application_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"registerClassAlias") ) { outValue = registerClassAlias_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getDefinitionByName") ) { outValue = getDefinitionByName_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getQualifiedClassName") ) { outValue = getQualifiedClassName_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"preventDefaultTouchMove") ) { outValue = preventDefaultTouchMove_dyn(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__registeredClassAliases") ) { outValue = ( _hx___registeredClassAliases ); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getQualifiedSuperclassName") ) { outValue = getQualifiedSuperclassName_dyn(); return true; }
	}
	return false;
}

bool Lib_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__timers") ) { _hx___timers=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__lastTimerID") ) { _hx___lastTimerID=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__sentWarnings") ) { _hx___sentWarnings=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"__registeredClassAliases") ) { _hx___registeredClassAliases=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Lib_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Lib_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &Lib_obj::_hx___lastTimerID,HX_("__lastTimerID",0a,30,1d,d6)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Lib_obj::_hx___sentWarnings,HX_("__sentWarnings",2f,1b,27,19)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &Lib_obj::_hx___timers,HX_("__timers",2e,78,01,c7)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &Lib_obj::_hx___registeredClassAliases,HX_("__registeredClassAliases",68,a4,0f,b1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Lib_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Lib_obj::_hx___lastTimerID,"__lastTimerID");
	HX_MARK_MEMBER_NAME(Lib_obj::_hx___sentWarnings,"__sentWarnings");
	HX_MARK_MEMBER_NAME(Lib_obj::_hx___timers,"__timers");
	HX_MARK_MEMBER_NAME(Lib_obj::_hx___registeredClassAliases,"__registeredClassAliases");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Lib_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Lib_obj::_hx___lastTimerID,"__lastTimerID");
	HX_VISIT_MEMBER_NAME(Lib_obj::_hx___sentWarnings,"__sentWarnings");
	HX_VISIT_MEMBER_NAME(Lib_obj::_hx___timers,"__timers");
	HX_VISIT_MEMBER_NAME(Lib_obj::_hx___registeredClassAliases,"__registeredClassAliases");
};

#endif

::hx::Class Lib_obj::__mClass;

static ::String Lib_obj_sStaticFields[] = {
	HX_("__lastTimerID",0a,30,1d,d6),
	HX_("__sentWarnings",2f,1b,27,19),
	HX_("__timers",2e,78,01,c7),
	HX_("__registeredClassAliases",68,a4,0f,b1),
	HX_("as",f2,54,00,00),
	HX_("attach",c5,fb,0f,e0),
	HX_("clearInterval",f2,7b,d9,5b),
	HX_("clearTimeout",94,cc,75,b4),
	HX_("getDefinitionByName",6b,ce,77,2d),
	HX_("getQualifiedClassName",1d,a7,41,b8),
	HX_("getQualifiedSuperclassName",0e,7b,fa,6d),
	HX_("getTimer",4f,cf,0c,70),
	HX_("getURL",79,48,28,a3),
	HX_("navigateToURL",c3,ff,9a,93),
	HX_("notImplemented",6f,3a,1a,27),
	HX_("preventDefaultTouchMove",67,c4,6d,72),
	HX_("sendToURL",4c,7e,8a,d4),
	HX_("setInterval",07,43,dd,58),
	HX_("setTimeout",1f,3f,d6,2b),
	HX_("trace",85,8e,1f,16),
	HX_("isXMLName",f8,a4,d5,41),
	HX_("getClassByAlias",97,dc,8f,0c),
	HX_("registerClassAlias",7b,22,4f,d8),
	HX_("get_application",e7,62,20,eb),
	HX_("get_current",50,fc,dd,51),
	::String(null())
};

void Lib_obj::__register()
{
	Lib_obj _hx_dummy;
	Lib_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.Lib",47,43,57,2f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Lib_obj::__GetStatic;
	__mClass->mSetStaticField = &Lib_obj::__SetStatic;
	__mClass->mMarkFunc = Lib_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Lib_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Lib_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Lib_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Lib_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Lib_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Lib_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_29_boot)
HXDLIN(  29)		_hx___lastTimerID = 0;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_30_boot)
HXDLIN(  30)		_hx___sentWarnings =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_31_boot)
HXDLIN(  31)		_hx___timers =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_c4ab5e3027df58c9_32_boot)
HXDLIN(  32)		_hx___registeredClassAliases =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace openfl
