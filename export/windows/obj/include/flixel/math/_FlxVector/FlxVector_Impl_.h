#ifndef INCLUDED_flixel_math__FlxVector_FlxVector_Impl_
#define INCLUDED_flixel_math__FlxVector_FlxVector_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS3(flixel,math,_FlxVector,FlxVector_Impl_)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPool)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)

namespace flixel{
namespace math{
namespace _FlxVector{


class HXCPP_CLASS_ATTRIBUTES FlxVector_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxVector_Impl__obj OBJ_;
		FlxVector_Impl__obj();

	public:
		enum { _hx_ClassId = 0x4188c73b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.math._FlxVector.FlxVector_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.math._FlxVector.FlxVector_Impl_"); }

		inline static ::hx::ObjectPtr< FlxVector_Impl__obj > __new() {
			::hx::ObjectPtr< FlxVector_Impl__obj > __this = new FlxVector_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxVector_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			FlxVector_Impl__obj *__this = (FlxVector_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxVector_Impl__obj), false, "flixel.math._FlxVector.FlxVector_Impl_"));
			*(void **)__this = FlxVector_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxVector_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxVector_Impl_",15,5d,5e,0e); }

		static void __boot();
		static Float EPSILON;
		static Float EPSILON_SQUARED;
		static  ::flixel::math::FlxPoint _vector1;
		static  ::flixel::math::FlxPoint _vector2;
		static  ::flixel::math::FlxPoint _vector3;
		static  ::flixel::math::FlxPoint get(::hx::Null< Float >  x,::hx::Null< Float >  y);
		static ::Dynamic get_dyn();

		static  ::flixel::math::FlxPoint weak(::hx::Null< Float >  x,::hx::Null< Float >  y);
		static ::Dynamic weak_dyn();

		static  ::flixel::math::FlxPoint _new(::hx::Null< Float >  x,::hx::Null< Float >  y);
		static ::Dynamic _new_dyn();

		static  ::flixel::math::FlxPoint set( ::flixel::math::FlxPoint this1,::hx::Null< Float >  x,::hx::Null< Float >  y);
		static ::Dynamic set_dyn();

		static  ::flixel::math::FlxPoint add( ::flixel::math::FlxPoint this1,::hx::Null< Float >  x,::hx::Null< Float >  y);
		static ::Dynamic add_dyn();

		static  ::flixel::math::FlxPoint addPoint( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint point);
		static ::Dynamic addPoint_dyn();

		static  ::flixel::math::FlxPoint subtract( ::flixel::math::FlxPoint this1,::hx::Null< Float >  x,::hx::Null< Float >  y);
		static ::Dynamic subtract_dyn();

		static  ::flixel::math::FlxPoint subtractPoint( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint point);
		static ::Dynamic subtractPoint_dyn();

		static  ::flixel::math::FlxPoint scale( ::flixel::math::FlxPoint this1,Float k);
		static ::Dynamic scale_dyn();

		static  ::flixel::math::FlxPoint scaleNew( ::flixel::math::FlxPoint this1,Float k);
		static ::Dynamic scaleNew_dyn();

		static  ::flixel::math::FlxPoint addNew( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v);
		static ::Dynamic addNew_dyn();

		static  ::flixel::math::FlxPoint subtractNew( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v);
		static ::Dynamic subtractNew_dyn();

		static  ::flixel::math::FlxPoint copyFrom( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint point);
		static ::Dynamic copyFrom_dyn();

		static  ::flixel::math::FlxPoint copyFromFlash( ::flixel::math::FlxPoint this1, ::openfl::geom::Point flashPoint);
		static ::Dynamic copyFromFlash_dyn();

		static  ::flixel::math::FlxPoint floor( ::flixel::math::FlxPoint this1);
		static ::Dynamic floor_dyn();

		static  ::flixel::math::FlxPoint ceil( ::flixel::math::FlxPoint this1);
		static ::Dynamic ceil_dyn();

		static  ::flixel::math::FlxPoint round( ::flixel::math::FlxPoint this1);
		static ::Dynamic round_dyn();

