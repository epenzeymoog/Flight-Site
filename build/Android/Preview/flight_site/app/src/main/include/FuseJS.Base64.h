// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\FuseJS\0.38.6\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace FuseJS{struct Base64;}}

namespace g{
namespace FuseJS{

// public sealed class Base64 :367
// {
::g::Fuse::Scripting::NativeModule_type* Base64_typeof();
void Base64__ctor_2_fn(Base64* __this);
void Base64__DecodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Base64__DecodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Base64__EncodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Base64__EncodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void Base64__New2_fn(Base64** __retval);

struct Base64 : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<Base64*> _instance_;
    static uSStrong<Base64*>& _instance() { return _instance_; }

    void ctor_2();
    uObject* DecodeAscii(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* DecodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* EncodeAscii(::g::Fuse::Scripting::Context* context, uArray* args);
    uObject* EncodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args);
    static Base64* New2();
};
// }

}} // ::g::FuseJS
