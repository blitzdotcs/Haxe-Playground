#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawBaseItem
#include <flixel/graphics/tile/FlxDrawBaseItem.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawItemType
#include <flixel/graphics/tile/FlxDrawItemType.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxDrawTrianglesItem
#include <flixel/graphics/tile/FlxDrawTrianglesItem.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a928be64e2bd594d_19_new,"flixel.graphics.tile.FlxDrawTrianglesItem","new",0x8669d929,"flixel.graphics.tile.FlxDrawTrianglesItem.new","flixel/graphics/tile/FlxDrawTrianglesItem.hx",19,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_42_render,"flixel.graphics.tile.FlxDrawTrianglesItem","render",0xbf64462d,"flixel.graphics.tile.FlxDrawTrianglesItem.render","flixel/graphics/tile/FlxDrawTrianglesItem.hx",42,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_69_reset,"flixel.graphics.tile.FlxDrawTrianglesItem","reset",0xa508d6d8,"flixel.graphics.tile.FlxDrawTrianglesItem.reset","flixel/graphics/tile/FlxDrawTrianglesItem.hx",69,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_82_dispose,"flixel.graphics.tile.FlxDrawTrianglesItem","dispose",0xf49121e8,"flixel.graphics.tile.FlxDrawTrianglesItem.dispose","flixel/graphics/tile/FlxDrawTrianglesItem.hx",82,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_94_addTriangles,"flixel.graphics.tile.FlxDrawTrianglesItem","addTriangles",0xd3f66861,"flixel.graphics.tile.FlxDrawTrianglesItem.addTriangles","flixel/graphics/tile/FlxDrawTrianglesItem.hx",94,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_197_addQuad,"flixel.graphics.tile.FlxDrawTrianglesItem","addQuad",0xc08c1cd1,"flixel.graphics.tile.FlxDrawTrianglesItem.addQuad","flixel/graphics/tile/FlxDrawTrianglesItem.hx",197,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_282_get_numVertices,"flixel.graphics.tile.FlxDrawTrianglesItem","get_numVertices",0x2e325a3f,"flixel.graphics.tile.FlxDrawTrianglesItem.get_numVertices","flixel/graphics/tile/FlxDrawTrianglesItem.hx",282,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_287_get_numTriangles,"flixel.graphics.tile.FlxDrawTrianglesItem","get_numTriangles",0x542b93a5,"flixel.graphics.tile.FlxDrawTrianglesItem.get_numTriangles","flixel/graphics/tile/FlxDrawTrianglesItem.hx",287,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_170_inflateBounds,"flixel.graphics.tile.FlxDrawTrianglesItem","inflateBounds",0x8ece7465,"flixel.graphics.tile.FlxDrawTrianglesItem.inflateBounds","flixel/graphics/tile/FlxDrawTrianglesItem.hx",170,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_21_boot,"flixel.graphics.tile.FlxDrawTrianglesItem","boot",0x0e4d2b49,"flixel.graphics.tile.FlxDrawTrianglesItem.boot","flixel/graphics/tile/FlxDrawTrianglesItem.hx",21,0x6492a666)
HX_LOCAL_STACK_FRAME(_hx_pos_a928be64e2bd594d_22_boot,"flixel.graphics.tile.FlxDrawTrianglesItem","boot",0x0e4d2b49,"flixel.graphics.tile.FlxDrawTrianglesItem.boot","flixel/graphics/tile/FlxDrawTrianglesItem.hx",22,0x6492a666)
namespace flixel{
namespace graphics{
namespace tile{

void FlxDrawTrianglesItem_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_a928be64e2bd594d_19_new)
HXLINE(  33)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(  33)		_this->x = ( (Float)(0) );
HXDLIN(  33)		_this->y = ( (Float)(0) );
HXDLIN(  33)		_this->width = ( (Float)(0) );
HXDLIN(  33)		_this->height = ( (Float)(0) );
HXDLIN(  33)		 ::flixel::math::FlxRect rect = _this;
HXDLIN(  33)		rect->_inPool = false;
HXDLIN(  33)		this->bounds = rect;
HXLINE(  31)		this->colorsPosition = 0;
HXLINE(  30)		this->indicesPosition = 0;
HXLINE(  29)		this->verticesPosition = 0;
HXLINE(  27)		int length = null();
HXDLIN(  27)		bool fixed = null();
HXDLIN(  27)		::Array< int > array = null();
HXDLIN(  27)		this->colors =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length,fixed,array);
HXLINE(  26)		int length1 = null();
HXDLIN(  26)		bool fixed1 = null();
HXDLIN(  26)		::Array< Float > array1 = null();
HXDLIN(  26)		this->uvtData =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length1,fixed1,array1,true);
HXLINE(  25)		int length2 = null();
HXDLIN(  25)		bool fixed2 = null();
HXDLIN(  25)		::Array< int > array2 = null();
HXDLIN(  25)		this->indices =  ::openfl::_Vector::IntVector_obj::__alloc( HX_CTX ,length2,fixed2,array2);
HXLINE(  24)		int length3 = null();
HXDLIN(  24)		bool fixed3 = null();
HXDLIN(  24)		::Array< Float > array3 = null();
HXDLIN(  24)		this->vertices =  ::openfl::_Vector::FloatVector_obj::__alloc( HX_CTX ,length3,fixed3,array3,true);
HXLINE(  37)		super::__construct();
HXLINE(  38)		this->type = ::flixel::graphics::tile::FlxDrawItemType_obj::TRIANGLES_dyn();
            	}

