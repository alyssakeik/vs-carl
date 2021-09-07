// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_EditorRes
#include <EditorRes.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_37ed1de7af318ea7_125_new,"EditorRes","new",0x71802005,"EditorRes.new","Options.hx",125,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_37ed1de7af318ea7_131_press,"EditorRes","press",0x19239668,"EditorRes.press","Options.hx",131,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_37ed1de7af318ea7_140_updateDisplay,"EditorRes","updateDisplay",0x5958bf1e,"EditorRes.updateDisplay","Options.hx",140,0x9d9a0240)

void EditorRes_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_37ed1de7af318ea7_125_new)
HXLINE( 126)		super::__construct();
HXLINE( 127)		this->description = desc;
            	}

Dynamic EditorRes_obj::__CreateEmpty() { return new EditorRes_obj; }

void *EditorRes_obj::_hx_vtable = 0;

Dynamic EditorRes_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EditorRes_obj > _hx_result = new EditorRes_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool EditorRes_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x499700ef;
	}
}

bool EditorRes_obj::press(){
            	HX_STACKFRAME(&_hx_pos_37ed1de7af318ea7_131_press)
HXLINE( 132)		::flixel::FlxG_obj::save->data->__SetField(HX_("editorBG",b2,00,f3,de),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("editorBG",b2,00,f3,de),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 134)		this->display = this->updateDisplay();
HXLINE( 135)		return true;
            	}


::String EditorRes_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_37ed1de7af318ea7_140_updateDisplay)
HXDLIN( 140)		if (( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("editorBG",b2,00,f3,de),::hx::paccDynamic)) )) {
HXDLIN( 140)			return HX_("Show Editor Grid",96,22,e4,a9);
            		}
            		else {
HXDLIN( 140)			return HX_("Do not Show Editor Grid",d8,86,6d,6e);
            		}
HXDLIN( 140)		return null();
            	}



::hx::ObjectPtr< EditorRes_obj > EditorRes_obj::__new(::String desc) {
	::hx::ObjectPtr< EditorRes_obj > __this = new EditorRes_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< EditorRes_obj > EditorRes_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	EditorRes_obj *__this = (EditorRes_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EditorRes_obj), true, "EditorRes"));
	*(void **)__this = EditorRes_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

EditorRes_obj::EditorRes_obj()
{
}

::hx::Val EditorRes_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EditorRes_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EditorRes_obj_sStaticStorageInfo = 0;
#endif

static ::String EditorRes_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class EditorRes_obj::__mClass;

void EditorRes_obj::__register()
{
	EditorRes_obj _hx_dummy;
	EditorRes_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("EditorRes",93,b9,8c,d7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EditorRes_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EditorRes_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EditorRes_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EditorRes_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

