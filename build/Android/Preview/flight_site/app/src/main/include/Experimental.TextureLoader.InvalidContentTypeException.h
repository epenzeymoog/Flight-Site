// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Experimental.TextureLoader\0.38.0\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Experimental{namespace TextureLoader{struct InvalidContentTypeException;}}}

namespace g{
namespace Experimental{
namespace TextureLoader{

// public sealed class InvalidContentTypeException :27
// {
::g::Uno::Exception_type* InvalidContentTypeException_typeof();
void InvalidContentTypeException__ctor_3_fn(InvalidContentTypeException* __this, uString* reason);
void InvalidContentTypeException__New4_fn(uString* reason, InvalidContentTypeException** __retval);

struct InvalidContentTypeException : ::g::Uno::Exception
{
    void ctor_3(uString* reason);
    static InvalidContentTypeException* New4(uString* reason);
};
// }

}}} // ::g::Experimental::TextureLoader
