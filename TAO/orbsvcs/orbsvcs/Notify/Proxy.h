// -*- C++ -*-

/**
 *  @file Proxy.h
 *
 *  $Id$
 *
 *  @author Pradeep Gore <pradeep@oomworks.com>
 */

#ifndef TAO_Notify_PROXY_H
#define TAO_Notify_PROXY_H

#include /**/ "ace/pre.h"

#include "notify_serv_export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "Topology_Object.h"
#include "EventTypeSeq.h"
#include "FilterAdmin.h"
#include "Admin.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

class TAO_Notify_Admin;
class TAO_Notify_Peer;

/**
 * @class TAO_Notify_Proxy
 *
 * @brief Base class proxy for all proxys in NS.
 *
 */
class TAO_Notify_Serv_Export TAO_Notify_Proxy
  : public TAO_Notify::Topology_Parent
{
  friend class TAO_Notify_Peer;

public:
  typedef TAO_Notify_Refcountable_Guard_T<TAO_Notify_Proxy> Ptr;
  typedef CosNotifyChannelAdmin::ProxyIDSeq SEQ;
  typedef CosNotifyChannelAdmin::ProxyIDSeq_var SEQ_VAR;

  /// Constuctor
  TAO_Notify_Proxy (void);

  /// Destructor
  virtual ~TAO_Notify_Proxy ();

  /// Activate
  virtual CORBA::Object_ptr activate (PortableServer::Servant servant
                                      ACE_ENV_ARG_DECL);

  /// Activate with a given ID
  virtual CORBA::Object_ptr activate (
      PortableServer::Servant servant,
      CORBA::Long id
      ACE_ENV_ARG_DECL);

  /// Deactivate
  void deactivate (ACE_ENV_SINGLE_ARG_DECL);

  /// Obtain the Proxy's subscribed types.
  void subscribed_types (TAO_Notify_EventTypeSeq& subscribed_types
                         ACE_ENV_ARG_DECL);

  /// Check if this event passes the admin and proxy filters.
  CORBA::Boolean check_filters (
      const TAO_Notify_Event* event,
      TAO_Notify_FilterAdmin& parent_filter_admin,
      CosNotifyChannelAdmin::InterFilterGroupOperator filter_operator
      ACE_ENV_ARG_DECL
    );

  /// Inform this proxy that the following types are being advertised.
  void types_changed (const TAO_Notify_EventTypeSeq& added,
                      const TAO_Notify_EventTypeSeq& removed
                      ACE_ENV_ARG_DECL);

  /// Have updates been turned off.
  CORBA::Boolean updates_off (void);

  /// Destroy this object.
  virtual void destroy (ACE_ENV_SINGLE_ARG_DECL) = 0;

  /// Access our Peer.
  virtual TAO_Notify_Peer* peer (void) = 0;

  /// Implement the Obtain Types.
  virtual CosNotification::EventTypeSeq* obtain_types (
      CosNotifyChannelAdmin::ObtainInfoMode mode,
      const TAO_Notify_EventTypeSeq& types
      ACE_ENV_ARG_DECL
    )
    ACE_THROW_SPEC ((CORBA::SystemException));

  /// Notification of subscriptions/offers set at the admin.
  virtual void admin_types_changed (const CosNotification::EventTypeSeq & added,
                                    const CosNotification::EventTypeSeq & removed
                                    ACE_ENV_ARG_DECL) = 0;


  /// Override, TAO_Notify_Object::qos_changed
  virtual void qos_changed (const TAO_Notify_QoSProperties& qos_properties);

  // TAO_Notify::Topology_Object

  virtual void save_persistent (TAO_Notify::Topology_Saver& saver ACE_ENV_ARG_DECL);
  virtual void save_attrs(TAO_Notify::NVPList& attrs);
  virtual const char * get_proxy_type_name (void) const = 0;

  virtual TAO_Notify::Topology_Object* load_child (const ACE_CString &type, CORBA::Long id,
    const TAO_Notify::NVPList& attrs ACE_ENV_ARG_DECL);

protected:

  /// Filter Administration
  TAO_Notify_FilterAdmin filter_admin_;

  /// The types that we're subscribed with the event manager.
  TAO_Notify_EventTypeSeq subscribed_types_;

  /// True if updates have been turned off.
  CORBA::Boolean updates_off_;
};

TAO_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "Proxy.inl"
#endif /* __ACE_INLINE__ */

#include /**/ "ace/post.h"

#endif /* TAO_Notify_PROXY_H */
