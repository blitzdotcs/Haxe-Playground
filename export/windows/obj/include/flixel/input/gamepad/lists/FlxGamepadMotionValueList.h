#ifndef INCLUDED_flixel_input_gamepad_lists_FlxGamepadMotionValueList
#define INCLUDED_flixel_input_gamepad_lists_FlxGamepadMotionValueList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS4(flixel,input,gamepad,lists,FlxGamepadMotionValueList)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace gamepad{
namespace lists{


class HXCPP_CLASS_ATTRIBUTES FlxGamepadMotionValueList_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxGamepadMotionValueList_obj OBJ_;
		FlxGamepadMotionValueList_obj();

	public:
		enum { _hx_ClassId = 0x0583b6a8 };

		void __construct( ::flixel::input::gamepad::FlxGamepad gamepad);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.lists.FlxGamepadMotionValueList")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.gamepad.lists.FlxGamepadMotionValueList"); }
		static ::hx::ObjectPtr< FlxGamepadMotionValueList_obj > __new( ::flixel::input::gamepad::FlxGamepad gamepad);
		static ::hx::ObjectPtr< FlxGamepadMotionValueList_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::input::gamepad::FlxGamepad gamepad);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxGamepadMotionValueList_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxGamepadMotionValueList",aa,39,1b,8f); }

		 ::flixel::input::gamepad::FlxGamepad gamepad;
		Float get_TILT_PITCH();
		::Dynamic get_TILT_PITCH_dyn();

		Float get_TILT_ROLL();
		::Dynamic get_TILT_ROLL_dyn();

		Float getAxis(int id);
		::Dynamic getAxis_dyn();

		bool get_isSupported();
		::Dynamic get_isSupported_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace lists

#endif /* INCLUDED_flixel_input_gamepad_lists_FlxGamepadMotionValueList */ 
