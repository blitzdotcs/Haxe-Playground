#ifndef INCLUDED_openfl_desktop__InvokeEventReason_InvokeEventReason_Impl_
#define INCLUDED_openfl_desktop__InvokeEventReason_InvokeEventReason_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,desktop,_InvokeEventReason,InvokeEventReason_Impl_)

namespace openfl{
namespace desktop{
namespace _InvokeEventReason{


class HXCPP_CLASS_ATTRIBUTES InvokeEventReason_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef InvokeEventReason_Impl__obj OBJ_;
		InvokeEventReason_Impl__obj();

	public:
		enum { _hx_ClassId = 0x6343b917 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.desktop._InvokeEventReason.InvokeEventReason_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.desktop._InvokeEventReason.InvokeEventReason_Impl_"); }

		inline static ::hx::ObjectPtr< InvokeEventReason_Impl__obj > __new() {
			::hx::ObjectPtr< InvokeEventReason_Impl__obj > __this = new InvokeEventReason_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< InvokeEventReason_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			InvokeEventReason_Impl__obj *__this = (InvokeEventReason_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InvokeEventReason_Impl__obj), false, "openfl.desktop._InvokeEventReason.InvokeEventReason_Impl_"));
			*(void **)__this = InvokeEventReason_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~InvokeEventReason_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("InvokeEventReason_Impl_",e6,93,e8,32); }

		static void __boot();
		static  ::Dynamic LOGIN;
		static  ::Dynamic NOTIFICATION;
		static  ::Dynamic OPEN_URL;
		static  ::Dynamic STANDARD;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString( ::Dynamic this1);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace desktop
} // end namespace _InvokeEventReason

#endif /* INCLUDED_openfl_desktop__InvokeEventReason_InvokeEventReason_Impl_ */ 
