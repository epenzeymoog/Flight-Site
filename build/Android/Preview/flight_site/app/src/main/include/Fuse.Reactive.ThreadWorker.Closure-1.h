// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Reactive\0.38.6\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct ThreadWorker__Closure;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// private sealed class ThreadWorker.Closure<T> :2060
// {
uType* ThreadWorker__Closure_typeof();
void ThreadWorker__Closure__ctor__fn(ThreadWorker__Closure* __this, uDelegate* action, void* arg);
void ThreadWorker__Closure__New1_fn(uType* __type, uDelegate* action, void* arg, ThreadWorker__Closure** __retval);
void ThreadWorker__Closure__Run_fn(ThreadWorker__Closure* __this);

struct ThreadWorker__Closure : uObject
{
    uStrong<uDelegate*> _action;
    uTField _arg() { return __type->Field(this, 1); }

    template<class T>
    void ctor_(uDelegate* action, T arg) { ThreadWorker__Closure__ctor__fn(this, action, uConstrain(__type->T(0), arg)); }
    void Run();
    template<class T>
    static ThreadWorker__Closure* New1(uType* __type, uDelegate* action, T arg) { ThreadWorker__Closure* __retval; return ThreadWorker__Closure__New1_fn(__type, action, uConstrain(__type->T(0), arg), &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
