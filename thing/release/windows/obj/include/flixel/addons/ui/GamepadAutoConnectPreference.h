// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_addons_ui_GamepadAutoConnectPreference
#define INCLUDED_flixel_addons_ui_GamepadAutoConnectPreference

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,addons,ui,GamepadAutoConnectPreference)
namespace flixel{
namespace addons{
namespace ui{


class GamepadAutoConnectPreference_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef GamepadAutoConnectPreference_obj OBJ_;

	public:
		GamepadAutoConnectPreference_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.addons.ui.GamepadAutoConnectPreference",e6,f3,f3,18); }
		::String __ToString() const { return HX_("GamepadAutoConnectPreference.",59,97,d4,5d) + _hx_tag; }

		static ::flixel::addons::ui::GamepadAutoConnectPreference FirstActive;
		static inline ::flixel::addons::ui::GamepadAutoConnectPreference FirstActive_dyn() { return FirstActive; }
		static ::flixel::addons::ui::GamepadAutoConnectPreference GamepadID(int i);
		static ::Dynamic GamepadID_dyn();
		static ::flixel::addons::ui::GamepadAutoConnectPreference LastActive;
		static inline ::flixel::addons::ui::GamepadAutoConnectPreference LastActive_dyn() { return LastActive; }
		static ::flixel::addons::ui::GamepadAutoConnectPreference Never;
		static inline ::flixel::addons::ui::GamepadAutoConnectPreference Never_dyn() { return Never; }
};

} // end namespace flixel
} // end namespace addons
} // end namespace ui

#endif /* INCLUDED_flixel_addons_ui_GamepadAutoConnectPreference */ 
