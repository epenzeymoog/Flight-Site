// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Elements\0.38.6\triggers\actions\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct BringIntoView;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class BringIntoView :41
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* BringIntoView_typeof();
void BringIntoView__ctor_2_fn(BringIntoView* __this);
void BringIntoView__New2_fn(BringIntoView** __retval);
void BringIntoView__Perform_fn(BringIntoView* __this, ::g::Fuse::Node* target);

struct BringIntoView : ::g::Fuse::Triggers::Actions::TriggerAction
{
    void ctor_2();
    static BringIntoView* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
