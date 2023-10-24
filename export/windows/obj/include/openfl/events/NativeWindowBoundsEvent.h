#ifndef INCLUDED_openfl_events_NativeWindowBoundsEvent
#define INCLUDED_openfl_events_NativeWindowBoundsEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,NativeWindowBoundsEvent)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES NativeWindowBoundsEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef NativeWindowBoundsEvent_obj OBJ_;
		NativeWindowBoundsEvent_obj();

	public:
		enum { _hx_ClassId = 0x0d56a8b1 };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::geom::Rectangle beforeBounds, ::openfl::geom::Rectangle afterBounds);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.NativeWindowBoundsEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events.NativeWindowBoundsEvent"); }
		static ::hx::ObjectPtr< NativeWindowBoundsEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::geom::Rectangle beforeBounds, ::openfl::geom::Rectangle afterBounds);
		static ::hx::ObjectPtr< NativeWindowBoundsEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::geom::Rectangle beforeBounds, ::openfl::geom::Rectangle afterBounds);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~NativeWindowBoundsEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("NativeWindowBoundsEvent",9e,77,6f,f1); }

		static void __boot();
		static ::String MOVING;
		static ::String MOVE;
		static ::String RESIZING;
		static ::String RESIZE;
		 ::openfl::geom::Rectangle beforeBounds;
		 ::openfl::geom::Rectangle afterBounds;
		 ::openfl::events::Event clone();

		virtual ::String toString();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_NativeWindowBoundsEvent */ 
