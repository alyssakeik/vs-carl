// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_StepManiaOption
#include <StepManiaOption.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_d26a84dfc1aa5e2f_270_new,"StepManiaOption","new",0x8fd4a86d,"StepManiaOption.new","Options.hx",270,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_d26a84dfc1aa5e2f_275_press,"StepManiaOption","press",0xdbf908d0,"StepManiaOption.press","Options.hx",275,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_d26a84dfc1aa5e2f_283_updateDisplay,"StepManiaOption","updateDisplay",0xac02d986,"StepManiaOption.updateDisplay","Options.hx",283,0x9d9a0240)

void StepManiaOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_d26a84dfc1aa5e2f_270_new)
HXLINE( 271)		super::__construct();
HXLINE( 272)		this->description = desc;
            	}

Dynamic StepManiaOption_obj::__CreateEmpty() { return new StepManiaOption_obj; }

void *StepManiaOption_obj::_hx_vtable = 0;

Dynamic StepManiaOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StepManiaOption_obj > _hx_result = new StepManiaOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool StepManiaOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x7331d33b;
	}
}

bool StepManiaOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_d26a84dfc1aa5e2f_275_press)
HXLINE( 276)		::flixel::FlxG_obj::save->data->__SetField(HX_("stepMania",06,56,8a,73),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("stepMania",06,56,8a,73),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 277)		this->display = this->updateDisplay();
HXLINE( 278)		return true;
            	}


::String StepManiaOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_d26a84dfc1aa5e2f_283_updateDisplay)
HXDLIN( 283)		::String _hx_tmp;
HXDLIN( 283)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("stepMania",06,56,8a,73),::hx::paccDynamic)) ))) {
HXDLIN( 283)			_hx_tmp = HX_("off",6f,93,54,00);
            		}
            		else {
HXDLIN( 283)			_hx_tmp = HX_("on",1f,61,00,00);
            		}
HXDLIN( 283)		return (HX_("Colors by quantization ",46,94,48,67) + _hx_tmp);
            	}



::hx::ObjectPtr< StepManiaOption_obj > StepManiaOption_obj::__new(::String desc) {
	::hx::ObjectPtr< StepManiaOption_obj > __this = new StepManiaOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< StepManiaOption_obj > StepManiaOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	StepManiaOption_obj *__this = (StepManiaOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StepManiaOption_obj), true, "StepManiaOption"));
	*(void **)__this = StepManiaOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

StepManiaOption_obj::StepManiaOption_obj()
{
}

::hx::Val StepManiaOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *StepManiaOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *StepManiaOption_obj_sStaticStorageInfo = 0;
#endif

static ::String StepManiaOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class StepManiaOption_obj::__mClass;

void StepManiaOption_obj::__register()
{
	StepManiaOption_obj _hx_dummy;
	StepManiaOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("StepManiaOption",fb,ed,0a,a7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StepManiaOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StepManiaOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StepManiaOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StepManiaOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