Dynamic FlxDrawTrianglesItem_obj::__CreateEmpty() { return new FlxDrawTrianglesItem_obj; }

void *FlxDrawTrianglesItem_obj::_hx_vtable = 0;

Dynamic FlxDrawTrianglesItem_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxDrawTrianglesItem_obj > _hx_result = new FlxDrawTrianglesItem_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlxDrawTrianglesItem_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x01f7e225) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x01f7e225;
	} else {
		return inClassId==(int)0x1a0ba75d;
	}
}

void FlxDrawTrianglesItem_obj::render( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_42_render)
HXLINE(  43)		if (!(::flixel::FlxG_obj::renderTile)) {
HXLINE(  44)			return;
            		}
HXLINE(  46)		if ((this->get_numTriangles() <= 0)) {
HXLINE(  47)			return;
            		}
HXLINE(  49)		bool _hx_tmp;
HXDLIN(  49)		if (!(camera->antialiasing)) {
HXLINE(  49)			_hx_tmp = this->antialiasing;
            		}
            		else {
HXLINE(  49)			_hx_tmp = true;
            		}
HXDLIN(  49)		camera->canvas->get_graphics()->beginBitmapFill(this->graphics->bitmap,null(),true,_hx_tmp);
HXLINE(  51)		camera->canvas->get_graphics()->drawTriangles(this->vertices,this->indices,this->uvtData,1);
HXLINE(  55)		camera->canvas->get_graphics()->endFill();
HXLINE(  65)		this->super::render(camera);
            	}


void FlxDrawTrianglesItem_obj::reset(){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_69_reset)
HXLINE(  70)		this->super::reset();
HXLINE(  71)		{
HXLINE(  71)			::Dynamic this1 = this->vertices;
HXDLIN(  71)			int deleteCount = this->vertices->get_length();
HXDLIN(  71)			::cpp::VirtualArray this2 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(  71)			this1->__SetField(HX_("__tempIndex",3e,e8,54,22),0,::hx::paccDynamic);
HXDLIN(  71)			{
HXLINE(  71)				int _g_current = 0;
HXDLIN(  71)				::cpp::VirtualArray _g_args = this2;
HXDLIN(  71)				while((_g_current < _g_args->get_length())){
HXLINE(  71)					_g_current = (_g_current + 1);
HXDLIN(  71)					 ::Dynamic item = _g_args->__get((_g_current - 1));
HXDLIN(  71)					( ( ::openfl::_Vector::FloatVector)(this1) )->insertAt(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( (Float)(item) ));
HXDLIN(  71)					::hx::FieldRef((this1).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            				}
            			}
HXDLIN(  71)			( ( ::openfl::_Vector::FloatVector)(this1) )->splice(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),deleteCount);
            		}
