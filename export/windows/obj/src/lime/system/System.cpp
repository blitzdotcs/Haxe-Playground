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
#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_lime__internal_backend_native_NativeCFFI
#include <lime/_internal/backend/native/NativeCFFI.h>
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
#ifndef INCLUDED_lime_app__Event_Int_Void
#include <lime/app/_Event_Int_Void.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif
#ifndef INCLUDED_lime_system_Endian
#include <lime/system/Endian.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_sys_io_Process
#include <sys/io/Process.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_143_exit,"lime.system.System","exit",0x19210697,"lime.system.System.exit","lime/system/System.hx",143,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_171_getDisplay,"lime.system.System","getDisplay",0x2e892085,"lime.system.System.getDisplay","lime/system/System.hx",171,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_275_getTimer,"lime.system.System","getTimer",0xb1bf8f48,"lime.system.System.getTimer","lime/system/System.hx",275,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_289_load,"lime.system.System","load",0x1dbaa99f,"lime.system.System.load","lime/system/System.hx",289,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_298_openFile,"lime.system.System","openFile",0x26aa6b5f,"lime.system.System.openFile","lime/system/System.hx",298,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_321_openURL,"lime.system.System","openURL",0x0840dfec,"lime.system.System.openURL","lime/system/System.hx",321,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_339___copyMissingFields,"lime.system.System","__copyMissingFields",0x05666311,"lime.system.System.__copyMissingFields","lime/system/System.hx",339,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_354___getDirectory,"lime.system.System","__getDirectory",0xc98892d0,"lime.system.System.__getDirectory","lime/system/System.hx",354,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_430___parseArguments,"lime.system.System","__parseArguments",0xf4d0dcbc,"lime.system.System.__parseArguments","lime/system/System.hx",430,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_530___parseBool,"lime.system.System","__parseBool",0x34d2e084,"lime.system.System.__parseBool","lime/system/System.hx",530,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_534___registerEntryPoint,"lime.system.System","__registerEntryPoint",0x78d55f5a,"lime.system.System.__registerEntryPoint","lime/system/System.hx",534,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_544___runProcess,"lime.system.System","__runProcess",0x7e9f5dfd,"lime.system.System.__runProcess","lime/system/System.hx",544,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_564_get_allowScreenTimeout,"lime.system.System","get_allowScreenTimeout",0x287e314e,"lime.system.System.get_allowScreenTimeout","lime/system/System.hx",564,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_573_set_allowScreenTimeout,"lime.system.System","set_allowScreenTimeout",0x5c29adc2,"lime.system.System.set_allowScreenTimeout","lime/system/System.hx",573,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_580_get_applicationDirectory,"lime.system.System","get_applicationDirectory",0xf6955c7f,"lime.system.System.get_applicationDirectory","lime/system/System.hx",580,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_590_get_applicationStorageDirectory,"lime.system.System","get_applicationStorageDirectory",0x34818fe0,"lime.system.System.get_applicationStorageDirectory","lime/system/System.hx",590,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_600_get_deviceModel,"lime.system.System","get_deviceModel",0x3a3e2ff1,"lime.system.System.get_deviceModel","lime/system/System.hx",600,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_635_get_deviceVendor,"lime.system.System","get_deviceVendor",0x99fb9840,"lime.system.System.get_deviceVendor","lime/system/System.hx",635,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_661_get_desktopDirectory,"lime.system.System","get_desktopDirectory",0x483b2773,"lime.system.System.get_desktopDirectory","lime/system/System.hx",661,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_671_get_documentsDirectory,"lime.system.System","get_documentsDirectory",0x4a6a8557,"lime.system.System.get_documentsDirectory","lime/system/System.hx",671,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_681_get_endianness,"lime.system.System","get_endianness",0x4df50bb4,"lime.system.System.get_endianness","lime/system/System.hx",681,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_702_get_fontsDirectory,"lime.system.System","get_fontsDirectory",0x8242b40b,"lime.system.System.get_fontsDirectory","lime/system/System.hx",702,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_714_get_numDisplays,"lime.system.System","get_numDisplays",0x5056f915,"lime.system.System.get_numDisplays","lime/system/System.hx",714,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_721_get_platformLabel,"lime.system.System","get_platformLabel",0xc2bb267f,"lime.system.System.get_platformLabel","lime/system/System.hx",721,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_745_get_platformName,"lime.system.System","get_platformName",0x82c4f420,"lime.system.System.get_platformName","lime/system/System.hx",745,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_783_get_platformVersion,"lime.system.System","get_platformVersion",0xbd9d7863,"lime.system.System.get_platformVersion","lime/system/System.hx",783,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_811_get_userDirectory,"lime.system.System","get_userDirectory",0x2b5522e0,"lime.system.System.get_userDirectory","lime/system/System.hx",811,0x6434b429)
HX_LOCAL_STACK_FRAME(_hx_pos_f2b41f959dca9627_68_boot,"lime.system.System","boot",0x171e93ab,"lime.system.System.boot","lime/system/System.hx",68,0x6434b429)

#if defined(HX_WINDOWS)
extern "C" {
	_declspec(dllexport) unsigned long NvOptimusEnablement = 0x00000001;
	_declspec(dllexport) int AmdPowerXpressRequestHighPerformance = 1;
}
#endif

namespace lime{
namespace _hx_system{

void System_obj::__construct() { }

Dynamic System_obj::__CreateEmpty() { return new System_obj; }

void *System_obj::_hx_vtable = 0;

Dynamic System_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< System_obj > _hx_result = new System_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool System_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0470bdb7;
}

bool System_obj::disableCFFI;

::String System_obj::_hx___applicationDirectory;

 ::haxe::ds::StringMap System_obj::_hx___applicationEntryPoint;

::String System_obj::_hx___applicationStorageDirectory;

::String System_obj::_hx___desktopDirectory;

::String System_obj::_hx___deviceModel;

::String System_obj::_hx___deviceVendor;

 ::haxe::ds::IntMap System_obj::_hx___directories;

::String System_obj::_hx___documentsDirectory;

