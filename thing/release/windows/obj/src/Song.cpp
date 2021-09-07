// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Event
#include <Event.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Song
#include <Song.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_TimingStruct
#include <TimingStruct.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_4e288e2989890fc6_70_loadFromJsonRAW,"Song","loadFromJsonRAW",0x06d28d57,"Song.loadFromJsonRAW","Song.hx",70,0x775e99e9)
HX_LOCAL_STACK_FRAME(_hx_pos_4e288e2989890fc6_82_loadFromJson,"Song","loadFromJson",0x10fda511,"Song.loadFromJson","Song.hx",82,0x775e99e9)
HX_LOCAL_STACK_FRAME(_hx_pos_4e288e2989890fc6_121_conversionChecks,"Song","conversionChecks",0xdb8cfafa,"Song.conversionChecks","Song.hx",121,0x775e99e9)
HX_LOCAL_STACK_FRAME(_hx_pos_4e288e2989890fc6_219_parseJSONshit,"Song","parseJSONshit",0x7c7ff6e2,"Song.parseJSONshit","Song.hx",219,0x775e99e9)
HX_LOCAL_STACK_FRAME(_hx_pos_4e288e2989890fc6_46_boot,"Song","boot",0xfba9eb4b,"Song.boot","Song.hx",46,0x775e99e9)

void Song_obj::__construct() { }

Dynamic Song_obj::__CreateEmpty() { return new Song_obj; }

void *Song_obj::_hx_vtable = 0;

Dynamic Song_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Song_obj > _hx_result = new Song_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Song_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b844619;
}

::String Song_obj::latestChart;

 ::Dynamic Song_obj::loadFromJsonRAW(::String rawJson){
            	HX_STACKFRAME(&_hx_pos_4e288e2989890fc6_70_loadFromJsonRAW)
HXLINE(  71)		while(!(::StringTools_obj::endsWith(rawJson,HX_("}",7d,00,00,00)))){
HXLINE(  73)			rawJson = rawJson.substr(0,(rawJson.length - 1));
            		}
HXLINE(  77)		return ::Song_obj::parseJSONshit(rawJson);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Song_obj,loadFromJsonRAW,return )

 ::Dynamic Song_obj::loadFromJson(::String jsonInput,::String folder){
            	HX_STACKFRAME(&_hx_pos_4e288e2989890fc6_82_loadFromJson)
HXLINE(  84)		::String folderLowercase = ::StringTools_obj::replace(folder,HX_(" ",20,00,00,00),HX_("-",2d,00,00,00)).toLowerCase();
HXLINE(  85)		::String _hx_switch_0 = folderLowercase;
            		if (  (_hx_switch_0==HX_("dad-battle",be,d5,66,07)) ){
HXLINE(  86)			folderLowercase = HX_("dadbattle",bf,6a,a9,a6);
HXDLIN(  86)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("m.i.l.f",9e,fe,da,ac)) ){
HXLINE(  88)			folderLowercase = HX_("milf",d6,4c,5c,48);
HXDLIN(  88)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("philly-nice",22,2e,26,44)) ){
HXLINE(  87)			folderLowercase = HX_("philly",28,77,5e,ef);
HXDLIN(  87)			goto _hx_goto_2;
            		}
            		_hx_goto_2:;
HXLINE(  93)		::String library = null();
HXDLIN(  93)		::String rawJson = ::StringTools_obj::trim(::lime::utils::Assets_obj::getText(::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + ((folderLowercase + HX_("/",2f,00,00,00)) + jsonInput.toLowerCase())) + HX_(".json",56,f1,d6,c2)),HX_("TEXT",ad,94,ba,37),library)));
HXLINE(  95)		while(!(::StringTools_obj::endsWith(rawJson,HX_("}",7d,00,00,00)))){
HXLINE(  97)			rawJson = rawJson.substr(0,(rawJson.length - 1));
            		}
HXLINE( 117)		return ::Song_obj::parseJSONshit(rawJson);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Song_obj,loadFromJson,return )

 ::Dynamic Song_obj::conversionChecks( ::Dynamic song){
            	HX_GC_STACKFRAME(&_hx_pos_4e288e2989890fc6_121_conversionChecks)
HXLINE( 122)		Float ba = ( (Float)(song->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) );
HXLINE( 124)		int index = 0;
HXLINE( 126)		::Array< ::Dynamic> convertedStuff = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 129)		if (::hx::IsNull( song->__Field(HX_("eventObjects",da,5f,a4,12),::hx::paccDynamic) )) {
HXLINE( 130)			song->__SetField(HX_("eventObjects",da,5f,a4,12),::Array_obj< ::Dynamic>::__new(1)->init(0, ::Event_obj::__alloc( HX_CTX ,HX_("Init BPM",cf,ed,e8,08),( (Float)(0) ),( (Float)(song->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) ),HX_("BPM Change",d1,e8,85,d1))),::hx::paccDynamic);
            		}
