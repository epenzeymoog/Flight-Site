// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\FuseCore\0.38.6\scripting\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Fuse{namespace Scripting{struct Error;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class Error :2416
// {
::g::Uno::Exception_type* Error_typeof();
void Error__ctor_3_fn(Error* __this, uString* message);
void Error__New4_fn(uString* message, Error** __retval);

struct Error : ::g::Uno::Exception
{
    void ctor_3(uString* message);
    static Error* New4(uString* message);
};
// }

}}} // ::g::Fuse::Scripting