 ::lime::_hx_system::Endian System_obj::_hx___endianness;

::String System_obj::_hx___fontsDirectory;

::String System_obj::_hx___platformLabel;

::String System_obj::_hx___platformName;

::String System_obj::_hx___platformVersion;

::String System_obj::_hx___userDirectory;

void System_obj::exit(int code){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_143_exit)
HXLINE( 144)		 ::lime::app::Application currentApp = ::lime::app::Application_obj::current;
HXLINE( 146)		if (::hx::IsNotNull( currentApp )) {
HXLINE( 148)			currentApp->onExit->dispatch(code);
HXLINE( 150)			if (currentApp->onExit->canceled) {
HXLINE( 152)				return;
            			}
            		}
HXLINE( 158)		::Sys_obj::exit(code);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,exit,(void))

 ::lime::_hx_system::Display System_obj::getDisplay(int id){
            	HX_GC_STACKFRAME(&_hx_pos_f2b41f959dca9627_171_getDisplay)
HXLINE( 173)		 ::Dynamic displayInfo = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_system_get_display(id)) );
HXLINE( 175)		if (::hx::IsNotNull( displayInfo )) {
HXLINE( 177)			 ::lime::_hx_system::Display display =  ::lime::_hx_system::Display_obj::__alloc( HX_CTX );
HXLINE( 178)			display->id = id;
HXLINE( 182)			display->name = ( (::String)(displayInfo->__Field(HX_("name",4b,72,ff,48),::hx::paccDynamic)) );
HXLINE( 184)			display->bounds =  ::lime::math::Rectangle_obj::__alloc( HX_CTX , ::Dynamic(displayInfo->__Field(HX_("bounds",75,86,1d,66),::hx::paccDynamic))->__Field(HX_("x",78,00,00,00),::hx::paccDynamic), ::Dynamic(displayInfo->__Field(HX_("bounds",75,86,1d,66),::hx::paccDynamic))->__Field(HX_("y",79,00,00,00),::hx::paccDynamic), ::Dynamic(displayInfo->__Field(HX_("bounds",75,86,1d,66),::hx::paccDynamic))->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic), ::Dynamic(displayInfo->__Field(HX_("bounds",75,86,1d,66),::hx::paccDynamic))->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic));
HXLINE( 201)			display->dpi = ( (Float)(displayInfo->__Field(HX_("dpi",5d,43,4c,00),::hx::paccDynamic)) );
HXLINE( 204)			display->supportedModes = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 206)			 ::lime::_hx_system::DisplayMode displayMode;
HXLINE( 211)			::cpp::VirtualArray supportedModes = ( (::cpp::VirtualArray)(displayInfo->__Field(HX_("supportedModes",a2,a6,b8,b7),::hx::paccDynamic)) );
HXLINE( 213)			{
HXLINE( 213)				int _g = 0;
HXDLIN( 213)				while((_g < supportedModes->get_length())){
HXLINE( 213)					 ::Dynamic mode = supportedModes->__get(_g);
HXDLIN( 213)					_g = (_g + 1);
HXLINE( 215)					displayMode =  ::lime::_hx_system::DisplayMode_obj::__alloc( HX_CTX ,( (int)(mode->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ),( (int)(mode->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ),( (int)(mode->__Field(HX_("refreshRate",5b,e2,3f,40),::hx::paccDynamic)) ),( (int)(mode->__Field(HX_("pixelFormat",5d,72,1b,6f),::hx::paccDynamic)) ));
HXLINE( 216)					display->supportedModes->push(displayMode);
            				}
            			}
HXLINE( 219)			 ::Dynamic mode = displayInfo->__Field(HX_("currentMode",3c,ac,f2,80),::hx::paccDynamic);
HXLINE( 220)			 ::lime::_hx_system::DisplayMode currentMode =  ::lime::_hx_system::DisplayMode_obj::__alloc( HX_CTX ,( (int)(mode->__Field(HX_("width",06,b6,62,ca),::hx::paccDynamic)) ),( (int)(mode->__Field(HX_("height",e7,07,4c,02),::hx::paccDynamic)) ),( (int)(mode->__Field(HX_("refreshRate",5b,e2,3f,40),::hx::paccDynamic)) ),( (int)(mode->__Field(HX_("pixelFormat",5d,72,1b,6f),::hx::paccDynamic)) ));
HXLINE( 222)			{
HXLINE( 222)				int _g1 = 0;
HXDLIN( 222)				::Array< ::Dynamic> _g2 = display->supportedModes;
HXDLIN( 222)				while((_g1 < _g2->length)){
HXLINE( 222)					 ::lime::_hx_system::DisplayMode mode = _g2->__get(_g1).StaticCast<  ::lime::_hx_system::DisplayMode >();
HXDLIN( 222)					_g1 = (_g1 + 1);
HXLINE( 224)					bool _hx_tmp;
HXDLIN( 224)					bool _hx_tmp1;
HXDLIN( 224)					bool _hx_tmp2;
HXDLIN( 224)					if ((currentMode->pixelFormat == mode->pixelFormat)) {
HXLINE( 224)						_hx_tmp2 = (currentMode->width == mode->width);
            					}
            					else {
HXLINE( 224)						_hx_tmp2 = false;
            					}
HXDLIN( 224)					if (_hx_tmp2) {
HXLINE( 224)						_hx_tmp1 = (currentMode->height == mode->height);
            					}
            					else {
HXLINE( 224)						_hx_tmp1 = false;
            					}
HXDLIN( 224)					if (_hx_tmp1) {
HXLINE( 224)						_hx_tmp = (currentMode->refreshRate == mode->refreshRate);
            					}
            					else {
HXLINE( 224)						_hx_tmp = false;
            					}
HXDLIN( 224)					if (_hx_tmp) {
HXLINE( 229)						currentMode = mode;
HXLINE( 230)						goto _hx_goto_2;
            					}
            				}
            				_hx_goto_2:;
            			}
HXLINE( 234)			display->currentMode = currentMode;
HXLINE( 236)			return display;
            		}
HXLINE( 265)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,getDisplay,return )