		static  ::flixel::math::FlxPoint rotate( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint pivot,Float angle);
		static ::Dynamic rotate_dyn();

		static  ::flixel::math::FlxPoint transform( ::flixel::math::FlxPoint this1, ::openfl::geom::Matrix matrix);
		static ::Dynamic transform_dyn();

		static Float dotProduct( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v);
		static ::Dynamic dotProduct_dyn();

		static Float dotProductWeak( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v);
		static ::Dynamic dotProductWeak_dyn();

		static Float dotProdWithNormalizing( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v);
		static ::Dynamic dotProdWithNormalizing_dyn();

		static bool isPerpendicular( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v);
		static ::Dynamic isPerpendicular_dyn();

		static Float crossProductLength( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v);
		static ::Dynamic crossProductLength_dyn();

		static Float crossProductLengthWeak( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v);
		static ::Dynamic crossProductLengthWeak_dyn();

		static bool isParallel( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v);
		static ::Dynamic isParallel_dyn();

		static bool isParallelWeak( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v);
		static ::Dynamic isParallelWeak_dyn();

		static bool isZero( ::flixel::math::FlxPoint this1);
		static ::Dynamic isZero_dyn();

		static  ::flixel::math::FlxPoint zero( ::flixel::math::FlxPoint this1);
		static ::Dynamic zero_dyn();

		static  ::flixel::math::FlxPoint normalize( ::flixel::math::FlxPoint this1);
		static ::Dynamic normalize_dyn();

		static bool isNormalized( ::flixel::math::FlxPoint this1);
		static ::Dynamic isNormalized_dyn();

		static  ::flixel::math::FlxPoint rotateByRadians( ::flixel::math::FlxPoint this1,Float rads);
		static ::Dynamic rotateByRadians_dyn();

		static  ::flixel::math::FlxPoint rotateByDegrees( ::flixel::math::FlxPoint this1,Float degs);
		static ::Dynamic rotateByDegrees_dyn();

		static  ::flixel::math::FlxPoint rotateWithTrig( ::flixel::math::FlxPoint this1,Float sin,Float cos);
		static ::Dynamic rotateWithTrig_dyn();

		static  ::flixel::math::FlxPoint setPolarRadians( ::flixel::math::FlxPoint this1,Float length,Float radians);
		static ::Dynamic setPolarRadians_dyn();

		static  ::flixel::math::FlxPoint setPolarDegrees( ::flixel::math::FlxPoint this1,Float length,Float degrees);
		static ::Dynamic setPolarDegrees_dyn();

		static  ::flixel::math::FlxPoint rightNormal( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint vec);
		static ::Dynamic rightNormal_dyn();

		static  ::flixel::math::FlxPoint leftNormal( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint vec);
		static ::Dynamic leftNormal_dyn();

		static  ::flixel::math::FlxPoint negate( ::flixel::math::FlxPoint this1);
		static ::Dynamic negate_dyn();

		static  ::flixel::math::FlxPoint negateNew( ::flixel::math::FlxPoint this1);
		static ::Dynamic negateNew_dyn();

		static  ::flixel::math::FlxPoint projectTo( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v, ::flixel::math::FlxPoint proj);
		static ::Dynamic projectTo_dyn();

		static  ::flixel::math::FlxPoint projectToNormalized( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v, ::flixel::math::FlxPoint proj);
		static ::Dynamic projectToNormalized_dyn();

		static  ::flixel::math::FlxPoint projectToNormalizedWeak( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v, ::flixel::math::FlxPoint proj);
		static ::Dynamic projectToNormalizedWeak_dyn();

		static Float perpProduct( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v);
		static ::Dynamic perpProduct_dyn();

		static Float perpProductWeak( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v);
		static ::Dynamic perpProductWeak_dyn();

		static Float ratio( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint a, ::flixel::math::FlxPoint b, ::flixel::math::FlxPoint v);
		static ::Dynamic ratio_dyn();

		static Float ratioWeak( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint a, ::flixel::math::FlxPoint b, ::flixel::math::FlxPoint v);
		static ::Dynamic ratioWeak_dyn();

