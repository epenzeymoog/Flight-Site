// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\FuseCore\0.38.6\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct PendingRemoveVisual;}}

namespace g{
namespace Fuse{

// public abstract interface IBeginRemoveVisualListener :4437
// {
uInterfaceType* IBeginRemoveVisualListener_typeof();

struct IBeginRemoveVisualListener
{
    void(*fp_OnBeginRemoveVisual)(uObject*, ::g::Fuse::PendingRemoveVisual*);
    static void OnBeginRemoveVisual(const uInterface& __this, ::g::Fuse::PendingRemoveVisual* pr) { __this.VTable<IBeginRemoveVisualListener>()->fp_OnBeginRemoveVisual(__this, pr); }
};
// }

}} // ::g::Fuse