int System_obj::getTimer(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_275_getTimer)
HXDLIN( 275)		return ( (int)(::lime::_internal::backend::native::NativeCFFI_obj::lime_system_get_timer()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,getTimer,return )

 ::Dynamic System_obj::load(::String library,::String method,::hx::Null< int >  __o_args,::hx::Null< bool >  __o_lazy){
            		int args = __o_args.Default(0);
            		bool lazy = __o_lazy.Default(false);
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_289_load)
HXDLIN( 289)		return ::lime::_hx_system::CFFI_obj::load(library,method,args,lazy);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(System_obj,load,return )

void System_obj::openFile(::String path){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_298_openFile)
HXDLIN( 298)		if (::hx::IsNotNull( path )) {
HXLINE( 301)			::Sys_obj::command(HX_("start",62,74,0b,84),::Array_obj< ::String >::__new(2)->init(0,HX_("",00,00,00,00))->init(1,path));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,openFile,(void))

void System_obj::openURL(::String url,::String __o_target){
            		::String target = __o_target;
            		if (::hx::IsNull(__o_target)) target = HX_("_blank",95,26,d9,b0);
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_321_openURL)
HXDLIN( 321)		if (::hx::IsNotNull( url )) {
HXLINE( 324)			::lime::_hx_system::System_obj::openFile(url);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,openURL,(void))

void System_obj::_hx___copyMissingFields( ::Dynamic target, ::Dynamic source){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_339___copyMissingFields)
HXLINE( 340)		bool _hx_tmp;
HXDLIN( 340)		if (::hx::IsNotNull( source )) {
HXLINE( 340)			_hx_tmp = ::hx::IsNull( target );
            		}
            		else {
HXLINE( 340)			_hx_tmp = true;
            		}
HXDLIN( 340)		if (_hx_tmp) {
HXLINE( 340)			return;
            		}
HXLINE( 342)		{
HXLINE( 342)			int _g = 0;
HXDLIN( 342)			::Array< ::String > _g1 = ::Reflect_obj::fields(source);
HXDLIN( 342)			while((_g < _g1->length)){
HXLINE( 342)				::String field = _g1->__get(_g);
HXDLIN( 342)				_g = (_g + 1);
HXLINE( 344)				if (!(::Reflect_obj::hasField(target,field))) {
HXLINE( 346)					::Reflect_obj::setField(target,field,::Reflect_obj::field(source,field));
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,_hx___copyMissingFields,(void))

::String System_obj::_hx___getDirectory(int type){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_354___getDirectory)
HXDLIN( 354)		if (::lime::_hx_system::System_obj::_hx___directories->exists(type)) {
HXLINE( 356)			return ::lime::_hx_system::System_obj::_hx___directories->get_string(type);
            		}
            		else {
HXLINE( 360)			::String path;
HXLINE( 362)			if ((type == 1)) {
HXLINE( 364)				::String company = HX_("MyCompany",11,c3,2e,cc);
HXLINE( 365)				::String file = HX_("MyApplication",24,d3,d1,1c);
HXLINE( 367)				if (::hx::IsNotNull( ::lime::app::Application_obj::current )) {
HXLINE( 369)					if (::lime::app::Application_obj::current->meta->exists(HX_("company",3d,15,69,83))) {
HXLINE( 371)						company = ::lime::app::Application_obj::current->meta->get_string(HX_("company",3d,15,69,83));
            					}
HXLINE( 374)					if (::lime::app::Application_obj::current->meta->exists(HX_("file",7c,ce,bb,43))) {
HXLINE( 376)						file = ::lime::app::Application_obj::current->meta->get_string(HX_("file",7c,ce,bb,43));
            					}
            				}
HXLINE( 383)				path = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_system_get_directory(type,company,file)) );
            			}
            			else {
HXLINE( 391)				path = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_system_get_directory(type,null(),null())) );
            			}
HXLINE( 396)			::String seperator = HX_("\\",5c,00,00,00);
HXLINE( 401)			bool _hx_tmp;
HXDLIN( 401)			bool _hx_tmp1;
HXDLIN( 401)			if (::hx::IsNotNull( path )) {
HXLINE( 401)				_hx_tmp1 = (path.length > 0);
            			}
            			else {
HXLINE( 401)				_hx_tmp1 = false;
            			}
HXDLIN( 401)			if (_hx_tmp1) {
HXLINE( 401)				_hx_tmp = !(::StringTools_obj::endsWith(path,seperator));
            			}
            			else {
HXLINE( 401)				_hx_tmp = false;
            			}
HXDLIN( 401)			if (_hx_tmp) {
HXLINE( 403)				path = (path + seperator);
            			}
HXLINE( 406)			::lime::_hx_system::System_obj::_hx___directories->set(type,path);
HXLINE( 407)			return path;
            		}
HXLINE( 354)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,_hx___getDirectory,return )

