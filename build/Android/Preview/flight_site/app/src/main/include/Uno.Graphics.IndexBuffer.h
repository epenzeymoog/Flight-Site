// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\UnoCore\0.38.2\source\uno\graphics\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.IDisposable.h>
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{struct Buffer;}}

namespace g{
namespace Uno{
namespace Graphics{

// public sealed class IndexBuffer :539
// {
::g::Uno::Graphics::DeviceBuffer_type* IndexBuffer_typeof();
void IndexBuffer__ctor_1_fn(IndexBuffer* __this, int* sizeInBytes, int* usage);
void IndexBuffer__ctor_2_fn(IndexBuffer* __this, ::g::Uno::Buffer* data, int* usage);
void IndexBuffer__New1_fn(int* sizeInBytes, int* usage, IndexBuffer** __retval);
void IndexBuffer__New2_fn(::g::Uno::Buffer* data, int* usage, IndexBuffer** __retval);

struct IndexBuffer : ::g::Uno::Graphics::DeviceBuffer
{
    void ctor_1(int sizeInBytes, int usage);
    void ctor_2(::g::Uno::Buffer* data, int usage);
    static IndexBuffer* New1(int sizeInBytes, int usage);
    static IndexBuffer* New2(::g::Uno::Buffer* data, int usage);
};
// }

}}} // ::g::Uno::Graphics
