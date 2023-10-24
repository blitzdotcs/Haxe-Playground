#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_openfl_display__internal_SamplerState
#include <openfl/display/_internal/SamplerState.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal_AGALConverter
#include <openfl/display3D/_internal/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_ProgramType
#include <openfl/display3D/_internal/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl_display3D__internal__AGALConverter_SamplerRegister
#include <openfl/display3D/_internal/_AGALConverter/SamplerRegister.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a874bbe07b70b430_862_new,"openfl.display3D._internal._AGALConverter.SamplerRegister","new",0xc3c1dbca,"openfl.display3D._internal._AGALConverter.SamplerRegister.new","openfl/display3D/_internal/AGALConverter.hx",862,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_a874bbe07b70b430_881_toGLSL,"openfl.display3D._internal._AGALConverter.SamplerRegister","toGLSL",0x9ac3cbcf,"openfl.display3D._internal._AGALConverter.SamplerRegister.toGLSL","openfl/display3D/_internal/AGALConverter.hx",881,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_a874bbe07b70b430_887_toSamplerState,"openfl.display3D._internal._AGALConverter.SamplerRegister","toSamplerState",0xa31d9ada,"openfl.display3D._internal._AGALConverter.SamplerRegister.toSamplerState","openfl/display3D/_internal/AGALConverter.hx",887,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_a874bbe07b70b430_865_parse,"openfl.display3D._internal._AGALConverter.SamplerRegister","parse",0xc0ecca1d,"openfl.display3D._internal._AGALConverter.SamplerRegister.parse","openfl/display3D/_internal/AGALConverter.hx",865,0x4de1651d)
HX_LOCAL_STACK_FRAME(_hx_pos_a874bbe07b70b430_849_boot,"openfl.display3D._internal._AGALConverter.SamplerRegister","boot",0x7df77588,"openfl.display3D._internal._AGALConverter.SamplerRegister.boot","openfl/display3D/_internal/AGALConverter.hx",849,0x4de1651d)
namespace openfl{
namespace display3D{
namespace _internal{
namespace _AGALConverter{

void SamplerRegister_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_a874bbe07b70b430_862_new)
            	}

Dynamic SamplerRegister_obj::__CreateEmpty() { return new SamplerRegister_obj; }

void *SamplerRegister_obj::_hx_vtable = 0;

Dynamic SamplerRegister_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< SamplerRegister_obj > _hx_result = new SamplerRegister_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SamplerRegister_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x37f8e5a2;
}

::String SamplerRegister_obj::toGLSL(){
            	HX_STACKFRAME(&_hx_pos_a874bbe07b70b430_881_toGLSL)
HXLINE( 882)		::String str = ::openfl::display3D::_internal::AGALConverter_obj::prefixFromType(this->type,this->programType);
HXDLIN( 882)		::String str1 = (str + this->n);
HXLINE( 883)		return str1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SamplerRegister_obj,toGLSL,return )

 ::openfl::display::_internal::SamplerState SamplerRegister_obj::toSamplerState(){
            	HX_GC_STACKFRAME(&_hx_pos_a874bbe07b70b430_887_toSamplerState)
HXLINE( 888)		 ::Dynamic wrap;
HXLINE( 889)		 ::Dynamic filter;
HXLINE( 890)		 ::Dynamic mipfilter;
HXLINE( 895)		switch((int)(this->f)){
            			case (int)0: {
HXLINE( 898)				filter = 5;
            			}
            			break;
            			case (int)1: {
HXLINE( 900)				filter = 4;
            			}
            			break;
            			default:{
HXLINE( 902)				HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,null()));
            			}
            		}
HXLINE( 906)		switch((int)(this->m)){
            			case (int)0: {
HXLINE( 910)				mipfilter = 2;
            			}
            			break;
            			case (int)1: {
HXLINE( 913)				mipfilter = 1;
            			}
            			break;
            			case (int)2: {
HXLINE( 916)				mipfilter = 0;
            			}
            			break;
            			default:{
HXLINE( 918)				HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,null()));
            			}
            		}
HXLINE( 924)		switch((int)(this->w)){
            			case (int)0: {
HXLINE( 927)				wrap = 0;
            			}
            			break;
            			case (int)1: {
HXLINE( 929)				wrap = 2;
            			}
            			break;
            			default:{
HXLINE( 931)				HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,null()));
            			}
            		}
