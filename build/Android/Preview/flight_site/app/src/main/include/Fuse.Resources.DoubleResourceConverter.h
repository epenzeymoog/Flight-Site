// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\FuseCore\0.38.6\resources\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Resources.IResourceConverter-1.h>
#include <Fuse.Resources.NumericResourceConverter-1.h>
#include <Uno.Double.h>
namespace g{namespace Fuse{namespace Resources{struct DoubleResourceConverter;}}}

namespace g{
namespace Fuse{
namespace Resources{

// internal sealed class DoubleResourceConverter :345
// {
::g::Fuse::Resources::NumericResourceConverter_type* DoubleResourceConverter_typeof();
void DoubleResourceConverter__ctor_1_fn(DoubleResourceConverter* __this);
void DoubleResourceConverter__Convert_fn(DoubleResourceConverter* __this, uObject* o, double* __retval);
void DoubleResourceConverter__New1_fn(DoubleResourceConverter** __retval);

struct DoubleResourceConverter : ::g::Fuse::Resources::NumericResourceConverter
{
    void ctor_1();
    static DoubleResourceConverter* New1();
};
// }

}}} // ::g::Fuse::Resources