HXLINE(  72)		{
HXLINE(  72)			::Dynamic this3 = this->indices;
HXDLIN(  72)			int deleteCount1 = this->indices->get_length();
HXDLIN(  72)			::cpp::VirtualArray this4 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(  72)			this3->__SetField(HX_("__tempIndex",3e,e8,54,22),0,::hx::paccDynamic);
HXDLIN(  72)			{
HXLINE(  72)				int _g_current1 = 0;
HXDLIN(  72)				::cpp::VirtualArray _g_args1 = this4;
HXDLIN(  72)				while((_g_current1 < _g_args1->get_length())){
HXLINE(  72)					_g_current1 = (_g_current1 + 1);
HXDLIN(  72)					 ::Dynamic item = _g_args1->__get((_g_current1 - 1));
HXDLIN(  72)					( ( ::openfl::_Vector::IntVector)(this3) )->insertAt(( (int)(this3->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( (int)(item) ));
HXDLIN(  72)					::hx::FieldRef((this3).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            				}
            			}
HXDLIN(  72)			( ( ::openfl::_Vector::IntVector)(this3) )->splice(( (int)(this3->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),deleteCount1);
            		}
HXLINE(  73)		{
HXLINE(  73)			::Dynamic this5 = this->uvtData;
HXDLIN(  73)			int deleteCount2 = this->uvtData->get_length();
HXDLIN(  73)			::cpp::VirtualArray this6 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(  73)			this5->__SetField(HX_("__tempIndex",3e,e8,54,22),0,::hx::paccDynamic);
HXDLIN(  73)			{
HXLINE(  73)				int _g_current2 = 0;
HXDLIN(  73)				::cpp::VirtualArray _g_args2 = this6;
HXDLIN(  73)				while((_g_current2 < _g_args2->get_length())){
HXLINE(  73)					_g_current2 = (_g_current2 + 1);
HXDLIN(  73)					 ::Dynamic item = _g_args2->__get((_g_current2 - 1));
HXDLIN(  73)					( ( ::openfl::_Vector::FloatVector)(this5) )->insertAt(( (int)(this5->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( (Float)(item) ));
HXDLIN(  73)					::hx::FieldRef((this5).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            				}
            			}
HXDLIN(  73)			( ( ::openfl::_Vector::FloatVector)(this5) )->splice(( (int)(this5->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),deleteCount2);
            		}
HXLINE(  74)		{
HXLINE(  74)			::Dynamic this7 = this->colors;
HXDLIN(  74)			int deleteCount3 = this->colors->get_length();
HXDLIN(  74)			::cpp::VirtualArray this8 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN(  74)			this7->__SetField(HX_("__tempIndex",3e,e8,54,22),0,::hx::paccDynamic);
HXDLIN(  74)			{
HXLINE(  74)				int _g_current3 = 0;
HXDLIN(  74)				::cpp::VirtualArray _g_args3 = this8;
HXDLIN(  74)				while((_g_current3 < _g_args3->get_length())){
HXLINE(  74)					_g_current3 = (_g_current3 + 1);
HXDLIN(  74)					 ::Dynamic item = _g_args3->__get((_g_current3 - 1));
HXDLIN(  74)					( ( ::openfl::_Vector::IntVector)(this7) )->insertAt(( (int)(this7->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( (int)(item) ));
HXDLIN(  74)					::hx::FieldRef((this7).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            				}
            			}
HXDLIN(  74)			( ( ::openfl::_Vector::IntVector)(this7) )->splice(( (int)(this7->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),deleteCount3);
            		}
HXLINE(  76)		this->verticesPosition = 0;
HXLINE(  77)		this->indicesPosition = 0;
HXLINE(  78)		this->colorsPosition = 0;
            	}


void FlxDrawTrianglesItem_obj::dispose(){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_82_dispose)
HXLINE(  83)		this->super::dispose();
HXLINE(  85)		this->vertices = null();
HXLINE(  86)		this->indices = null();
HXLINE(  87)		this->uvtData = null();
HXLINE(  88)		this->colors = null();
HXLINE(  89)		this->bounds = null();
            	}


void FlxDrawTrianglesItem_obj::addTriangles( ::openfl::_Vector::FloatVector vertices, ::openfl::_Vector::IntVector indices, ::openfl::_Vector::FloatVector uvtData, ::openfl::_Vector::IntVector colors, ::flixel::math::FlxPoint position, ::flixel::math::FlxRect cameraBounds){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_94_addTriangles)
HXLINE(  95)		if (::hx::IsNull( position )) {
HXLINE(  96)			position = ::flixel::graphics::tile::FlxDrawTrianglesItem_obj::point->set(null(),null());
            		}
HXLINE(  98)		if (::hx::IsNull( cameraBounds )) {
HXLINE(  99)			 ::flixel::math::FlxRect _this = ::flixel::graphics::tile::FlxDrawTrianglesItem_obj::rect;
HXDLIN(  99)			_this->x = ( (Float)(0) );
HXDLIN(  99)			_this->y = ( (Float)(0) );
HXDLIN(  99)			_this->width = ( (Float)(::flixel::FlxG_obj::width) );
HXDLIN(  99)			_this->height = ( (Float)(::flixel::FlxG_obj::height) );
HXDLIN(  99)			cameraBounds = _this;
            		}
HXLINE( 101)		int verticesLength = vertices->get_length();
HXLINE( 102)		int prevVerticesLength = this->vertices->get_length();
HXLINE( 103)		int numberOfVertices = ::Std_obj::_hx_int((( (Float)(verticesLength) ) / ( (Float)(2) )));
HXLINE( 104)		int prevIndicesLength = this->indices->get_length();
HXLINE( 105)		int prevUVTDataLength = this->uvtData->get_length();
HXLINE( 106)		int prevColorsLength = this->colors->get_length();
HXLINE( 107)		int prevNumberOfVertices = this->get_numVertices();
HXLINE( 109)		Float tempX;
HXDLIN( 109)		Float tempY;
HXLINE( 110)		int i = 0;
HXLINE( 111)		int currentVertexPosition = prevVerticesLength;
HXLINE( 113)		while((i < verticesLength)){
HXLINE( 115)			Float position1 = position->x;
HXDLIN( 115)			tempX = (position1 + vertices->get(i));
HXLINE( 116)			Float position2 = position->y;
HXDLIN( 116)			tempY = (position2 + vertices->get((i + 1)));
HXLINE( 118)			{
HXLINE( 118)				currentVertexPosition = (currentVertexPosition + 1);
HXDLIN( 118)				this->vertices->set((currentVertexPosition - 1),tempX);
            			}
HXLINE( 119)			{
HXLINE( 119)				currentVertexPosition = (currentVertexPosition + 1);
HXDLIN( 119)				this->vertices->set((currentVertexPosition - 1),tempY);
            			}
HXLINE( 121)			if ((i == 0)) {
HXLINE( 123)				 ::flixel::math::FlxRect _this = this->bounds;
HXDLIN( 123)				_this->x = tempX;
HXDLIN( 123)				_this->y = tempY;
HXDLIN( 123)				_this->width = ( (Float)(0) );
HXDLIN( 123)				_this->height = ( (Float)(0) );
            			}
            			else {
HXLINE( 127)				 ::flixel::math::FlxRect bounds = this->bounds;
HXDLIN( 127)				if ((tempX < bounds->x)) {
HXLINE( 127)					 ::flixel::math::FlxRect bounds1 = bounds;
HXDLIN( 127)					bounds1->width = (bounds1->width + (bounds->x - tempX));
HXDLIN( 127)					bounds->x = tempX;
            				}
HXDLIN( 127)				if ((tempY < bounds->y)) {
HXLINE( 127)					 ::flixel::math::FlxRect bounds1 = bounds;
HXDLIN( 127)					bounds1->height = (bounds1->height + (bounds->y - tempY));
HXDLIN( 127)					bounds->y = tempY;
            				}
HXDLIN( 127)				if ((tempX > (bounds->x + bounds->width))) {
HXLINE( 127)					bounds->width = (tempX - bounds->x);
            				}
HXDLIN( 127)				if ((tempY > (bounds->y + bounds->height))) {
HXLINE( 127)					bounds->height = (tempY - bounds->y);
            				}
            			}
HXLINE( 130)			i = (i + 2);
            		}
HXLINE( 133)		 ::flixel::math::FlxRect Rect = this->bounds;
HXDLIN( 133)		bool result;
HXDLIN( 133)		bool result1;
HXDLIN( 133)		bool result2;
HXDLIN( 133)		if (((Rect->x + Rect->width) > cameraBounds->x)) {
HXLINE( 133)			result2 = (Rect->x < (cameraBounds->x + cameraBounds->width));
            		}
            		else {
HXLINE( 133)			result2 = false;
            		}
HXDLIN( 133)		if (result2) {
HXLINE( 133)			result1 = ((Rect->y + Rect->height) > cameraBounds->y);
            		}
            		else {
HXLINE( 133)			result1 = false;
            		}
HXDLIN( 133)		if (result1) {
HXLINE( 133)			result = (Rect->y < (cameraBounds->y + cameraBounds->height));
            		}
            		else {
HXLINE( 133)			result = false;
            		}
HXDLIN( 133)		if (Rect->_weak) {
HXLINE( 133)			if (!(Rect->_inPool)) {
HXLINE( 133)				Rect->_inPool = true;
HXDLIN( 133)				Rect->_weak = false;
HXDLIN( 133)				::flixel::math::FlxRect_obj::_pool->putUnsafe(Rect);
            			}
            		}
HXDLIN( 133)		if (!(result)) {
HXLINE( 135)			::Dynamic this1 = this->vertices;
HXDLIN( 135)			::cpp::VirtualArray this2 = ::cpp::VirtualArray_obj::__new(0);
HXDLIN( 135)			this1->__SetField(HX_("__tempIndex",3e,e8,54,22),(this->vertices->get_length() - verticesLength),::hx::paccDynamic);
HXDLIN( 135)			{
HXLINE( 135)				int _g_current = 0;
HXDLIN( 135)				::cpp::VirtualArray _g_args = this2;
HXDLIN( 135)				while((_g_current < _g_args->get_length())){
HXLINE( 135)					_g_current = (_g_current + 1);
HXDLIN( 135)					 ::Dynamic item = _g_args->__get((_g_current - 1));
HXDLIN( 135)					( ( ::openfl::_Vector::FloatVector)(this1) )->insertAt(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),( (Float)(item) ));
HXDLIN( 135)					::hx::FieldRef((this1).mPtr,HX_("__tempIndex",3e,e8,54,22))++;
            				}
            			}
HXDLIN( 135)			( ( ::openfl::_Vector::FloatVector)(this1) )->splice(( (int)(this1->__Field(HX_("__tempIndex",3e,e8,54,22),::hx::paccDynamic)) ),verticesLength);
            		}
            		else {
HXLINE( 139)			int uvtDataLength = uvtData->get_length();
HXLINE( 140)			{
HXLINE( 140)				int _g = 0;
HXDLIN( 140)				int _g1 = uvtDataLength;
HXDLIN( 140)				while((_g < _g1)){
HXLINE( 140)					_g = (_g + 1);
HXDLIN( 140)					int i = (_g - 1);
HXLINE( 142)					{
HXLINE( 142)						::Dynamic this1 = this->uvtData;
HXDLIN( 142)						( ( ::openfl::_Vector::FloatVector)(this1) )->set((prevUVTDataLength + i),uvtData->get(i));
            					}
            				}
            			}
HXLINE( 145)			int indicesLength = indices->get_length();
HXLINE( 146)			{
HXLINE( 146)				int _g2 = 0;
HXDLIN( 146)				int _g3 = indicesLength;
HXDLIN( 146)				while((_g2 < _g3)){
HXLINE( 146)					_g2 = (_g2 + 1);
HXDLIN( 146)					int i = (_g2 - 1);
HXLINE( 148)					{
HXLINE( 148)						::Dynamic this1 = this->indices;
HXDLIN( 148)						( ( ::openfl::_Vector::IntVector)(this1) )->set((prevIndicesLength + i),(indices->get(i) + prevNumberOfVertices));
            					}
            				}
            			}
HXLINE( 151)			if (this->colored) {
HXLINE( 153)				{
HXLINE( 153)					int _g = 0;
HXDLIN( 153)					int _g1 = numberOfVertices;
HXDLIN( 153)					while((_g < _g1)){
HXLINE( 153)						_g = (_g + 1);
HXDLIN( 153)						int i = (_g - 1);
HXLINE( 155)						{
HXLINE( 155)							::Dynamic this1 = this->colors;
HXDLIN( 155)							( ( ::openfl::_Vector::IntVector)(this1) )->set((prevColorsLength + i),colors->get(i));
            						}
            					}
            				}
HXLINE( 158)				 ::flixel::graphics::tile::FlxDrawTrianglesItem _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 158)				_hx_tmp->colorsPosition = (_hx_tmp->colorsPosition + numberOfVertices);
            			}
HXLINE( 161)			 ::flixel::graphics::tile::FlxDrawTrianglesItem _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 161)			_hx_tmp->verticesPosition = (_hx_tmp->verticesPosition + verticesLength);
HXLINE( 162)			 ::flixel::graphics::tile::FlxDrawTrianglesItem _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 162)			_hx_tmp1->indicesPosition = (_hx_tmp1->indicesPosition + indicesLength);
            		}
HXLINE( 165)		if (position->_weak) {
HXLINE( 165)			position->put();
            		}
HXLINE( 166)		if (cameraBounds->_weak) {
HXLINE( 166)			if (!(cameraBounds->_inPool)) {
HXLINE( 166)				cameraBounds->_inPool = true;
HXDLIN( 166)				cameraBounds->_weak = false;
HXDLIN( 166)				::flixel::math::FlxRect_obj::_pool->putUnsafe(cameraBounds);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlxDrawTrianglesItem_obj,addTriangles,(void))

void FlxDrawTrianglesItem_obj::addQuad( ::flixel::graphics::frames::FlxFrame frame, ::flixel::math::FlxMatrix matrix, ::openfl::geom::ColorTransform transform){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_197_addQuad)
HXLINE( 198)		int prevVerticesPos = this->verticesPosition;
HXLINE( 199)		int prevIndicesPos = this->indicesPosition;
HXLINE( 200)		int prevColorsPos = this->colorsPosition;
HXLINE( 201)		int prevNumberOfVertices = this->get_numVertices();
HXLINE( 203)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 203)		point->_inPool = false;
HXDLIN( 203)		 ::flixel::math::FlxPoint point1 = point;
HXLINE( 204)		{
HXLINE( 204)			Float x1 = (((point1->x * matrix->a) + (point1->y * matrix->c)) + matrix->tx);
HXDLIN( 204)			Float y1 = (((point1->x * matrix->b) + (point1->y * matrix->d)) + matrix->ty);
HXDLIN( 204)			point1->set(x1,y1);
            		}
HXLINE( 206)		this->vertices->set(prevVerticesPos,point1->x);
HXLINE( 207)		this->vertices->set((prevVerticesPos + 1),point1->y);
HXLINE( 209)		this->uvtData->set(prevVerticesPos,frame->uv->x);
HXLINE( 210)		this->uvtData->set((prevVerticesPos + 1),frame->uv->y);
HXLINE( 212)		point1->set(frame->frame->width,0);
HXLINE( 213)		{
HXLINE( 213)			Float x11 = (((point1->x * matrix->a) + (point1->y * matrix->c)) + matrix->tx);
HXDLIN( 213)			Float y11 = (((point1->x * matrix->b) + (point1->y * matrix->d)) + matrix->ty);
HXDLIN( 213)			point1->set(x11,y11);
            		}
HXLINE( 215)		this->vertices->set((prevVerticesPos + 2),point1->x);
HXLINE( 216)		this->vertices->set((prevVerticesPos + 3),point1->y);
HXLINE( 218)		this->uvtData->set((prevVerticesPos + 2),frame->uv->width);
HXLINE( 219)		this->uvtData->set((prevVerticesPos + 3),frame->uv->y);
HXLINE( 221)		point1->set(frame->frame->width,frame->frame->height);
HXLINE( 222)		{
HXLINE( 222)			Float x12 = (((point1->x * matrix->a) + (point1->y * matrix->c)) + matrix->tx);
HXDLIN( 222)			Float y12 = (((point1->x * matrix->b) + (point1->y * matrix->d)) + matrix->ty);
HXDLIN( 222)			point1->set(x12,y12);
            		}
HXLINE( 224)		this->vertices->set((prevVerticesPos + 4),point1->x);
HXLINE( 225)		this->vertices->set((prevVerticesPos + 5),point1->y);
HXLINE( 227)		this->uvtData->set((prevVerticesPos + 4),frame->uv->width);
HXLINE( 228)		this->uvtData->set((prevVerticesPos + 5),frame->uv->height);
HXLINE( 230)		point1->set(0,frame->frame->height);
HXLINE( 231)		{
HXLINE( 231)			Float x13 = (((point1->x * matrix->a) + (point1->y * matrix->c)) + matrix->tx);
HXDLIN( 231)			Float y13 = (((point1->x * matrix->b) + (point1->y * matrix->d)) + matrix->ty);
HXDLIN( 231)			point1->set(x13,y13);
            		}
HXLINE( 233)		this->vertices->set((prevVerticesPos + 6),point1->x);
HXLINE( 234)		this->vertices->set((prevVerticesPos + 7),point1->y);
HXLINE( 236)		point1->put();
HXLINE( 238)		this->uvtData->set((prevVerticesPos + 6),frame->uv->x);
HXLINE( 239)		this->uvtData->set((prevVerticesPos + 7),frame->uv->height);
HXLINE( 241)		this->indices->set(prevIndicesPos,prevNumberOfVertices);
HXLINE( 242)		this->indices->set((prevIndicesPos + 1),(prevNumberOfVertices + 1));
HXLINE( 243)		this->indices->set((prevIndicesPos + 2),(prevNumberOfVertices + 2));
HXLINE( 244)		this->indices->set((prevIndicesPos + 3),(prevNumberOfVertices + 2));
HXLINE( 245)		this->indices->set((prevIndicesPos + 4),(prevNumberOfVertices + 3));
HXLINE( 246)		this->indices->set((prevIndicesPos + 5),prevNumberOfVertices);
HXLINE( 248)		if (this->colored) {
HXLINE( 250)			Float red = ((Float)1.0);
HXLINE( 251)			Float green = ((Float)1.0);
HXLINE( 252)			Float blue = ((Float)1.0);
HXLINE( 253)			Float alpha = ((Float)1.0);
HXLINE( 255)			if (::hx::IsNotNull( transform )) {
HXLINE( 257)				red = transform->redMultiplier;
HXLINE( 258)				green = transform->greenMultiplier;
HXLINE( 259)				blue = transform->blueMultiplier;
HXLINE( 262)				alpha = transform->alphaMultiplier;
            			}
HXLINE( 266)			int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());
HXDLIN( 266)			{
HXLINE( 266)				int Value = ::Math_obj::round((red * ( (Float)(255) )));
HXDLIN( 266)				color = (color & -16711681);
HXDLIN( 266)				int color1;
HXDLIN( 266)				if ((Value > 255)) {
HXLINE( 266)					color1 = 255;
            				}
            				else {
HXLINE( 266)					if ((Value < 0)) {
HXLINE( 266)						color1 = 0;
            					}
            					else {
HXLINE( 266)						color1 = Value;
            					}
            				}
HXDLIN( 266)				color = (color | (color1 << 16));
            			}
HXDLIN( 266)			{
HXLINE( 266)				int Value1 = ::Math_obj::round((green * ( (Float)(255) )));
HXDLIN( 266)				color = (color & -65281);
HXDLIN( 266)				int color2;
HXDLIN( 266)				if ((Value1 > 255)) {
HXLINE( 266)					color2 = 255;
            				}
            				else {
HXLINE( 266)					if ((Value1 < 0)) {
HXLINE( 266)						color2 = 0;
            					}
            					else {
HXLINE( 266)						color2 = Value1;
            					}
            				}
HXDLIN( 266)				color = (color | (color2 << 8));
            			}
HXDLIN( 266)			{
HXLINE( 266)				int Value2 = ::Math_obj::round((blue * ( (Float)(255) )));
HXDLIN( 266)				color = (color & -256);
HXDLIN( 266)				int color3;
HXDLIN( 266)				if ((Value2 > 255)) {
HXLINE( 266)					color3 = 255;
            				}
            				else {
HXLINE( 266)					if ((Value2 < 0)) {
HXLINE( 266)						color3 = 0;
            					}
            					else {
HXLINE( 266)						color3 = Value2;
            					}
            				}
HXDLIN( 266)				color = (color | color3);
            			}
HXDLIN( 266)			{
HXLINE( 266)				int Value3 = ::Math_obj::round((alpha * ( (Float)(255) )));
HXDLIN( 266)				color = (color & 16777215);
HXDLIN( 266)				int color4;
HXDLIN( 266)				if ((Value3 > 255)) {
HXLINE( 266)					color4 = 255;
            				}
            				else {
HXLINE( 266)					if ((Value3 < 0)) {
HXLINE( 266)						color4 = 0;
            					}
            					else {
HXLINE( 266)						color4 = Value3;
            					}
            				}
HXDLIN( 266)				color = (color | (color4 << 24));
            			}
HXDLIN( 266)			int color5 = color;
HXLINE( 268)			this->colors->set(prevColorsPos,color5);
HXLINE( 269)			this->colors->set((prevColorsPos + 1),color5);
HXLINE( 270)			this->colors->set((prevColorsPos + 2),color5);
HXLINE( 271)			this->colors->set((prevColorsPos + 3),color5);
HXLINE( 273)			 ::flixel::graphics::tile::FlxDrawTrianglesItem _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 273)			_hx_tmp->colorsPosition = (_hx_tmp->colorsPosition + 4);
            		}
HXLINE( 276)		 ::flixel::graphics::tile::FlxDrawTrianglesItem _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 276)		_hx_tmp->verticesPosition = (_hx_tmp->verticesPosition + 8);
HXLINE( 277)		 ::flixel::graphics::tile::FlxDrawTrianglesItem _hx_tmp1 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 277)		_hx_tmp1->indicesPosition = (_hx_tmp1->indicesPosition + 6);
            	}


int FlxDrawTrianglesItem_obj::get_numVertices(){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_282_get_numVertices)
HXDLIN( 282)		return ::Std_obj::_hx_int((( (Float)(this->vertices->get_length()) ) / ( (Float)(2) )));
            	}


