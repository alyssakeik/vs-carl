// Generated by Haxe 4.1.5
#ifndef INCLUDED_CoolUtil
#define INCLUDED_CoolUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(CoolUtil)



class HXCPP_CLASS_ATTRIBUTES CoolUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CoolUtil_obj OBJ_;
		CoolUtil_obj();

	public:
		enum { _hx_ClassId = 0x24fe864b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="CoolUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"CoolUtil"); }

		inline static ::hx::ObjectPtr< CoolUtil_obj > __new() {
			::hx::ObjectPtr< CoolUtil_obj > __this = new CoolUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CoolUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CoolUtil_obj *__this = (CoolUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CoolUtil_obj), false, "CoolUtil"));
			*(void **)__this = CoolUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CoolUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CoolUtil",8b,93,6d,c9); }

		static void __boot();
		static ::Array< ::String > difficultyArray;
		static ::String difficultyFromInt(int difficulty);
		static ::Dynamic difficultyFromInt_dyn();

		static ::Array< ::String > coolTextFile(::String path);
		static ::Dynamic coolTextFile_dyn();

};


#endif /* INCLUDED_CoolUtil */ 
