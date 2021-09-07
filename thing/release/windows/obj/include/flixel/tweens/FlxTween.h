// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_tweens_FlxTween
#define INCLUDED_flixel_tweens_FlxTween

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,tweens,FlxTweenManager)
HX_DECLARE_CLASS3(flixel,tweens,misc,AngleTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,NumTween)
HX_DECLARE_CLASS3(flixel,tweens,misc,VarTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace tweens{


class HXCPP_CLASS_ATTRIBUTES FlxTween_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxTween_obj OBJ_;
		FlxTween_obj();

	public:
		enum { _hx_ClassId = 0x104846c5 };

		void __construct( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.tweens.FlxTween")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.tweens.FlxTween"); }
		static ::hx::ObjectPtr< FlxTween_obj > __new( ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		static ::hx::ObjectPtr< FlxTween_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic Options, ::flixel::tweens::FlxTweenManager manager);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTween_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxTween",b9,b4,4a,d6); }

		static  ::flixel::tweens::FlxTweenManager globalManager;
		static  ::flixel::tweens::misc::VarTween tween( ::Dynamic Object, ::Dynamic Values,::hx::Null< Float >  Duration, ::Dynamic Options);
		static ::Dynamic tween_dyn();

		static  ::flixel::tweens::misc::NumTween num(Float FromValue,Float ToValue,::hx::Null< Float >  Duration, ::Dynamic Options, ::Dynamic TweenFunction);
		static ::Dynamic num_dyn();

		static  ::flixel::tweens::misc::AngleTween angle( ::flixel::FlxSprite Sprite,Float FromAngle,Float ToAngle,::hx::Null< Float >  Duration, ::Dynamic Options);
		static ::Dynamic angle_dyn();

		 ::flixel::tweens::FlxTweenManager manager;
		bool active;
		Float duration;
		 ::Dynamic ease;
		Dynamic ease_dyn() { return ease;}
		 ::Dynamic onStart;
		Dynamic onStart_dyn() { return onStart;}
		 ::Dynamic onUpdate;
		Dynamic onUpdate_dyn() { return onUpdate;}
		 ::Dynamic onComplete;
		Dynamic onComplete_dyn() { return onComplete;}
		int type;
		bool finished;
		Float scale;
		bool backward;
		int executions;
		Float startDelay;
		Float loopDelay;
		Float _secondsSinceStart;
		Float _delayToUse;
		bool _running;
		bool _waitingForRestart;
		::Array< ::Dynamic> _chainedTweens;
		 ::flixel::tweens::FlxTween _nextTweenInChain;
		 ::Dynamic resolveTweenOptions( ::Dynamic Options);
		::Dynamic resolveTweenOptions_dyn();

		virtual void destroy();
		::Dynamic destroy_dyn();

		virtual void update(Float elapsed);
		::Dynamic update_dyn();

		 ::flixel::tweens::FlxTween start();
		::Dynamic start_dyn();

		void cancel();
		::Dynamic cancel_dyn();

		void finish();
		::Dynamic finish_dyn();

		void onEnd();
		::Dynamic onEnd_dyn();

		void setVarsOnEnd();
		::Dynamic setVarsOnEnd_dyn();

		void processTweenChain();
		::Dynamic processTweenChain_dyn();

		void doNextTween( ::flixel::tweens::FlxTween tween);
		::Dynamic doNextTween_dyn();

		void setChain(::Array< ::Dynamic> previousChain);
		::Dynamic setChain_dyn();

		void restart();
		::Dynamic restart_dyn();

		 ::flixel::tweens::FlxTween setDelays( ::Dynamic StartDelay, ::Dynamic LoopDelay);
		::Dynamic setDelays_dyn();

		Float set_startDelay(Float value);
		::Dynamic set_startDelay_dyn();

		Float set_loopDelay( ::Dynamic value);
		::Dynamic set_loopDelay_dyn();

		int set_type(int value);
		::Dynamic set_type_dyn();

		bool set_active(bool active);
		::Dynamic set_active_dyn();

};

} // end namespace flixel
} // end namespace tweens

#endif /* INCLUDED_flixel_tweens_FlxTween */ 
