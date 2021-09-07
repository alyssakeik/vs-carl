// Generated by Haxe 4.1.5
#ifndef INCLUDED_lime_media_vorbis_VorbisFile
#define INCLUDED_lime_media_vorbis_VorbisFile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,media,vorbis,VorbisFile)

namespace lime{
namespace media{
namespace vorbis{


class HXCPP_CLASS_ATTRIBUTES VorbisFile_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef VorbisFile_obj OBJ_;
		VorbisFile_obj();

	public:
		enum { _hx_ClassId = 0x05bcd751 };

		void __construct( ::Dynamic handle);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.media.vorbis.VorbisFile")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime.media.vorbis.VorbisFile"); }
		static ::hx::ObjectPtr< VorbisFile_obj > __new( ::Dynamic handle);
		static ::hx::ObjectPtr< VorbisFile_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic handle);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~VorbisFile_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("VorbisFile",8f,a7,81,d4); }

		int bitstream;
		 ::Dynamic handle;
		 cpp::Int64Struct pcmTell();
		::Dynamic pcmTell_dyn();

		 cpp::Int64Struct pcmTotal(::hx::Null< int >  bitstream);
		::Dynamic pcmTotal_dyn();

		int read( ::haxe::io::Bytes buffer,int position,::hx::Null< int >  length,::hx::Null< bool >  bigEndianPacking,::hx::Null< int >  wordSize,::hx::Null< bool >  _hx_signed);
		::Dynamic read_dyn();

		int timeSeek(Float s);
		::Dynamic timeSeek_dyn();

		Float timeTell();
		::Dynamic timeTell_dyn();

};

} // end namespace lime
} // end namespace media
} // end namespace vorbis

#endif /* INCLUDED_lime_media_vorbis_VorbisFile */ 
