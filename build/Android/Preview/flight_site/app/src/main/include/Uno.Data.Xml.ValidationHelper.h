// This file was generated based on C:\Users\rashad\AppData\Local\Fusetools\Fuse\App\app-0.27.1.7935\Packages\Uno.Data.Xml\0.38.0\source\helpers\$.uno.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Data{namespace Xml{struct ValidationHelper;}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlAttribute;}}}}
namespace g{namespace Uno{namespace Data{namespace Xml{struct XmlLinkedNode;}}}}

namespace g{
namespace Uno{
namespace Data{
namespace Xml{

// internal sealed class ValidationHelper :25
// {
uType* ValidationHelper_typeof();
void ValidationHelper__IsChildAlreadyExists_fn(::g::Uno::Data::Xml::XmlLinkedNode* owner, int* nodeType, bool* __retval);
void ValidationHelper__ValidateAttributeAdding_fn(::g::Uno::Data::Xml::XmlLinkedNode* owner, ::g::Uno::Data::Xml::XmlAttribute* item);
void ValidationHelper__ValidateNodeAdding_fn(::g::Uno::Data::Xml::XmlLinkedNode* owner, ::g::Uno::Data::Xml::XmlLinkedNode* item);

struct ValidationHelper : uObject
{
    static bool IsChildAlreadyExists(::g::Uno::Data::Xml::XmlLinkedNode* owner, int nodeType);
    static void ValidateAttributeAdding(::g::Uno::Data::Xml::XmlLinkedNode* owner, ::g::Uno::Data::Xml::XmlAttribute* item);
    static void ValidateNodeAdding(::g::Uno::Data::Xml::XmlLinkedNode* owner, ::g::Uno::Data::Xml::XmlLinkedNode* item);
};
// }

}}}} // ::g::Uno::Data::Xml