		static  ::flixel::math::FlxPoint findIntersection( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint a, ::flixel::math::FlxPoint b, ::flixel::math::FlxPoint v, ::flixel::math::FlxPoint intersection);
		static ::Dynamic findIntersection_dyn();

		static  ::flixel::math::FlxPoint findIntersectionInBounds( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint a, ::flixel::math::FlxPoint b, ::flixel::math::FlxPoint v, ::flixel::math::FlxPoint intersection);
		static ::Dynamic findIntersectionInBounds_dyn();

		static  ::flixel::math::FlxPoint truncate( ::flixel::math::FlxPoint this1,Float max);
		static ::Dynamic truncate_dyn();

		static Float radiansBetween( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v);
		static ::Dynamic radiansBetween_dyn();

		static Float degreesBetween( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v);
		static ::Dynamic degreesBetween_dyn();

		static int sign( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint a, ::flixel::math::FlxPoint b);
		static ::Dynamic sign_dyn();

		static Float dist( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v);
		static ::Dynamic dist_dyn();

		static Float distSquared( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint v);
		static ::Dynamic distSquared_dyn();

		static  ::flixel::math::FlxPoint bounce( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint normal,::hx::Null< Float >  bounceCoeff);
		static ::Dynamic bounce_dyn();

		static  ::flixel::math::FlxPoint bounceWithFriction( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint normal,::hx::Null< Float >  bounceCoeff,::hx::Null< Float >  friction);
		static ::Dynamic bounceWithFriction_dyn();

		static bool isValid( ::flixel::math::FlxPoint this1);
		static ::Dynamic isValid_dyn();

		static  ::flixel::math::FlxPoint clone( ::flixel::math::FlxPoint this1, ::flixel::math::FlxPoint vec);
		static ::Dynamic clone_dyn();

		static Float get_x( ::flixel::math::FlxPoint this1);
		static ::Dynamic get_x_dyn();

		static Float set_x( ::flixel::math::FlxPoint this1,Float x);
		static ::Dynamic set_x_dyn();

		static Float get_y( ::flixel::math::FlxPoint this1);
		static ::Dynamic get_y_dyn();

		static Float set_y( ::flixel::math::FlxPoint this1,Float y);
		static ::Dynamic set_y_dyn();

		static Float get_dx( ::flixel::math::FlxPoint this1);
		static ::Dynamic get_dx_dyn();

		static Float get_dy( ::flixel::math::FlxPoint this1);
		static ::Dynamic get_dy_dyn();

		static Float get_length( ::flixel::math::FlxPoint this1);
		static ::Dynamic get_length_dyn();

		static Float set_length( ::flixel::math::FlxPoint this1,Float l);
		static ::Dynamic set_length_dyn();

		static Float get_lengthSquared( ::flixel::math::FlxPoint this1);
		static ::Dynamic get_lengthSquared_dyn();

		static Float get_degrees( ::flixel::math::FlxPoint this1);
		static ::Dynamic get_degrees_dyn();

		static Float set_degrees( ::flixel::math::FlxPoint this1,Float degs);
		static ::Dynamic set_degrees_dyn();

		static Float get_radians( ::flixel::math::FlxPoint this1);
		static ::Dynamic get_radians_dyn();

		static Float set_radians( ::flixel::math::FlxPoint this1,Float rads);
		static ::Dynamic set_radians_dyn();

		static Float get_rx( ::flixel::math::FlxPoint this1);
		static ::Dynamic get_rx_dyn();

		static Float get_ry( ::flixel::math::FlxPoint this1);
		static ::Dynamic get_ry_dyn();

		static Float get_lx( ::flixel::math::FlxPoint this1);
		static ::Dynamic get_lx_dyn();

		static Float get_ly( ::flixel::math::FlxPoint this1);
		static ::Dynamic get_ly_dyn();

		static ::Dynamic get_pool();
		static ::Dynamic get_pool_dyn();

};

} // end namespace flixel
} // end namespace math
} // end namespace _FlxVector

#endif /* INCLUDED_flixel_math__FlxVector_FlxVector_Impl_ */ 