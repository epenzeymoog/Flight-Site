// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Animations\0.38.6\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract interface MasterPropertyGet :1704
// {
uInterfaceType* MasterPropertyGet_typeof();

struct MasterPropertyGet
{
    void(*fp_GetPropertyObject)(uObject*, uObject**);
    static uObject* GetPropertyObject(const uInterface& __this) { uObject* __retval; return __this.VTable<MasterPropertyGet>()->fp_GetPropertyObject(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Animations