int FlxDrawTrianglesItem_obj::get_numTriangles(){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_287_get_numTriangles)
HXDLIN( 287)		return ::Std_obj::_hx_int((( (Float)(this->indices->get_length()) ) / ( (Float)(3) )));
            	}


 ::flixel::math::FlxPoint FlxDrawTrianglesItem_obj::point;

 ::flixel::math::FlxRect FlxDrawTrianglesItem_obj::rect;

 ::flixel::math::FlxRect FlxDrawTrianglesItem_obj::inflateBounds( ::flixel::math::FlxRect bounds,Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_170_inflateBounds)
HXLINE( 171)		if ((x < bounds->x)) {
HXLINE( 173)			 ::flixel::math::FlxRect bounds1 = bounds;
HXDLIN( 173)			bounds1->width = (bounds1->width + (bounds->x - x));
HXLINE( 174)			bounds->x = x;
            		}
HXLINE( 177)		if ((y < bounds->y)) {
HXLINE( 179)			 ::flixel::math::FlxRect bounds1 = bounds;
HXDLIN( 179)			bounds1->height = (bounds1->height + (bounds->y - y));
HXLINE( 180)			bounds->y = y;
            		}
HXLINE( 183)		if ((x > (bounds->x + bounds->width))) {
HXLINE( 185)			bounds->width = (x - bounds->x);
            		}