void System_obj::_hx___parseArguments( ::Dynamic attributes){
            	HX_GC_STACKFRAME(&_hx_pos_f2b41f959dca9627_430___parseArguments)
HXLINE( 433)		::Array< ::String > arguments = ::Sys_obj::args();
HXLINE( 434)		 ::EReg stripQuotes =  ::EReg_obj::__alloc( HX_CTX ,HX_("^['\"](.*)['\"]$",13,22,1b,37),HX_("",00,00,00,00));
HXLINE( 435)		int equals;
HXDLIN( 435)		::String argValue;
HXDLIN( 435)		 ::haxe::ds::StringMap parameters = null();
HXLINE( 436)		::String windowParamPrefix = HX_("--window-",dd,62,c2,0a);
HXLINE( 438)		if (::hx::IsNotNull( arguments )) {
HXLINE( 440)			int _g = 0;
HXDLIN( 440)			while((_g < arguments->length)){
HXLINE( 440)				::String argument = arguments->__get(_g);
HXDLIN( 440)				_g = (_g + 1);
HXLINE( 442)				equals = argument.indexOf(HX_("=",3d,00,00,00),null());
HXLINE( 444)				if ((equals > 0)) {
HXLINE( 446)					argValue = argument.substr((equals + 1),null());
HXLINE( 448)					if (stripQuotes->match(argValue)) {
HXLINE( 450)						argValue = stripQuotes->matched(1);
            					}
HXLINE( 453)					if (::hx::IsNull( parameters )) {
HXLINE( 453)						parameters =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            					}
HXLINE( 454)					parameters->set(argument.substr(0,equals),argValue);
            				}
            			}
            		}
HXLINE( 459)		if (::hx::IsNotNull( parameters )) {
HXLINE( 461)			if (::hx::IsNull( attributes->__Field(HX_("parameters",aa,be,7e,51),::hx::paccDynamic) )) {
HXLINE( 461)				attributes->__SetField(HX_("parameters",aa,be,7e,51), ::Dynamic(::hx::Anon_obj::Create(0)),::hx::paccDynamic);
            			}
HXLINE( 462)			if (::hx::IsNull( attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic) )) {
HXLINE( 462)				attributes->__SetField(HX_("context",ef,95,77,19), ::Dynamic(::hx::Anon_obj::Create(0)),::hx::paccDynamic);
            			}
HXLINE( 464)			{
HXLINE( 464)				 ::Dynamic parameter = parameters->keys();
HXDLIN( 464)				while(( (bool)(parameter->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 464)					::String parameter1 = ( (::String)(parameter->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 466)					argValue = parameters->get_string(parameter1);
HXLINE( 468)					if (::StringTools_obj::startsWith(parameter1,windowParamPrefix)) {
HXLINE( 470)						::String _hx_switch_0 = parameter1.substr(windowParamPrefix.length,null());
            						if (  (_hx_switch_0==HX_("allow-high-dpi",36,e5,66,be)) ){
HXLINE( 473)							attributes->__SetField(HX_("allowHighDPI",92,07,a2,b4),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 473)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("always-on-top",25,b6,1e,79)) ){
HXLINE( 475)							attributes->__SetField(HX_("alwaysOnTop",67,4d,53,16),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 475)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("antialiasing",f4,16,b3,48)) ){
HXLINE( 477)							 ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic))->__SetField(HX_("antialiasing",f4,16,b3,48),::Std_obj::parseInt(argValue),::hx::paccDynamic);
HXDLIN( 477)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("background",ee,93,1d,26)) ){
HXLINE( 479)							 ::Dynamic _hx_tmp;
HXDLIN( 479)							bool _hx_tmp1;
HXDLIN( 479)							if ((argValue != HX_("",00,00,00,00))) {
HXLINE( 479)								_hx_tmp1 = (argValue == HX_("null",87,9e,0e,49));
            							}
            							else {
HXLINE( 479)								_hx_tmp1 = true;
            							}
HXDLIN( 479)							if (_hx_tmp1) {
HXLINE( 479)								_hx_tmp = null();
            							}
            							else {
HXLINE( 479)								_hx_tmp = ::Std_obj::parseInt(argValue);
            							}
HXDLIN( 479)							 ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic))->__SetField(HX_("background",ee,93,1d,26),_hx_tmp,::hx::paccDynamic);
HXDLIN( 479)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("borderless",45,46,71,17)) ){
HXLINE( 481)							attributes->__SetField(HX_("borderless",45,46,71,17),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 481)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("colorDepth",a0,08,96,fb)) ){
HXLINE( 483)							 ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic))->__SetField(HX_("colorDepth",a0,08,96,fb),::Std_obj::parseInt(argValue),::hx::paccDynamic);
HXDLIN( 483)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("depth",03,f1,29,d7)) ||  (_hx_switch_0==HX_("depth-buffer",4a,22,d8,98)) ){
HXLINE( 485)							 ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic))->__SetField(HX_("depth",03,f1,29,d7),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 485)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("fullscreen",3b,3a,b4,f9)) ){
HXLINE( 488)							attributes->__SetField(HX_("fullscreen",3b,3a,b4,f9),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 488)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("hardware",a8,e2,d3,75)) ){
HXLINE( 490)							 ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic))->__SetField(HX_("hardware",a8,e2,d3,75),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 490)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("height",e7,07,4c,02)) ){
HXLINE( 492)							attributes->__SetField(HX_("height",e7,07,4c,02),::Std_obj::parseInt(argValue),::hx::paccDynamic);
HXDLIN( 492)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("hidden",6a,ff,95,4c)) ){
HXLINE( 494)							attributes->__SetField(HX_("hidden",6a,ff,95,4c),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 494)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("maximized",18,0e,e1,fe)) ){
HXLINE( 496)							attributes->__SetField(HX_("maximized",18,0e,e1,fe),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 496)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("minimized",86,fb,9d,28)) ){
HXLINE( 498)							attributes->__SetField(HX_("minimized",86,fb,9d,28),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 498)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("render-type",51,ca,94,6e)) ||  (_hx_switch_0==HX_("renderer",43,c5,db,b2)) ){
HXLINE( 500)							 ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic))->__SetField(HX_("type",ba,f2,08,4d),argValue,::hx::paccDynamic);
HXDLIN( 500)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("render-version",e1,a7,f5,24)) ||  (_hx_switch_0==HX_("renderer-version",ce,36,a7,0b)) ){
HXLINE( 502)							 ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic))->__SetField(HX_("version",18,e7,f1,7c),argValue,::hx::paccDynamic);
HXDLIN( 502)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("resizable",6b,37,50,a9)) ){
HXLINE( 504)							attributes->__SetField(HX_("resizable",6b,37,50,a9),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 504)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("stencil",fc,bd,03,80)) ||  (_hx_switch_0==HX_("stencil-buffer",71,d6,20,82)) ){
HXLINE( 506)							 ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic))->__SetField(HX_("stencil",fc,bd,03,80),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 506)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("vsync",d1,2d,a8,3d)) ){
HXLINE( 509)							 ::Dynamic(attributes->__Field(HX_("context",ef,95,77,19),::hx::paccDynamic))->__SetField(HX_("vsync",d1,2d,a8,3d),(argValue == HX_("true",4e,a7,03,4d)),::hx::paccDynamic);
HXDLIN( 509)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("width",06,b6,62,ca)) ){
HXLINE( 511)							attributes->__SetField(HX_("width",06,b6,62,ca),::Std_obj::parseInt(argValue),::hx::paccDynamic);
HXDLIN( 511)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("x",78,00,00,00)) ){
HXLINE( 513)							attributes->__SetField(HX_("x",78,00,00,00),::Std_obj::parseInt(argValue),::hx::paccDynamic);
HXDLIN( 513)							goto _hx_goto_13;
            						}
            						if (  (_hx_switch_0==HX_("y",79,00,00,00)) ){
HXLINE( 515)							attributes->__SetField(HX_("y",79,00,00,00),::Std_obj::parseInt(argValue),::hx::paccDynamic);
HXDLIN( 515)							goto _hx_goto_13;
            						}
            						/* default */{
            						}
            						_hx_goto_13:;
            					}
            					else {
HXLINE( 519)						if (!(::Reflect_obj::hasField( ::Dynamic(attributes->__Field(HX_("parameters",aa,be,7e,51),::hx::paccDynamic)),parameter1))) {
HXLINE( 521)							::Reflect_obj::setField( ::Dynamic(attributes->__Field(HX_("parameters",aa,be,7e,51),::hx::paccDynamic)),parameter1,argValue);
            						}
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,_hx___parseArguments,(void))

bool System_obj::_hx___parseBool(::String value){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_530___parseBool)
HXDLIN( 530)		return (value == HX_("true",4e,a7,03,4d));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,_hx___parseBool,return )

void System_obj::_hx___registerEntryPoint(::String projectName, ::Dynamic entryPoint){
            	HX_GC_STACKFRAME(&_hx_pos_f2b41f959dca9627_534___registerEntryPoint)
HXLINE( 535)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___applicationEntryPoint )) {
HXLINE( 537)			::lime::_hx_system::System_obj::_hx___applicationEntryPoint =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            		}
HXLINE( 540)		::lime::_hx_system::System_obj::_hx___applicationEntryPoint->set(projectName,entryPoint);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,_hx___registerEntryPoint,(void))

::String System_obj::_hx___runProcess(::String command,::Array< ::String > args){
            	HX_GC_STACKFRAME(&_hx_pos_f2b41f959dca9627_544___runProcess)
HXLINE( 546)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 548)			if (::hx::IsNull( args )) {
HXLINE( 548)				args = ::Array_obj< ::String >::__new(0);
            			}
HXLINE( 550)			 ::sys::io::Process process =  ::sys::io::Process_obj::__alloc( HX_CTX ,command,args,null());
HXLINE( 551)			::String value = ::StringTools_obj::trim(process->_hx_stdout->readLine().toString());
HXLINE( 552)			process->close();
HXLINE( 553)			return value;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 555)				{
HXLINE( 555)					null();
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 557)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(System_obj,_hx___runProcess,return )

bool System_obj::get_allowScreenTimeout(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_564_get_allowScreenTimeout)
HXDLIN( 564)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_system_get_allow_screen_timeout();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_allowScreenTimeout,return )