HXLINE( 934)		bool ignoreSampler = ((this->s & 4) == 4);
HXLINE( 935)		bool centroid = ((this->s & 1) == 1);
HXLINE( 936)		bool textureAlpha = (this->t == 2);
HXLINE( 939)		Float lodBias = (( (Float)(((this->b << 24) >> 24)) ) / ((Float)8.0));
HXLINE( 941)		return  ::openfl::display::_internal::SamplerState_obj::__alloc( HX_CTX ,wrap,filter,mipfilter,lodBias,ignoreSampler,centroid,textureAlpha);
            	}


HX_DEFINE_DYNAMIC_FUNC0(SamplerRegister_obj,toSamplerState,return )

 ::openfl::display3D::_internal::_AGALConverter::SamplerRegister SamplerRegister_obj::parse( cpp::Int64Struct v, ::openfl::display3D::_internal::_AGALConverter::ProgramType programType){
            	HX_GC_STACKFRAME(&_hx_pos_a874bbe07b70b430_865_parse)
HXLINE( 866)		 ::openfl::display3D::_internal::_AGALConverter::SamplerRegister sr =  ::openfl::display3D::_internal::_AGALConverter::SamplerRegister_obj::__alloc( HX_CTX );
HXLINE( 867)		sr->programType = programType;
HXLINE( 868)		 cpp::Int64Struct a = _hx_int64_shr(v,60);
HXDLIN( 868)		sr->f = _hx_int64_low(_hx_int64_and(a,( ::cpp::Int64Struct(15))));
HXLINE( 869)		 cpp::Int64Struct a1 = _hx_int64_shr(v,56);
HXDLIN( 869)		sr->m = _hx_int64_low(_hx_int64_and(a1,( ::cpp::Int64Struct(15))));
HXLINE( 870)		 cpp::Int64Struct a2 = _hx_int64_shr(v,52);
HXDLIN( 870)		sr->w = _hx_int64_low(_hx_int64_and(a2,( ::cpp::Int64Struct(15))));
HXLINE( 871)		 cpp::Int64Struct a3 = _hx_int64_shr(v,48);
HXDLIN( 871)		sr->s = _hx_int64_low(_hx_int64_and(a3,( ::cpp::Int64Struct(15))));
HXLINE( 872)		 cpp::Int64Struct a4 = _hx_int64_shr(v,44);
HXDLIN( 872)		sr->d = _hx_int64_low(_hx_int64_and(a4,( ::cpp::Int64Struct(15))));
HXLINE( 873)		 cpp::Int64Struct a5 = _hx_int64_shr(v,40);
HXDLIN( 873)		sr->t = _hx_int64_low(_hx_int64_and(a5,( ::cpp::Int64Struct(15))));
HXLINE( 874)		 cpp::Int64Struct a6 = _hx_int64_shr(v,32);
HXDLIN( 874)		sr->type = _hx_int64_low(_hx_int64_and(a6,( ::cpp::Int64Struct(15))));
HXLINE( 875)		 cpp::Int64Struct a7 = _hx_int64_shr(v,16);
HXDLIN( 875)		sr->b = _hx_int64_low(_hx_int64_and(a7,( ::cpp::Int64Struct(255))));
HXLINE( 876)		sr->n = _hx_int64_low(_hx_int64_and(v,( ::cpp::Int64Struct(65535))));
HXLINE( 877)		return sr;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SamplerRegister_obj,parse,return )


::hx::ObjectPtr< SamplerRegister_obj > SamplerRegister_obj::__new() {
	::hx::ObjectPtr< SamplerRegister_obj > __this = new SamplerRegister_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< SamplerRegister_obj > SamplerRegister_obj::__alloc(::hx::Ctx *_hx_ctx) {
	SamplerRegister_obj *__this = (SamplerRegister_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(SamplerRegister_obj), true, "openfl.display3D._internal._AGALConverter.SamplerRegister"));
	*(void **)__this = SamplerRegister_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SamplerRegister_obj::SamplerRegister_obj()
{
}

void SamplerRegister_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SamplerRegister);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_MEMBER_NAME(programType,"programType");
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(t,"t");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_END_CLASS();
}

