// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Controls.Navigation\0.38.6\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct NavigationControl__PageData;}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class NavigationControl.PageData :558
// {
uType* NavigationControl__PageData_typeof();
void NavigationControl__PageData__ctor__fn(NavigationControl__PageData* __this);
void NavigationControl__PageData__New1_fn(NavigationControl__PageData** __retval);

struct NavigationControl__PageData : uObject
{
    bool Active;
    uStrong< ::g::Fuse::Triggers::Trigger*> Enter;
    uStrong< ::g::Fuse::Triggers::Trigger*> Exit;
    uStrong< ::g::Fuse::Triggers::Trigger*> Inactive;
    uStrong< ::g::Fuse::Triggers::Trigger*> Removing;

    void ctor_();
    static NavigationControl__PageData* New1();
};
// }

}}} // ::g::Fuse::Controls
