// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Triggers\0.38.6\actions\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.Actions.TriggerAction.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct Show;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class Show :939
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* Show_typeof();
void Show__ctor_2_fn(Show* __this);
void Show__New2_fn(Show** __retval);
void Show__Perform_fn(Show* __this, ::g::Fuse::Node* target);

struct Show : ::g::Fuse::Triggers::Actions::TriggerAction
{
    void ctor_2();
    static Show* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions