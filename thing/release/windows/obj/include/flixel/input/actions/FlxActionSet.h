// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#define INCLUDED_flixel_input_actions_FlxActionSet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS3(flixel,input,actions,FlxAction)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionAnalog)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionDigital)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionSet)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxActionSet_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxActionSet_obj OBJ_;
		FlxActionSet_obj();

	public:
		enum { _hx_ClassId = 0x315ddd0d };

		void __construct(::String Name,::Array< ::Dynamic> DigitalActions,::Array< ::Dynamic> AnalogActions);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions.FlxActionSet")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions.FlxActionSet"); }
		static ::hx::ObjectPtr< FlxActionSet_obj > __new(::String Name,::Array< ::Dynamic> DigitalActions,::Array< ::Dynamic> AnalogActions);
		static ::hx::ObjectPtr< FlxActionSet_obj > __alloc(::hx::Ctx *_hx_ctx,::String Name,::Array< ::Dynamic> DigitalActions,::Array< ::Dynamic> AnalogActions);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxActionSet_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxActionSet",da,16,85,2e); }

		::String name;
		::Array< ::Dynamic> digitalActions;
		::Array< ::Dynamic> analogActions;
		bool add( ::flixel::input::actions::FlxAction Action);
		::Dynamic add_dyn();

		void destroy();
		::Dynamic destroy_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxActionSet */ 
