#ifndef INCLUDED_lime__internal_graphics_BlurStack
#define INCLUDED_lime__internal_graphics_BlurStack

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_03d4cd0e01152a25_248_new)
HX_DECLARE_CLASS3(lime,_internal,graphics,BlurStack)

namespace lime{
namespace _internal{
namespace graphics{


class HXCPP_CLASS_ATTRIBUTES BlurStack_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BlurStack_obj OBJ_;
		BlurStack_obj();

	public:
		enum { _hx_ClassId = 0x336aa1d7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime._internal.graphics.BlurStack")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime._internal.graphics.BlurStack"); }

		inline static ::hx::ObjectPtr< BlurStack_obj > __new() {
			::hx::ObjectPtr< BlurStack_obj > __this = new BlurStack_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< BlurStack_obj > __alloc(::hx::Ctx *_hx_ctx) {
			BlurStack_obj *__this = (BlurStack_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BlurStack_obj), true, "lime._internal.graphics.BlurStack"));
			*(void **)__this = BlurStack_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_03d4cd0e01152a25_248_new)
HXLINE( 249)		( ( ::lime::_internal::graphics::BlurStack)(__this) )->r = 0;
HXLINE( 250)		( ( ::lime::_internal::graphics::BlurStack)(__this) )->g = 0;
HXLINE( 251)		( ( ::lime::_internal::graphics::BlurStack)(__this) )->b = 0;
HXLINE( 252)		( ( ::lime::_internal::graphics::BlurStack)(__this) )->a = 0;
HXLINE( 253)		( ( ::lime::_internal::graphics::BlurStack)(__this) )->n = null();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BlurStack_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BlurStack",01,77,bc,30); }

		int r;
		int g;
		int b;
		int a;
		 ::lime::_internal::graphics::BlurStack n;
};

} // end namespace lime
} // end namespace _internal
} // end namespace graphics

#endif /* INCLUDED_lime__internal_graphics_BlurStack */ 