HXLINE( 132)		{
HXLINE( 132)			int _g = 0;
HXDLIN( 132)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(song->__Field(HX_("eventObjects",da,5f,a4,12),::hx::paccDynamic)) );
HXDLIN( 132)			while((_g < _g1->length)){
HXLINE( 132)				 ::Event i = _g1->__get(_g).StaticCast<  ::Event >();
HXDLIN( 132)				_g = (_g + 1);
HXLINE( 134)				::String name = ( (::String)(::Reflect_obj::field(i,HX_("name",4b,72,ff,48))) );
HXLINE( 135)				::String type = ( (::String)(::Reflect_obj::field(i,HX_("type",ba,f2,08,4d))) );
HXLINE( 136)				Float pos = ( (Float)(::Reflect_obj::field(i,HX_("position",a9,a0,fa,ca))) );
HXLINE( 137)				Float value = ( (Float)(::Reflect_obj::field(i,HX_("value",71,7f,b8,31))) );
HXLINE( 139)				convertedStuff->push( ::Event_obj::__alloc( HX_CTX ,name,pos,value,type));
            			}
            		}
HXLINE( 142)		song->__SetField(HX_("eventObjects",da,5f,a4,12),convertedStuff,::hx::paccDynamic);
HXLINE( 144)		if (::hx::IsNull( song->__Field(HX_("noteStyle",df,ef,aa,c1),::hx::paccDynamic) )) {
HXLINE( 145)			song->__SetField(HX_("noteStyle",df,ef,aa,c1),HX_("normal",27,72,69,30),::hx::paccDynamic);
            		}
HXLINE( 147)		if (::hx::IsNull( song->__Field(HX_("gfVersion",b9,c6,7d,f3),::hx::paccDynamic) )) {
HXLINE( 148)			song->__SetField(HX_("gfVersion",b9,c6,7d,f3),HX_("gf",1f,5a,00,00),::hx::paccDynamic);
            		}
HXLINE( 151)		::TimingStruct_obj::clearTimings();
HXLINE( 153)		int currentIndex = 0;
HXLINE( 154)		{
HXLINE( 154)			int _g2 = 0;
HXDLIN( 154)			::Array< ::Dynamic> _g3 = ( (::Array< ::Dynamic>)(song->__Field(HX_("eventObjects",da,5f,a4,12),::hx::paccDynamic)) );
HXDLIN( 154)			while((_g2 < _g3->length)){
HXLINE( 154)				 ::Event i = _g3->__get(_g2).StaticCast<  ::Event >();
HXDLIN( 154)				_g2 = (_g2 + 1);
HXLINE( 156)				if ((i->type == HX_("BPM Change",d1,e8,85,d1))) {
HXLINE( 158)					Float beat = i->position;
HXLINE( 160)					Float endBeat = ::Math_obj::POSITIVE_INFINITY;
HXLINE( 162)					::TimingStruct_obj::addTiming(beat,i->value,endBeat,( (Float)(0) ));
HXLINE( 164)					if ((currentIndex != 0)) {
HXLINE( 166)						 ::TimingStruct data = ::TimingStruct_obj::AllTimings->__get((currentIndex - 1)).StaticCast<  ::TimingStruct >();
HXLINE( 167)						data->endBeat = beat;
HXLINE( 168)						data->length = ((data->endBeat - data->startBeat) / (data->bpm / ( (Float)(60) )));
HXLINE( 169)						Float step = (((( (Float)(60) ) / data->bpm) * ( (Float)(1000) )) / ( (Float)(4) ));
HXLINE( 170)						::TimingStruct_obj::AllTimings->__get(currentIndex).StaticCast<  ::TimingStruct >()->startStep = ::Math_obj::floor((((data->endBeat / (data->bpm / ( (Float)(60) ))) * ( (Float)(1000) )) / step));
HXLINE( 171)						::TimingStruct_obj::AllTimings->__get(currentIndex).StaticCast<  ::TimingStruct >()->startTime = (data->startTime + data->length);
            					}
HXLINE( 174)					currentIndex = (currentIndex + 1);
            				}
            			}
            		}
HXLINE( 179)		{
HXLINE( 179)			int _g4 = 0;
HXDLIN( 179)			::Array< ::Dynamic> _g5 = ( (::Array< ::Dynamic>)(song->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic)) );
HXDLIN( 179)			while((_g4 < _g5->length)){
HXLINE( 179)				 ::Dynamic i = _g5->__get(_g4);
HXDLIN( 179)				_g4 = (_g4 + 1);
HXLINE( 181)				int currentBeat = (4 * index);
HXLINE( 183)				 ::TimingStruct currentSeg = ::TimingStruct_obj::getTimingAtBeat(( (Float)(currentBeat) ));
HXLINE( 185)				if (::hx::IsNull( currentSeg )) {
HXLINE( 186)					continue;
            				}
HXLINE( 188)				Float beat = (currentSeg->startBeat + (( (Float)(currentBeat) ) - currentSeg->startBeat));
HXLINE( 190)				bool _hx_tmp;
HXDLIN( 190)				if (( (bool)(i->__Field(HX_("changeBPM",4f,4f,f8,1d),::hx::paccDynamic)) )) {
HXLINE( 190)					_hx_tmp = ::hx::IsNotEq( i->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic),ba );
            				}
            				else {
HXLINE( 190)					_hx_tmp = false;
            				}