HXLINE( 188)		if ((y > (bounds->y + bounds->height))) {
HXLINE( 190)			bounds->height = (y - bounds->y);
            		}
HXLINE( 193)		return bounds;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxDrawTrianglesItem_obj,inflateBounds,return )


::hx::ObjectPtr< FlxDrawTrianglesItem_obj > FlxDrawTrianglesItem_obj::__new() {
	::hx::ObjectPtr< FlxDrawTrianglesItem_obj > __this = new FlxDrawTrianglesItem_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< FlxDrawTrianglesItem_obj > FlxDrawTrianglesItem_obj::__alloc(::hx::Ctx *_hx_ctx) {
	FlxDrawTrianglesItem_obj *__this = (FlxDrawTrianglesItem_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxDrawTrianglesItem_obj), true, "flixel.graphics.tile.FlxDrawTrianglesItem"));
	*(void **)__this = FlxDrawTrianglesItem_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlxDrawTrianglesItem_obj::FlxDrawTrianglesItem_obj()
{
}

void FlxDrawTrianglesItem_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxDrawTrianglesItem);
	HX_MARK_MEMBER_NAME(vertices,"vertices");
	HX_MARK_MEMBER_NAME(indices,"indices");
	HX_MARK_MEMBER_NAME(uvtData,"uvtData");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(verticesPosition,"verticesPosition");
	HX_MARK_MEMBER_NAME(indicesPosition,"indicesPosition");
	HX_MARK_MEMBER_NAME(colorsPosition,"colorsPosition");
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	 ::flixel::graphics::tile::FlxDrawBaseItem_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxDrawTrianglesItem_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(vertices,"vertices");
	HX_VISIT_MEMBER_NAME(indices,"indices");
	HX_VISIT_MEMBER_NAME(uvtData,"uvtData");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(verticesPosition,"verticesPosition");
	HX_VISIT_MEMBER_NAME(indicesPosition,"indicesPosition");
	HX_VISIT_MEMBER_NAME(colorsPosition,"colorsPosition");
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	 ::flixel::graphics::tile::FlxDrawBaseItem_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxDrawTrianglesItem_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { return ::hx::Val( colors ); }
		if (HX_FIELD_EQ(inName,"bounds") ) { return ::hx::Val( bounds ); }
		if (HX_FIELD_EQ(inName,"render") ) { return ::hx::Val( render_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { return ::hx::Val( indices ); }
		if (HX_FIELD_EQ(inName,"uvtData") ) { return ::hx::Val( uvtData ); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return ::hx::Val( dispose_dyn() ); }
		if (HX_FIELD_EQ(inName,"addQuad") ) { return ::hx::Val( addQuad_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { return ::hx::Val( vertices ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"addTriangles") ) { return ::hx::Val( addTriangles_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorsPosition") ) { return ::hx::Val( colorsPosition ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"indicesPosition") ) { return ::hx::Val( indicesPosition ); }
		if (HX_FIELD_EQ(inName,"get_numVertices") ) { return ::hx::Val( get_numVertices_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"verticesPosition") ) { return ::hx::Val( verticesPosition ); }
		if (HX_FIELD_EQ(inName,"get_numTriangles") ) { return ::hx::Val( get_numTriangles_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxDrawTrianglesItem_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { outValue = ( rect ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { outValue = ( point ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"inflateBounds") ) { outValue = inflateBounds_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxDrawTrianglesItem_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { colors=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"indices") ) { indices=inValue.Cast<  ::openfl::_Vector::IntVector >(); return inValue; }
		if (HX_FIELD_EQ(inName,"uvtData") ) { uvtData=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"vertices") ) { vertices=inValue.Cast<  ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorsPosition") ) { colorsPosition=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"indicesPosition") ) { indicesPosition=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"verticesPosition") ) { verticesPosition=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxDrawTrianglesItem_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=ioValue.Cast<  ::flixel::math::FlxRect >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=ioValue.Cast<  ::flixel::math::FlxPoint >(); return true; }
	}
	return false;
}

void FlxDrawTrianglesItem_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("vertices",f9,bf,15,6a));
	outFields->push(HX_("indices",27,47,54,e3));
	outFields->push(HX_("uvtData",bd,a6,23,27));
	outFields->push(HX_("colors",b0,c5,86,c6));
	outFields->push(HX_("verticesPosition",c2,3d,e8,f5));
	outFields->push(HX_("indicesPosition",f0,a2,e6,12));
	outFields->push(HX_("colorsPosition",79,52,f8,2c));
	outFields->push(HX_("bounds",75,86,1d,66));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxDrawTrianglesItem_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(FlxDrawTrianglesItem_obj,vertices),HX_("vertices",f9,bf,15,6a)},
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(FlxDrawTrianglesItem_obj,indices),HX_("indices",27,47,54,e3)},
	{::hx::fsObject /*  ::openfl::_Vector::FloatVector */ ,(int)offsetof(FlxDrawTrianglesItem_obj,uvtData),HX_("uvtData",bd,a6,23,27)},
	{::hx::fsObject /*  ::openfl::_Vector::IntVector */ ,(int)offsetof(FlxDrawTrianglesItem_obj,colors),HX_("colors",b0,c5,86,c6)},
	{::hx::fsInt,(int)offsetof(FlxDrawTrianglesItem_obj,verticesPosition),HX_("verticesPosition",c2,3d,e8,f5)},
	{::hx::fsInt,(int)offsetof(FlxDrawTrianglesItem_obj,indicesPosition),HX_("indicesPosition",f0,a2,e6,12)},
	{::hx::fsInt,(int)offsetof(FlxDrawTrianglesItem_obj,colorsPosition),HX_("colorsPosition",79,52,f8,2c)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxDrawTrianglesItem_obj,bounds),HX_("bounds",75,86,1d,66)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxDrawTrianglesItem_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(void *) &FlxDrawTrianglesItem_obj::point,HX_("point",50,b4,8f,c6)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(void *) &FlxDrawTrianglesItem_obj::rect,HX_("rect",24,4d,a7,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxDrawTrianglesItem_obj_sMemberFields[] = {
	HX_("vertices",f9,bf,15,6a),
	HX_("indices",27,47,54,e3),
	HX_("uvtData",bd,a6,23,27),
	HX_("colors",b0,c5,86,c6),
	HX_("verticesPosition",c2,3d,e8,f5),
	HX_("indicesPosition",f0,a2,e6,12),
	HX_("colorsPosition",79,52,f8,2c),
	HX_("bounds",75,86,1d,66),
	HX_("render",56,6b,29,05),
	HX_("reset",cf,49,c8,e6),
	HX_("dispose",9f,80,4c,bb),
	HX_("addTriangles",4a,52,95,7e),
	HX_("addQuad",88,7b,47,87),
	HX_("get_numVertices",f6,c7,0d,17),
	HX_("get_numTriangles",0e,26,50,2b),
	::String(null()) };

static void FlxDrawTrianglesItem_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDrawTrianglesItem_obj::point,"point");
	HX_MARK_MEMBER_NAME(FlxDrawTrianglesItem_obj::rect,"rect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxDrawTrianglesItem_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDrawTrianglesItem_obj::point,"point");
	HX_VISIT_MEMBER_NAME(FlxDrawTrianglesItem_obj::rect,"rect");
};

#endif

::hx::Class FlxDrawTrianglesItem_obj::__mClass;

static ::String FlxDrawTrianglesItem_obj_sStaticFields[] = {
	HX_("point",50,b4,8f,c6),
	HX_("rect",24,4d,a7,4b),
	HX_("inflateBounds",5c,36,3c,2f),
	::String(null())
};

void FlxDrawTrianglesItem_obj::__register()
{
	FlxDrawTrianglesItem_obj _hx_dummy;
	FlxDrawTrianglesItem_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.tile.FlxDrawTrianglesItem",b7,10,12,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxDrawTrianglesItem_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxDrawTrianglesItem_obj::__SetStatic;
	__mClass->mMarkFunc = FlxDrawTrianglesItem_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxDrawTrianglesItem_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxDrawTrianglesItem_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxDrawTrianglesItem_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxDrawTrianglesItem_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxDrawTrianglesItem_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxDrawTrianglesItem_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxDrawTrianglesItem_obj::__boot()
{
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxPoint _hx_run(){
            			HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_21_boot)
HXDLIN(  21)			 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  21)			point->_inPool = false;
HXDLIN(  21)			return point;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_21_boot)
HXDLIN(  21)		point = ( ( ::flixel::math::FlxPoint)( ::Dynamic(new _hx_Closure_0())()) );
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::flixel::math::FlxRect _hx_run(){
            			HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_22_boot)
HXDLIN(  22)			 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN(  22)			_this->x = ( (Float)(0) );
HXDLIN(  22)			_this->y = ( (Float)(0) );
HXDLIN(  22)			_this->width = ( (Float)(0) );
HXDLIN(  22)			_this->height = ( (Float)(0) );
HXDLIN(  22)			 ::flixel::math::FlxRect rect = _this;
HXDLIN(  22)			rect->_inPool = false;
HXDLIN(  22)			return rect;
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_a928be64e2bd594d_22_boot)
HXDLIN(  22)		rect = ( ( ::flixel::math::FlxRect)( ::Dynamic(new _hx_Closure_0())()) );
            	}
}

} // end namespace flixel
} // end namespace graphics
} // end namespace tile
