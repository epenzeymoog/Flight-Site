// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Storage\0.38.6\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Storage{struct ApplicationDir__WriteClosure;}}}

namespace g{
namespace Fuse{
namespace Storage{

// private sealed class ApplicationDir.WriteClosure :80
// {
uType* ApplicationDir__WriteClosure_typeof();
void ApplicationDir__WriteClosure__ctor__fn(ApplicationDir__WriteClosure* __this, uString* filename, uString* value);
void ApplicationDir__WriteClosure__Invoke_fn(ApplicationDir__WriteClosure* __this, bool* __retval);
void ApplicationDir__WriteClosure__New1_fn(uString* filename, uString* value, ApplicationDir__WriteClosure** __retval);

struct ApplicationDir__WriteClosure : uObject
{
    uStrong<uString*> _filename;
    uStrong<uString*> _value;

    void ctor_(uString* filename, uString* value);
    bool Invoke();
    static ApplicationDir__WriteClosure* New1(uString* filename, uString* value);
};
// }

}}} // ::g::Fuse::Storage