bool System_obj::set_allowScreenTimeout(bool value){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_573_set_allowScreenTimeout)
HXDLIN( 573)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_system_set_allow_screen_timeout(value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(System_obj,set_allowScreenTimeout,return )

::String System_obj::get_applicationDirectory(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_580_get_applicationDirectory)
HXLINE( 581)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___applicationDirectory )) {
HXLINE( 583)			::lime::_hx_system::System_obj::_hx___applicationDirectory = ::lime::_hx_system::System_obj::_hx___getDirectory(0);
            		}
HXLINE( 586)		return ::lime::_hx_system::System_obj::_hx___applicationDirectory;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_applicationDirectory,return )

::String System_obj::get_applicationStorageDirectory(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_590_get_applicationStorageDirectory)
HXLINE( 591)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___applicationStorageDirectory )) {
HXLINE( 593)			::lime::_hx_system::System_obj::_hx___applicationStorageDirectory = ::lime::_hx_system::System_obj::_hx___getDirectory(1);
            		}
HXLINE( 596)		return ::lime::_hx_system::System_obj::_hx___applicationStorageDirectory;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_applicationStorageDirectory,return )

::String System_obj::get_deviceModel(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_600_get_deviceModel)
HXLINE( 601)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___deviceModel )) {
HXLINE( 607)			::lime::_hx_system::System_obj::_hx___deviceModel = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_system_get_device_model()) );
            		}
HXLINE( 631)		return ::lime::_hx_system::System_obj::_hx___deviceModel;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_deviceModel,return )

::String System_obj::get_deviceVendor(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_635_get_deviceVendor)
HXLINE( 636)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___deviceVendor )) {
HXLINE( 642)			::lime::_hx_system::System_obj::_hx___deviceVendor = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_system_get_device_vendor()) );
            		}
HXLINE( 657)		return ::lime::_hx_system::System_obj::_hx___deviceVendor;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_deviceVendor,return )

::String System_obj::get_desktopDirectory(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_661_get_desktopDirectory)
HXLINE( 662)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___desktopDirectory )) {
HXLINE( 664)			::lime::_hx_system::System_obj::_hx___desktopDirectory = ::lime::_hx_system::System_obj::_hx___getDirectory(2);
            		}
HXLINE( 667)		return ::lime::_hx_system::System_obj::_hx___desktopDirectory;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_desktopDirectory,return )

::String System_obj::get_documentsDirectory(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_671_get_documentsDirectory)
HXLINE( 672)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___documentsDirectory )) {
HXLINE( 674)			::lime::_hx_system::System_obj::_hx___documentsDirectory = ::lime::_hx_system::System_obj::_hx___getDirectory(3);
            		}
HXLINE( 677)		return ::lime::_hx_system::System_obj::_hx___documentsDirectory;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_documentsDirectory,return )

 ::lime::_hx_system::Endian System_obj::get_endianness(){
            	HX_GC_STACKFRAME(&_hx_pos_f2b41f959dca9627_681_get_endianness)
HXLINE( 682)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___endianness )) {
HXLINE( 687)			 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(2);
HXDLIN( 687)			 ::haxe::io::Bytes arrayBuffer = this1;
HXLINE( 688)			 ::Dynamic elements = null();
HXDLIN( 688)			::cpp::VirtualArray array = null();
HXDLIN( 688)			 ::openfl::_Vector::IntVector vector = null();
HXDLIN( 688)			 ::lime::utils::ArrayBufferView view = null();
HXDLIN( 688)			 ::Dynamic len = null();
HXDLIN( 688)			 ::lime::utils::ArrayBufferView this2;
HXDLIN( 688)			if (::hx::IsNotNull( elements )) {
HXLINE( 688)				this2 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            			}
            			else {
HXLINE( 688)				if (::hx::IsNotNull( array )) {
HXLINE( 688)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 688)					_this->byteOffset = 0;
HXDLIN( 688)					_this->length = array->get_length();
HXDLIN( 688)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 688)					 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 688)					_this->buffer = this1;
HXDLIN( 688)					_this->copyFromArray(array,null());
HXDLIN( 688)					this2 = _this;
            				}
            				else {
HXLINE( 688)					if (::hx::IsNotNull( vector )) {
HXLINE( 688)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 688)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 688)						_this->byteOffset = 0;
HXDLIN( 688)						_this->length = array->get_length();
HXDLIN( 688)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 688)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 688)						_this->buffer = this1;
HXDLIN( 688)						_this->copyFromArray(array,null());
HXDLIN( 688)						this2 = _this;
            					}
            					else {
HXLINE( 688)						if (::hx::IsNotNull( view )) {
HXLINE( 688)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 688)							 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN( 688)							int srcLength = view->length;
HXDLIN( 688)							int srcByteOffset = view->byteOffset;
HXDLIN( 688)							int srcElementSize = view->bytesPerElement;
HXDLIN( 688)							int elementSize = _this->bytesPerElement;
HXDLIN( 688)							if ((view->type == _this->type)) {
HXLINE( 688)								int srcLength = srcData->length;
HXDLIN( 688)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 688)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 688)								_this->buffer = this1;
HXDLIN( 688)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 688)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 688)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 688)							_this->byteOffset = 0;
HXDLIN( 688)							_this->length = srcLength;
HXDLIN( 688)							this2 = _this;
            						}
            						else {
HXLINE( 688)							if (::hx::IsNotNull( arrayBuffer )) {
HXLINE( 688)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN( 688)								int in_byteOffset = 0;
HXDLIN( 688)								if ((in_byteOffset < 0)) {
HXLINE( 688)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 688)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 688)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 688)								int bufferByteLength = arrayBuffer->length;
HXDLIN( 688)								int elementSize = _this->bytesPerElement;
HXDLIN( 688)								int newByteLength = bufferByteLength;
HXDLIN( 688)								if (::hx::IsNull( len )) {
HXLINE( 688)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 688)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 688)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 688)									if ((newByteLength < 0)) {
HXLINE( 688)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 688)									newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN( 688)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 688)									if ((newRange > bufferByteLength)) {
HXLINE( 688)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 688)								_this->buffer = arrayBuffer;
HXDLIN( 688)								_this->byteOffset = in_byteOffset;
HXDLIN( 688)								_this->byteLength = newByteLength;
HXDLIN( 688)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 688)								this2 = _this;
            							}
            							else {
HXLINE( 688)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 688)			 ::lime::utils::ArrayBufferView uint8Array = this2;
HXLINE( 689)			 ::Dynamic elements1 = null();
HXDLIN( 689)			::cpp::VirtualArray array1 = null();
HXDLIN( 689)			 ::openfl::_Vector::IntVector vector1 = null();
HXDLIN( 689)			 ::lime::utils::ArrayBufferView view1 = null();
HXDLIN( 689)			 ::Dynamic len1 = null();
HXDLIN( 689)			 ::lime::utils::ArrayBufferView this3;
HXDLIN( 689)			if (::hx::IsNotNull( elements1 )) {
HXLINE( 689)				this3 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements1,6);
            			}
            			else {
HXLINE( 689)				if (::hx::IsNotNull( array1 )) {
HXLINE( 689)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 689)					_this->byteOffset = 0;
HXDLIN( 689)					_this->length = array1->get_length();
HXDLIN( 689)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 689)					 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 689)					_this->buffer = this1;
HXDLIN( 689)					_this->copyFromArray(array1,null());
HXDLIN( 689)					this3 = _this;
            				}
            				else {
HXLINE( 689)					if (::hx::IsNotNull( vector1 )) {
HXLINE( 689)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 689)						::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector1->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN( 689)						_this->byteOffset = 0;
HXDLIN( 689)						_this->length = array->get_length();
HXDLIN( 689)						_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN( 689)						 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN( 689)						_this->buffer = this1;
HXDLIN( 689)						_this->copyFromArray(array,null());
HXDLIN( 689)						this3 = _this;
            					}
            					else {
HXLINE( 689)						if (::hx::IsNotNull( view1 )) {
HXLINE( 689)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 689)							 ::haxe::io::Bytes srcData = view1->buffer;
HXDLIN( 689)							int srcLength = view1->length;
HXDLIN( 689)							int srcByteOffset = view1->byteOffset;
HXDLIN( 689)							int srcElementSize = view1->bytesPerElement;
HXDLIN( 689)							int elementSize = _this->bytesPerElement;
HXDLIN( 689)							if ((view1->type == _this->type)) {
HXLINE( 689)								int srcLength = srcData->length;
HXDLIN( 689)								int cloneLength = (srcLength - srcByteOffset);
HXDLIN( 689)								 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN( 689)								_this->buffer = this1;
HXDLIN( 689)								_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            							}
            							else {
HXLINE( 689)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            							}
HXDLIN( 689)							_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN( 689)							_this->byteOffset = 0;
HXDLIN( 689)							_this->length = srcLength;
HXDLIN( 689)							this3 = _this;
            						}
            						else {
HXLINE( 689)							if (::hx::IsNotNull( arrayBuffer )) {
HXLINE( 689)								 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,6);
HXDLIN( 689)								int in_byteOffset = 0;
HXDLIN( 689)								if ((in_byteOffset < 0)) {
HXLINE( 689)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 689)								if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE( 689)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN( 689)								int bufferByteLength = arrayBuffer->length;
HXDLIN( 689)								int elementSize = _this->bytesPerElement;
HXDLIN( 689)								int newByteLength = bufferByteLength;
HXDLIN( 689)								if (::hx::IsNull( len1 )) {
HXLINE( 689)									newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 689)									if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE( 689)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
HXDLIN( 689)									if ((newByteLength < 0)) {
HXLINE( 689)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
            								else {
HXLINE( 689)									newByteLength = (( (int)(len1) ) * _this->bytesPerElement);
HXDLIN( 689)									int newRange = (in_byteOffset + newByteLength);
HXDLIN( 689)									if ((newRange > bufferByteLength)) {
HXLINE( 689)										HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            									}
            								}
HXDLIN( 689)								_this->buffer = arrayBuffer;
HXDLIN( 689)								_this->byteOffset = in_byteOffset;
HXDLIN( 689)								_this->byteLength = newByteLength;
HXDLIN( 689)								_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN( 689)								this3 = _this;
            							}
            							else {
HXLINE( 689)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt16Array",0a,c7,2d,d5)));
            							}
            						}
            					}
            				}
            			}
