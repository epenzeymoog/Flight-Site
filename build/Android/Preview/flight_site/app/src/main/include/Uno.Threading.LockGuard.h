// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Uno.Threading\0.38.2\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct LockGuard;}}}
namespace g{namespace Uno{namespace Threading{struct Mutex;}}}

namespace g{
namespace Uno{
namespace Threading{

// public sealed class LockGuard :746
// {
struct LockGuard_type : uType
{
    ::g::Uno::IDisposable interface0;
};

LockGuard_type* LockGuard_typeof();
void LockGuard__ctor__fn(LockGuard* __this, ::g::Uno::Threading::Mutex* mutex);
void LockGuard__Acquire_fn(::g::Uno::Threading::Mutex* mutex, uObject** __retval);
void LockGuard__New1_fn(::g::Uno::Threading::Mutex* mutex, LockGuard** __retval);
void LockGuard__UnoIDisposableDispose_fn(LockGuard* __this);

struct LockGuard : uObject
{
    uStrong< ::g::Uno::Threading::Mutex*> _mutex;

    void ctor_(::g::Uno::Threading::Mutex* mutex);
    static uObject* Acquire(::g::Uno::Threading::Mutex* mutex);
    static LockGuard* New1(::g::Uno::Threading::Mutex* mutex);
};
// }

}}} // ::g::Uno::Threading
