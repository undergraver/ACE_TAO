// -*- C++ -*-
// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.dre.vanderbilt.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:135

#ifndef _TAO_PIDL_RTCORBA_RT_PROTOCOLPROPERTIESC_H_
#define _TAO_PIDL_RTCORBA_RT_PROTOCOLPROPERTIESC_H_

#include /**/ "ace/pre.h"

#ifndef TAO_RTCORBA_SAFE_INCLUDE
#error You should not include RTCORBA/RT_ProtocolPropertiesC.h, use tao/RTCORBA/RTCORBA.h
#endif /* TAO_RTCORBA_SAFE_INCLUDE */

#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "tao/RTCORBA/rtcorba_export.h"
#include "tao/Basic_Types.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"
#include /**/ "tao/Versioned_Namespace.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:49

namespace RTCORBA
{
  // TAO_IDL - Generated from
  // be\be_interface.cpp:638

#if !defined (_RTCORBA_PROTOCOLPROPERTIES__VAR_OUT_CH_)
#define _RTCORBA_PROTOCOLPROPERTIES__VAR_OUT_CH_

  class ProtocolProperties;
  typedef ProtocolProperties *ProtocolProperties_ptr;

  typedef
    TAO_Objref_Var_T<
        ProtocolProperties
      >
    ProtocolProperties_var;

  typedef
    TAO_Objref_Out_T<
        ProtocolProperties
      >
    ProtocolProperties_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be\be_visitor_interface/interface_ch.cpp:54

#if !defined (_RTCORBA_PROTOCOLPROPERTIES_CH_)
#define _RTCORBA_PROTOCOLPROPERTIES_CH_

  class TAO_RTCORBA_Export ProtocolProperties
    : public virtual ::CORBA::Object
  {
  public:
    typedef ProtocolProperties_ptr _ptr_type;
    typedef ProtocolProperties_var _var_type;
    typedef ProtocolProperties_out _out_type;

    // The static operations.
    static ProtocolProperties_ptr _duplicate (ProtocolProperties_ptr obj);

    static void _tao_release (ProtocolProperties_ptr obj);

    static ProtocolProperties_ptr _narrow (::CORBA::Object_ptr obj);
    static ProtocolProperties_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static ProtocolProperties_ptr _nil ()
    {
      return nullptr;
    }

    static void _tao_any_destructor (void *);

    // TAO_IDL - Generated from
    // be\be_visitor_interface/interface_ch.cpp:216

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);

    // CDR Encoder/Decoder methods. (handcrafted)
    virtual CORBA::Boolean _tao_encode (TAO_OutputCDR &out_cdr);
    virtual CORBA::Boolean _tao_decode (TAO_InputCDR &in_cdr);

  protected:
    // Abstract or local interface only.
    ProtocolProperties (void);

    virtual ~ProtocolProperties (void);

  private:
    // Private and unimplemented for concrete interfaces.
    ProtocolProperties (const ProtocolProperties &);

    void operator= (const ProtocolProperties &);
  };

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:78

} // module RTCORBA

// TAO_IDL - Generated from
// be\be_visitor_traits.cpp:64


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{
#if !defined (_RTCORBA_PROTOCOLPROPERTIES__TRAITS_)
#define _RTCORBA_PROTOCOLPROPERTIES__TRAITS_

  template<>
  struct TAO_RTCORBA_Export Objref_Traits< ::RTCORBA::ProtocolProperties>
  {
    static ::RTCORBA::ProtocolProperties_ptr duplicate (
        ::RTCORBA::ProtocolProperties_ptr
      );
    static void release (
        ::RTCORBA::ProtocolProperties_ptr
      );
    static ::RTCORBA::ProtocolProperties_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::RTCORBA::ProtocolProperties_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// be\be_codegen.cpp:1209


TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* ifndef */