void SamplerRegister_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(f,"f");
	HX_VISIT_MEMBER_NAME(m,"m");
	HX_VISIT_MEMBER_NAME(n,"n");
	HX_VISIT_MEMBER_NAME(programType,"programType");
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(t,"t");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(w,"w");
}

::hx::Val SamplerRegister_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return ::hx::Val( b ); }
		if (HX_FIELD_EQ(inName,"d") ) { return ::hx::Val( d ); }
		if (HX_FIELD_EQ(inName,"f") ) { return ::hx::Val( f ); }
		if (HX_FIELD_EQ(inName,"m") ) { return ::hx::Val( m ); }
		if (HX_FIELD_EQ(inName,"n") ) { return ::hx::Val( n ); }
		if (HX_FIELD_EQ(inName,"s") ) { return ::hx::Val( s ); }
		if (HX_FIELD_EQ(inName,"t") ) { return ::hx::Val( t ); }
		if (HX_FIELD_EQ(inName,"w") ) { return ::hx::Val( w ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toGLSL") ) { return ::hx::Val( toGLSL_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { return ::hx::Val( programType ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"toSamplerState") ) { return ::hx::Val( toSamplerState_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SamplerRegister_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
	}
	return false;
}

::hx::Val SamplerRegister_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { programType=inValue.Cast<  ::openfl::display3D::_internal::_AGALConverter::ProgramType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SamplerRegister_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("b",62,00,00,00));
	outFields->push(HX_("d",64,00,00,00));
	outFields->push(HX_("f",66,00,00,00));
	outFields->push(HX_("m",6d,00,00,00));
	outFields->push(HX_("n",6e,00,00,00));
	outFields->push(HX_("programType",5e,fb,2c,c4));
	outFields->push(HX_("s",73,00,00,00));
	outFields->push(HX_("t",74,00,00,00));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("w",77,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo SamplerRegister_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(SamplerRegister_obj,b),HX_("b",62,00,00,00)},
	{::hx::fsInt,(int)offsetof(SamplerRegister_obj,d),HX_("d",64,00,00,00)},
	{::hx::fsInt,(int)offsetof(SamplerRegister_obj,f),HX_("f",66,00,00,00)},
	{::hx::fsInt,(int)offsetof(SamplerRegister_obj,m),HX_("m",6d,00,00,00)},
	{::hx::fsInt,(int)offsetof(SamplerRegister_obj,n),HX_("n",6e,00,00,00)},
	{::hx::fsObject /*  ::openfl::display3D::_internal::_AGALConverter::ProgramType */ ,(int)offsetof(SamplerRegister_obj,programType),HX_("programType",5e,fb,2c,c4)},
	{::hx::fsInt,(int)offsetof(SamplerRegister_obj,s),HX_("s",73,00,00,00)},
	{::hx::fsInt,(int)offsetof(SamplerRegister_obj,t),HX_("t",74,00,00,00)},
	{::hx::fsInt,(int)offsetof(SamplerRegister_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsInt,(int)offsetof(SamplerRegister_obj,w),HX_("w",77,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *SamplerRegister_obj_sStaticStorageInfo = 0;
#endif

static ::String SamplerRegister_obj_sMemberFields[] = {
	HX_("b",62,00,00,00),
	HX_("d",64,00,00,00),
	HX_("f",66,00,00,00),
	HX_("m",6d,00,00,00),
	HX_("n",6e,00,00,00),
	HX_("programType",5e,fb,2c,c4),
	HX_("s",73,00,00,00),
	HX_("t",74,00,00,00),
	HX_("type",ba,f2,08,4d),
	HX_("w",77,00,00,00),
	HX_("toGLSL",f9,58,08,7a),
	HX_("toSamplerState",04,62,d2,f8),
	::String(null()) };

::hx::Class SamplerRegister_obj::__mClass;

static ::String SamplerRegister_obj_sStaticFields[] = {
	HX_("parse",33,90,55,bd),
	::String(null())
};

void SamplerRegister_obj::__register()
{
	SamplerRegister_obj _hx_dummy;
	SamplerRegister_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display3D._internal._AGALConverter.SamplerRegister",d8,ee,e9,3f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SamplerRegister_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(SamplerRegister_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(SamplerRegister_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< SamplerRegister_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SamplerRegister_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SamplerRegister_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void SamplerRegister_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_a874bbe07b70b430_849_boot)
HXDLIN( 849)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _internal
} // end namespace _AGALConverter
