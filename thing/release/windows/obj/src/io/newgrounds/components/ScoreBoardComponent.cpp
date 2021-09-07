// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_io_newgrounds_Call
#include <io/newgrounds/Call.h>
#endif
#ifndef INCLUDED_io_newgrounds_ICallable
#include <io/newgrounds/ICallable.h>
#endif
#ifndef INCLUDED_io_newgrounds_NGLite
#include <io/newgrounds/NGLite.h>
#endif
#ifndef INCLUDED_io_newgrounds_components_Component
#include <io/newgrounds/components/Component.h>
#endif
#ifndef INCLUDED_io_newgrounds_components_ScoreBoardComponent
#include <io/newgrounds/components/ScoreBoardComponent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_da79cbc10962842a_17_new,"io.newgrounds.components.ScoreBoardComponent","new",0x13dd471d,"io.newgrounds.components.ScoreBoardComponent.new","io/newgrounds/components/ScoreBoardComponent.hx",17,0x1ae19214)
HX_LOCAL_STACK_FRAME(_hx_pos_da79cbc10962842a_74_postScore,"io.newgrounds.components.ScoreBoardComponent","postScore",0xaa6d254f,"io.newgrounds.components.ScoreBoardComponent.postScore","io/newgrounds/components/ScoreBoardComponent.hx",74,0x1ae19214)
namespace io{
namespace newgrounds{
namespace components{

void ScoreBoardComponent_obj::__construct( ::io::newgrounds::NGLite core){
            	HX_STACKFRAME(&_hx_pos_da79cbc10962842a_17_new)
HXDLIN(  17)		super::__construct(core);
            	}

Dynamic ScoreBoardComponent_obj::__CreateEmpty() { return new ScoreBoardComponent_obj; }

void *ScoreBoardComponent_obj::_hx_vtable = 0;

Dynamic ScoreBoardComponent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScoreBoardComponent_obj > _hx_result = new ScoreBoardComponent_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScoreBoardComponent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1718a611) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x1718a611;
	} else {
		return inClassId==(int)0x54ed1d99;
	}
}

 ::io::newgrounds::Call ScoreBoardComponent_obj::postScore(int id,int value,::String tag){
            	HX_GC_STACKFRAME(&_hx_pos_da79cbc10962842a_74_postScore)
HXDLIN(  74)		return  ::io::newgrounds::Call_obj::__alloc( HX_CTX ,this->_core,HX_("ScoreBoard.postScore",f8,2b,1f,a4),true,true)->addComponentParameter(HX_("id",db,5b,00,00),id,null())->addComponentParameter(HX_("value",71,7f,b8,31),value,null())->addComponentParameter(HX_("tag",5a,5a,58,00),tag,null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(ScoreBoardComponent_obj,postScore,return )


::hx::ObjectPtr< ScoreBoardComponent_obj > ScoreBoardComponent_obj::__new( ::io::newgrounds::NGLite core) {
	::hx::ObjectPtr< ScoreBoardComponent_obj > __this = new ScoreBoardComponent_obj();
	__this->__construct(core);
	return __this;
}

::hx::ObjectPtr< ScoreBoardComponent_obj > ScoreBoardComponent_obj::__alloc(::hx::Ctx *_hx_ctx, ::io::newgrounds::NGLite core) {
	ScoreBoardComponent_obj *__this = (ScoreBoardComponent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ScoreBoardComponent_obj), true, "io.newgrounds.components.ScoreBoardComponent"));
	*(void **)__this = ScoreBoardComponent_obj::_hx_vtable;
	__this->__construct(core);
	return __this;
}

ScoreBoardComponent_obj::ScoreBoardComponent_obj()
{
}

::hx::Val ScoreBoardComponent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"postScore") ) { return ::hx::Val( postScore_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ScoreBoardComponent_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ScoreBoardComponent_obj_sStaticStorageInfo = 0;
#endif

static ::String ScoreBoardComponent_obj_sMemberFields[] = {
	HX_("postScore",d2,82,0e,32),
	::String(null()) };

::hx::Class ScoreBoardComponent_obj::__mClass;

void ScoreBoardComponent_obj::__register()
{
	ScoreBoardComponent_obj _hx_dummy;
	ScoreBoardComponent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("io.newgrounds.components.ScoreBoardComponent",ab,74,52,f3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScoreBoardComponent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScoreBoardComponent_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScoreBoardComponent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScoreBoardComponent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace io
} // end namespace newgrounds
} // end namespace components
