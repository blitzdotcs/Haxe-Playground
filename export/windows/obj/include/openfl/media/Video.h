#ifndef INCLUDED_openfl_media_Video
#define INCLUDED_openfl_media_Video

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,RectangleTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
HX_DECLARE_CLASS2(openfl,media,Video)
HX_DECLARE_CLASS2(openfl,net,NetStream)

namespace openfl{
namespace media{


class HXCPP_CLASS_ATTRIBUTES Video_obj : public  ::openfl::display::DisplayObject_obj
{
	public:
		typedef  ::openfl::display::DisplayObject_obj super;
		typedef Video_obj OBJ_;
		Video_obj();

	public:
		enum { _hx_ClassId = 0x12694e03 };

		void __construct(::hx::Null< int >  __o_width,::hx::Null< int >  __o_height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.media.Video")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.media.Video"); }
		static ::hx::ObjectPtr< Video_obj > __new(::hx::Null< int >  __o_width,::hx::Null< int >  __o_height);
		static ::hx::ObjectPtr< Video_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_width,::hx::Null< int >  __o_height);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Video_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Video",5b,84,29,ca); }

		static void __boot();
		static int VERTEX_BUFFER_STRIDE;
		int deblocking;
		bool smoothing;
		bool _hx___active;
		 ::lime::graphics::opengl::GLObject _hx___buffer;
		Float _hx___bufferAlpha;
		 ::openfl::geom::ColorTransform _hx___bufferColorTransform;
		 ::lime::graphics::RenderContext _hx___bufferContext;
		 ::lime::utils::ArrayBufferView _hx___bufferData;
		Float _hx___currentWidth;
		Float _hx___currentHeight;
		bool _hx___dirty;
		Float _hx___height;
		 ::openfl::display3D::IndexBuffer3D _hx___indexBuffer;
		 ::lime::graphics::RenderContext _hx___indexBufferContext;
		 ::lime::utils::ArrayBufferView _hx___indexBufferData;
		 ::openfl::net::NetStream _hx___stream;
		 ::openfl::display3D::textures::RectangleTexture _hx___texture;
		Float _hx___textureTime;
		 ::openfl::geom::Rectangle _hx___uvRect;
		 ::openfl::display3D::VertexBuffer3D _hx___vertexBuffer;
		 ::lime::graphics::RenderContext _hx___vertexBufferContext;
		 ::lime::utils::ArrayBufferView _hx___vertexBufferData;
		Float _hx___width;
		void attachNetStream( ::openfl::net::NetStream netStream);
		::Dynamic attachNetStream_dyn();

		void clear();
		::Dynamic clear_dyn();

		void _hx___enterFrame(int deltaTime);

		void _hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix);

		 ::openfl::display3D::IndexBuffer3D _hx___getIndexBuffer( ::openfl::display3D::Context3D context);
		::Dynamic _hx___getIndexBuffer_dyn();

		 ::openfl::display3D::textures::RectangleTexture _hx___getTexture( ::openfl::display3D::Context3D context);
		::Dynamic _hx___getTexture_dyn();

		 ::openfl::display3D::VertexBuffer3D _hx___getVertexBuffer( ::openfl::display3D::Context3D context);
		::Dynamic _hx___getVertexBuffer_dyn();

		bool _hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject);

		bool _hx___hitTestMask(Float x,Float y);

		Float get_height();

		Float set_height(Float value);

		int get_videoHeight();
		::Dynamic get_videoHeight_dyn();

		int get_videoWidth();
		::Dynamic get_videoWidth_dyn();

		Float get_width();

		Float set_width(Float value);

};

} // end namespace openfl
} // end namespace media

#endif /* INCLUDED_openfl_media_Video */ 