HXDLIN( 689)			 ::lime::utils::ArrayBufferView uint16array = this3;
HXLINE( 690)			 ::__hxcpp_memory_set_byte(uint8Array->buffer->b,uint8Array->byteOffset,170);
HXLINE( 691)			 ::__hxcpp_memory_set_byte(uint8Array->buffer->b,(uint8Array->byteOffset + 1),187);
HXLINE( 692)			if ((( ::__hxcpp_memory_get_ui16(uint16array->buffer->b,uint16array->byteOffset) & 65535) == 43707)) {
HXLINE( 692)				::lime::_hx_system::System_obj::_hx___endianness = ::lime::_hx_system::Endian_obj::_hx_BIG_ENDIAN_dyn();
            			}
            			else {
HXLINE( 694)				::lime::_hx_system::System_obj::_hx___endianness = ::lime::_hx_system::Endian_obj::_hx_LITTLE_ENDIAN_dyn();
            			}
            		}
HXLINE( 698)		return ::lime::_hx_system::System_obj::_hx___endianness;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_endianness,return )

::String System_obj::get_fontsDirectory(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_702_get_fontsDirectory)
HXLINE( 703)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___fontsDirectory )) {
HXLINE( 705)			::lime::_hx_system::System_obj::_hx___fontsDirectory = ::lime::_hx_system::System_obj::_hx___getDirectory(4);
            		}
HXLINE( 708)		return ::lime::_hx_system::System_obj::_hx___fontsDirectory;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_fontsDirectory,return )

int System_obj::get_numDisplays(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_714_get_numDisplays)
HXDLIN( 714)		return ::lime::_internal::backend::native::NativeCFFI_obj::lime_system_get_num_displays();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_numDisplays,return )

::String System_obj::get_platformLabel(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_721_get_platformLabel)
HXLINE( 722)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___platformLabel )) {
HXLINE( 728)			::String label = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_system_get_platform_label()) );
HXLINE( 730)			if (::hx::IsNotNull( label )) {
HXLINE( 730)				::lime::_hx_system::System_obj::_hx___platformLabel = ::StringTools_obj::trim(label);
            			}
            		}
HXLINE( 741)		return ::lime::_hx_system::System_obj::_hx___platformLabel;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_platformLabel,return )

::String System_obj::get_platformName(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_745_get_platformName)
HXLINE( 746)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___platformName )) {
HXLINE( 749)			::lime::_hx_system::System_obj::_hx___platformName = HX_("Windows",63,06,c6,b5);
            		}
HXLINE( 779)		return ::lime::_hx_system::System_obj::_hx___platformName;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_platformName,return )

::String System_obj::get_platformVersion(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_783_get_platformVersion)
HXLINE( 784)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___platformVersion )) {
HXLINE( 790)			::lime::_hx_system::System_obj::_hx___platformVersion = ( ( ::Dynamic)(::lime::_internal::backend::native::NativeCFFI_obj::lime_system_get_platform_version()) );
            		}
HXLINE( 807)		return ::lime::_hx_system::System_obj::_hx___platformVersion;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_platformVersion,return )

