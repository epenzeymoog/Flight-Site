// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\FuseCore\0.38.6\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// internal abstract interface IDataProvider :7062
// {
uInterfaceType* IDataProvider_typeof();

struct IDataProvider
{
    void(*fp_get_Data)(uObject*, uObject**);
    static uObject* Data(const uInterface& __this) { uObject* __retval; return __this.VTable<IDataProvider>()->fp_get_Data(__this, &__retval), __retval; }
};
// }

}} // ::g::Fuse
