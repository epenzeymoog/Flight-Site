// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\UnoCore\0.38.2\source\uno\ux\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Uno{
namespace UX{

// public abstract interface IPropertyListener :204
// {
uInterfaceType* IPropertyListener_typeof();

struct IPropertyListener
{
    void(*fp_OnPropertyChanged)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*);
    static void OnPropertyChanged(const uInterface& __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector property);
};

}}} // ::g::Uno::UX

#include <Uno.UX.Selector.h>

namespace g{
namespace Uno{
namespace UX{

inline void IPropertyListener::OnPropertyChanged(const uInterface& __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector property) { __this.VTable<IPropertyListener>()->fp_OnPropertyChanged(__this, obj, &property); }
// }

}}} // ::g::Uno::UX