HXDLIN( 190)				if (_hx_tmp) {
HXLINE( 193)					ba = ( (Float)(i->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) );
HXLINE( 194)					::Array< ::Dynamic> song1 = ( (::Array< ::Dynamic>)(song->__Field(HX_("eventObjects",da,5f,a4,12),::hx::paccDynamic)) );
HXDLIN( 194)					song1->push( ::Event_obj::__alloc( HX_CTX ,(HX_("FNF BPM Change ",0d,e9,d2,db) + index),beat,( (Float)(i->__Field(HX_("bpm",df,be,4a,00),::hx::paccDynamic)) ),HX_("BPM Change",d1,e8,85,d1)));
            				}
HXLINE( 197)				{
HXLINE( 197)					int _g = 0;
HXDLIN( 197)					::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(i->__Field(HX_("sectionNotes",1c,c8,a7,fe),::hx::paccDynamic)) );
HXDLIN( 197)					while((_g < _g1->length)){
HXLINE( 197)						::cpp::VirtualArray ii = ::cpp::VirtualArray( _g1->__get(_g));
HXDLIN( 197)						_g = (_g + 1);
HXLINE( 199)						if (::hx::IsNull( song->__Field(HX_("chartVersion",da,e9,39,c8),::hx::paccDynamic) )) {
HXLINE( 201)							ii->set(3,false);
HXLINE( 202)							ii->set(4,::TimingStruct_obj::getBeatFromTime(( (Float)(ii->__get(0)) )));
            						}
HXLINE( 205)						bool _hx_tmp = ::hx::IsEq( ii->__get(3),0 );
            					}
            				}
HXLINE( 209)				index = (index + 1);
            			}
            		}
HXLINE( 212)		song->__SetField(HX_("chartVersion",da,e9,39,c8),::Song_obj::latestChart,::hx::paccDynamic);
HXLINE( 214)		return song;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Song_obj,conversionChecks,return )

 ::Dynamic Song_obj::parseJSONshit(::String rawJson){
            	HX_GC_STACKFRAME(&_hx_pos_4e288e2989890fc6_219_parseJSONshit)
HXLINE( 220)		 ::Dynamic swagShit =  ::haxe::format::JsonParser_obj::__alloc( HX_CTX ,rawJson)->doParse()->__Field(HX_("song",d5,23,58,4c),::hx::paccDynamic);
HXLINE( 221)		swagShit->__SetField(HX_("validScore",b6,dc,18,c7),true,::hx::paccDynamic);
HXLINE( 225)		{
HXLINE( 225)			int _g = 0;
HXDLIN( 225)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(swagShit->__Field(HX_("notes",41,dc,ca,9f),::hx::paccDynamic)) );
HXDLIN( 225)			while((_g < _g1->length)){
HXLINE( 225)				 ::Dynamic section = _g1->__get(_g);
HXDLIN( 225)				_g = (_g + 1);
HXLINE( 227)				if (( (bool)(section->__Field(HX_("altAnim",da,f3,f2,e5),::hx::paccDynamic)) )) {
HXLINE( 228)					section->__SetField(HX_("CPUAltAnim",b2,2f,f2,ef),section->__Field(HX_("altAnim",da,f3,f2,e5),::hx::paccDynamic),::hx::paccDynamic);
            				}
            			}
            		}
HXLINE( 231)		return ::Song_obj::conversionChecks(swagShit);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Song_obj,parseJSONshit,return )


Song_obj::Song_obj()
{
}

bool Song_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"latestChart") ) { outValue = ( latestChart ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"loadFromJson") ) { outValue = loadFromJson_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"parseJSONshit") ) { outValue = parseJSONshit_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"loadFromJsonRAW") ) { outValue = loadFromJsonRAW_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"conversionChecks") ) { outValue = conversionChecks_dyn(); return true; }
	}
	return false;
}

bool Song_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"latestChart") ) { latestChart=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Song_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Song_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Song_obj::latestChart,HX_("latestChart",17,86,c2,48)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Song_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Song_obj::latestChart,"latestChart");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Song_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Song_obj::latestChart,"latestChart");
};

#endif

::hx::Class Song_obj::__mClass;

static ::String Song_obj_sStaticFields[] = {
	HX_("latestChart",17,86,c2,48),
	HX_("loadFromJsonRAW",d0,df,d3,41),
	HX_("loadFromJson",f8,fc,9c,5d),
	HX_("conversionChecks",61,d2,b3,41),
	HX_("parseJSONshit",1b,89,4d,3b),
	::String(null())
};

void Song_obj::__register()
{
	Song_obj _hx_dummy;
	Song_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Song",f5,4f,31,37);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Song_obj::__GetStatic;
	__mClass->mSetStaticField = &Song_obj::__SetStatic;
	__mClass->mMarkFunc = Song_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Song_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Song_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Song_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Song_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Song_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Song_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_4e288e2989890fc6_46_boot)
HXDLIN(  46)		latestChart = HX_("KE1",57,25,39,00);
            	}
}