::String System_obj::get_userDirectory(){
            	HX_STACKFRAME(&_hx_pos_f2b41f959dca9627_811_get_userDirectory)
HXLINE( 812)		if (::hx::IsNull( ::lime::_hx_system::System_obj::_hx___userDirectory )) {
HXLINE( 814)			::lime::_hx_system::System_obj::_hx___userDirectory = ::lime::_hx_system::System_obj::_hx___getDirectory(5);
            		}
HXLINE( 817)		return ::lime::_hx_system::System_obj::_hx___userDirectory;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(System_obj,get_userDirectory,return )


System_obj::System_obj()
{
}

bool System_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"exit") ) { outValue = exit_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"openURL") ) { outValue = openURL_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTimer") ) { outValue = getTimer_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"openFile") ) { outValue = openFile_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"endianness") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_endianness() ); return true; } }
		if (HX_FIELD_EQ(inName,"getDisplay") ) { outValue = getDisplay_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"deviceModel") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_deviceModel() ); return true; } }
		if (HX_FIELD_EQ(inName,"disableCFFI") ) { outValue = ( disableCFFI ); return true; }
		if (HX_FIELD_EQ(inName,"numDisplays") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_numDisplays() ); return true; } }
		if (HX_FIELD_EQ(inName,"__parseBool") ) { outValue = _hx___parseBool_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"deviceVendor") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_deviceVendor() ); return true; } }
		if (HX_FIELD_EQ(inName,"platformName") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_platformName() ); return true; } }
		if (HX_FIELD_EQ(inName,"__endianness") ) { outValue = ( _hx___endianness ); return true; }
		if (HX_FIELD_EQ(inName,"__runProcess") ) { outValue = _hx___runProcess_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"platformLabel") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_platformLabel() ); return true; } }
		if (HX_FIELD_EQ(inName,"userDirectory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_userDirectory() ); return true; } }
		if (HX_FIELD_EQ(inName,"__deviceModel") ) { outValue = ( _hx___deviceModel ); return true; }
		if (HX_FIELD_EQ(inName,"__directories") ) { outValue = ( _hx___directories ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fontsDirectory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_fontsDirectory() ); return true; } }
		if (HX_FIELD_EQ(inName,"__deviceVendor") ) { outValue = ( _hx___deviceVendor ); return true; }
		if (HX_FIELD_EQ(inName,"__platformName") ) { outValue = ( _hx___platformName ); return true; }
		if (HX_FIELD_EQ(inName,"__getDirectory") ) { outValue = _hx___getDirectory_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_endianness") ) { outValue = get_endianness_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"platformVersion") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_platformVersion() ); return true; } }
		if (HX_FIELD_EQ(inName,"__platformLabel") ) { outValue = ( _hx___platformLabel ); return true; }
		if (HX_FIELD_EQ(inName,"__userDirectory") ) { outValue = ( _hx___userDirectory ); return true; }
		if (HX_FIELD_EQ(inName,"get_deviceModel") ) { outValue = get_deviceModel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_numDisplays") ) { outValue = get_numDisplays_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"desktopDirectory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_desktopDirectory() ); return true; } }
		if (HX_FIELD_EQ(inName,"__fontsDirectory") ) { outValue = ( _hx___fontsDirectory ); return true; }
		if (HX_FIELD_EQ(inName,"__parseArguments") ) { outValue = _hx___parseArguments_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_deviceVendor") ) { outValue = get_deviceVendor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_platformName") ) { outValue = get_platformName_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__platformVersion") ) { outValue = ( _hx___platformVersion ); return true; }
		if (HX_FIELD_EQ(inName,"get_platformLabel") ) { outValue = get_platformLabel_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_userDirectory") ) { outValue = get_userDirectory_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"allowScreenTimeout") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_allowScreenTimeout() ); return true; } }
		if (HX_FIELD_EQ(inName,"documentsDirectory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_documentsDirectory() ); return true; } }
		if (HX_FIELD_EQ(inName,"__desktopDirectory") ) { outValue = ( _hx___desktopDirectory ); return true; }
		if (HX_FIELD_EQ(inName,"get_fontsDirectory") ) { outValue = get_fontsDirectory_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__copyMissingFields") ) { outValue = _hx___copyMissingFields_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_platformVersion") ) { outValue = get_platformVersion_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"applicationDirectory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_applicationDirectory() ); return true; } }
		if (HX_FIELD_EQ(inName,"__documentsDirectory") ) { outValue = ( _hx___documentsDirectory ); return true; }
		if (HX_FIELD_EQ(inName,"__registerEntryPoint") ) { outValue = _hx___registerEntryPoint_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_desktopDirectory") ) { outValue = get_desktopDirectory_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__applicationDirectory") ) { outValue = ( _hx___applicationDirectory ); return true; }
		if (HX_FIELD_EQ(inName,"get_allowScreenTimeout") ) { outValue = get_allowScreenTimeout_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_allowScreenTimeout") ) { outValue = set_allowScreenTimeout_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_documentsDirectory") ) { outValue = get_documentsDirectory_dyn(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__applicationEntryPoint") ) { outValue = ( _hx___applicationEntryPoint ); return true; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"get_applicationDirectory") ) { outValue = get_applicationDirectory_dyn(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"applicationStorageDirectory") ) { if (inCallProp == ::hx::paccAlways) { outValue = ( get_applicationStorageDirectory() ); return true; } }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"__applicationStorageDirectory") ) { outValue = ( _hx___applicationStorageDirectory ); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"get_applicationStorageDirectory") ) { outValue = get_applicationStorageDirectory_dyn(); return true; }
	}
	return false;
}

bool System_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"disableCFFI") ) { disableCFFI=ioValue.Cast< bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__endianness") ) { _hx___endianness=ioValue.Cast<  ::lime::_hx_system::Endian >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__deviceModel") ) { _hx___deviceModel=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"__directories") ) { _hx___directories=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__deviceVendor") ) { _hx___deviceVendor=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"__platformName") ) { _hx___platformName=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__platformLabel") ) { _hx___platformLabel=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"__userDirectory") ) { _hx___userDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__fontsDirectory") ) { _hx___fontsDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__platformVersion") ) { _hx___platformVersion=ioValue.Cast< ::String >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"allowScreenTimeout") ) { if (inCallProp == ::hx::paccAlways)  ioValue = ( set_allowScreenTimeout(ioValue.Cast< bool >()) ); }
		if (HX_FIELD_EQ(inName,"__desktopDirectory") ) { _hx___desktopDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"__documentsDirectory") ) { _hx___documentsDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__applicationDirectory") ) { _hx___applicationDirectory=ioValue.Cast< ::String >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"__applicationEntryPoint") ) { _hx___applicationEntryPoint=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"__applicationStorageDirectory") ) { _hx___applicationStorageDirectory=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *System_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo System_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &System_obj::disableCFFI,HX_("disableCFFI",8e,24,b6,11)},
	{::hx::fsString,(void *) &System_obj::_hx___applicationDirectory,HX_("__applicationDirectory",1d,e0,19,ed)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &System_obj::_hx___applicationEntryPoint,HX_("__applicationEntryPoint",ce,da,ed,08)},
	{::hx::fsString,(void *) &System_obj::_hx___applicationStorageDirectory,HX_("__applicationStorageDirectory",02,dc,05,f4)},
	{::hx::fsString,(void *) &System_obj::_hx___desktopDirectory,HX_("__desktopDirectory",11,04,d2,1a)},
	{::hx::fsString,(void *) &System_obj::_hx___deviceModel,HX_("__deviceModel",13,98,10,44)},
	{::hx::fsString,(void *) &System_obj::_hx___deviceVendor,HX_("__deviceVendor",de,4d,44,28)},
	{::hx::fsObject /*  ::haxe::ds::IntMap */ ,(void *) &System_obj::_hx___directories,HX_("__directories",eb,9c,a4,a9)},
	{::hx::fsString,(void *) &System_obj::_hx___documentsDirectory,HX_("__documentsDirectory",75,45,e8,15)},
	{::hx::fsObject /*  ::lime::_hx_system::Endian */ ,(void *) &System_obj::_hx___endianness,HX_("__endianness",d2,7d,66,87)},
	{::hx::fsString,(void *) &System_obj::_hx___fontsDirectory,HX_("__fontsDirectory",29,8d,5a,bc)},
	{::hx::fsString,(void *) &System_obj::_hx___platformLabel,HX_("__platformLabel",21,5b,11,b4)},
	{::hx::fsString,(void *) &System_obj::_hx___platformName,HX_("__platformName",be,a9,0d,11)},
	{::hx::fsString,(void *) &System_obj::_hx___platformVersion,HX_("__platformVersion",85,99,63,58)},
	{::hx::fsString,(void *) &System_obj::_hx___userDirectory,HX_("__userDirectory",82,57,ab,1c)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void System_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_MARK_MEMBER_NAME(System_obj::_hx___applicationDirectory,"__applicationDirectory");
	HX_MARK_MEMBER_NAME(System_obj::_hx___applicationEntryPoint,"__applicationEntryPoint");
	HX_MARK_MEMBER_NAME(System_obj::_hx___applicationStorageDirectory,"__applicationStorageDirectory");
	HX_MARK_MEMBER_NAME(System_obj::_hx___desktopDirectory,"__desktopDirectory");
	HX_MARK_MEMBER_NAME(System_obj::_hx___deviceModel,"__deviceModel");
	HX_MARK_MEMBER_NAME(System_obj::_hx___deviceVendor,"__deviceVendor");
	HX_MARK_MEMBER_NAME(System_obj::_hx___directories,"__directories");
	HX_MARK_MEMBER_NAME(System_obj::_hx___documentsDirectory,"__documentsDirectory");
	HX_MARK_MEMBER_NAME(System_obj::_hx___endianness,"__endianness");
	HX_MARK_MEMBER_NAME(System_obj::_hx___fontsDirectory,"__fontsDirectory");
	HX_MARK_MEMBER_NAME(System_obj::_hx___platformLabel,"__platformLabel");
	HX_MARK_MEMBER_NAME(System_obj::_hx___platformName,"__platformName");
	HX_MARK_MEMBER_NAME(System_obj::_hx___platformVersion,"__platformVersion");
	HX_MARK_MEMBER_NAME(System_obj::_hx___userDirectory,"__userDirectory");
};

#ifdef HXCPP_VISIT_ALLOCS
static void System_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(System_obj::disableCFFI,"disableCFFI");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___applicationDirectory,"__applicationDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___applicationEntryPoint,"__applicationEntryPoint");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___applicationStorageDirectory,"__applicationStorageDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___desktopDirectory,"__desktopDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___deviceModel,"__deviceModel");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___deviceVendor,"__deviceVendor");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___directories,"__directories");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___documentsDirectory,"__documentsDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___endianness,"__endianness");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___fontsDirectory,"__fontsDirectory");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___platformLabel,"__platformLabel");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___platformName,"__platformName");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___platformVersion,"__platformVersion");
	HX_VISIT_MEMBER_NAME(System_obj::_hx___userDirectory,"__userDirectory");
};

