// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Fuse.Controls.Native\0.38.6\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IShapeView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IRectangleView :466
// {
uInterfaceType* IRectangleView_typeof();

struct IRectangleView
{
    void(*fp_set_CornerRadius)(uObject*, ::g::Uno::Float4*);
    static void CornerRadius(const uInterface& __this, ::g::Uno::Float4 value);
};

}}}} // ::g::Fuse::Controls::Native

#include <Uno.Float4.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

inline void IRectangleView::CornerRadius(const uInterface& __this, ::g::Uno::Float4 value) { __this.VTable<IRectangleView>()->fp_set_CornerRadius(__this, &value); }
// }

}}}} // ::g::Fuse::Controls::Native