#endif

::hx::Class System_obj::__mClass;

static ::String System_obj_sStaticFields[] = {
	HX_("disableCFFI",8e,24,b6,11),
	HX_("__applicationDirectory",1d,e0,19,ed),
	HX_("__applicationEntryPoint",ce,da,ed,08),
	HX_("__applicationStorageDirectory",02,dc,05,f4),
	HX_("__desktopDirectory",11,04,d2,1a),
	HX_("__deviceModel",13,98,10,44),
	HX_("__deviceVendor",de,4d,44,28),
	HX_("__directories",eb,9c,a4,a9),
	HX_("__documentsDirectory",75,45,e8,15),
	HX_("__endianness",d2,7d,66,87),
	HX_("__fontsDirectory",29,8d,5a,bc),
	HX_("__platformLabel",21,5b,11,b4),
	HX_("__platformName",be,a9,0d,11),
	HX_("__platformVersion",85,99,63,58),
	HX_("__userDirectory",82,57,ab,1c),
	HX_("exit",1e,f7,1d,43),
	HX_("getDisplay",4c,b0,ab,0a),
	HX_("getTimer",4f,cf,0c,70),
	HX_("load",26,9a,b7,47),
	HX_("openFile",66,ab,f7,e4),
	HX_("openURL",c5,bd,35,40),
	HX_("__copyMissingFields",6a,22,dd,a7),
	HX_("__getDirectory",17,12,5c,40),
	HX_("__parseArguments",c3,fb,f7,66),
	HX_("__parseBool",dd,1e,ee,f6),
	HX_("__registerEntryPoint",e1,0d,46,fe),
	HX_("__runProcess",84,ad,5a,94),
	HX_("get_allowScreenTimeout",95,cf,5c,6e),
	HX_("set_allowScreenTimeout",09,4c,08,a2),
	HX_("get_applicationDirectory",86,5a,0d,68),
	HX_("get_applicationStorageDirectory",b9,70,86,8d),
	HX_("get_deviceModel",ca,0e,7a,bc),
	HX_("get_deviceVendor",47,b7,22,0c),
	HX_("get_desktopDirectory",fa,d5,ab,cd),
	HX_("get_documentsDirectory",9e,23,49,90),
	HX_("get_endianness",fb,8a,c8,c4),
	HX_("get_fontsDirectory",d2,e2,b4,23),
	HX_("get_numDisplays",ee,d7,92,d2),
	HX_("get_platformLabel",98,2d,cf,32),
	HX_("get_platformName",27,13,ec,f4),
	HX_("get_platformVersion",bc,37,14,60),
	HX_("get_userDirectory",f9,29,69,9b),
	::String(null())
};

void System_obj::__register()
{
	System_obj _hx_dummy;
	System_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.system.System",95,83,bd,ac);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &System_obj::__GetStatic;
	__mClass->mSetStaticField = &System_obj::__SetStatic;
	__mClass->mMarkFunc = System_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(System_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< System_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = System_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = System_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = System_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void System_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_f2b41f959dca9627_68_boot)
HXDLIN(  68)		_hx___directories =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace lime
} // end namespace system
