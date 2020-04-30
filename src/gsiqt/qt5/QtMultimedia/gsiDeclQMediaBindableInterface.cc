
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2020 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQMediaBindableInterface.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QMediaBindableInterface>
#include <QMediaObject>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QMediaBindableInterface

// QMediaObject *QMediaBindableInterface::mediaObject()


static void _init_f_mediaObject_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMediaObject * > ();
}

static void _call_f_mediaObject_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaObject * > ((QMediaObject *)((QMediaBindableInterface *)cls)->mediaObject ());
}


namespace gsi
{

static gsi::Methods methods_QMediaBindableInterface () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("mediaObject", "@brief Method QMediaObject *QMediaBindableInterface::mediaObject()\n", true, &_init_f_mediaObject_c0, &_call_f_mediaObject_c0);
  return methods;
}

gsi::Class<QMediaBindableInterface> decl_QMediaBindableInterface ("QtMultimedia", "QMediaBindableInterface_Native",
  methods_QMediaBindableInterface (),
  "@hide\n@alias QMediaBindableInterface");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QMediaBindableInterface> &qtdecl_QMediaBindableInterface () { return decl_QMediaBindableInterface; }

}


class QMediaBindableInterface_Adaptor : public QMediaBindableInterface, public qt_gsi::QtObjectBase
{
public:

  virtual ~QMediaBindableInterface_Adaptor();

  //  [adaptor ctor] QMediaBindableInterface::QMediaBindableInterface()
  QMediaBindableInterface_Adaptor() : QMediaBindableInterface()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QMediaObject *QMediaBindableInterface::mediaObject()
  QMediaObject * cbs_mediaObject_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("mediaObject");
  }

  virtual QMediaObject * mediaObject() const
  {
    if (cb_mediaObject_c0_0.can_issue()) {
      return cb_mediaObject_c0_0.issue<QMediaBindableInterface_Adaptor, QMediaObject *>(&QMediaBindableInterface_Adaptor::cbs_mediaObject_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("mediaObject");
    }
  }

  //  [adaptor impl] bool QMediaBindableInterface::setMediaObject(QMediaObject *object)
  bool cbs_setMediaObject_1782_0(QMediaObject *object)
  {
    __SUPPRESS_UNUSED_WARNING (object);
    throw qt_gsi::AbstractMethodCalledException("setMediaObject");
  }

  virtual bool setMediaObject(QMediaObject *object)
  {
    if (cb_setMediaObject_1782_0.can_issue()) {
      return cb_setMediaObject_1782_0.issue<QMediaBindableInterface_Adaptor, bool, QMediaObject *>(&QMediaBindableInterface_Adaptor::cbs_setMediaObject_1782_0, object);
    } else {
      throw qt_gsi::AbstractMethodCalledException("setMediaObject");
    }
  }

  gsi::Callback cb_mediaObject_c0_0;
  gsi::Callback cb_setMediaObject_1782_0;
};

QMediaBindableInterface_Adaptor::~QMediaBindableInterface_Adaptor() { }

//  Constructor QMediaBindableInterface::QMediaBindableInterface() (adaptor class)

static void _init_ctor_QMediaBindableInterface_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QMediaBindableInterface_Adaptor> ();
}

static void _call_ctor_QMediaBindableInterface_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaBindableInterface_Adaptor *> (new QMediaBindableInterface_Adaptor ());
}


// QMediaObject *QMediaBindableInterface::mediaObject()

static void _init_cbs_mediaObject_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QMediaObject * > ();
}

static void _call_cbs_mediaObject_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QMediaObject * > ((QMediaObject *)((QMediaBindableInterface_Adaptor *)cls)->cbs_mediaObject_c0_0 ());
}

static void _set_callback_cbs_mediaObject_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaBindableInterface_Adaptor *)cls)->cb_mediaObject_c0_0 = cb;
}


// bool QMediaBindableInterface::setMediaObject(QMediaObject *object)

static void _init_cbs_setMediaObject_1782_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("object");
  decl->add_arg<QMediaObject * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_setMediaObject_1782_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QMediaObject *arg1 = args.read<QMediaObject * > (heap);
  ret.write<bool > ((bool)((QMediaBindableInterface_Adaptor *)cls)->cbs_setMediaObject_1782_0 (arg1));
}

static void _set_callback_cbs_setMediaObject_1782_0 (void *cls, const gsi::Callback &cb)
{
  ((QMediaBindableInterface_Adaptor *)cls)->cb_setMediaObject_1782_0 = cb;
}


namespace gsi
{

gsi::Class<QMediaBindableInterface> &qtdecl_QMediaBindableInterface ();

static gsi::Methods methods_QMediaBindableInterface_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QMediaBindableInterface::QMediaBindableInterface()\nThis method creates an object of class QMediaBindableInterface.", &_init_ctor_QMediaBindableInterface_Adaptor_0, &_call_ctor_QMediaBindableInterface_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("mediaObject", "@brief Virtual method QMediaObject *QMediaBindableInterface::mediaObject()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_mediaObject_c0_0, &_call_cbs_mediaObject_c0_0);
  methods += new qt_gsi::GenericMethod ("mediaObject", "@hide", true, &_init_cbs_mediaObject_c0_0, &_call_cbs_mediaObject_c0_0, &_set_callback_cbs_mediaObject_c0_0);
  methods += new qt_gsi::GenericMethod ("*setMediaObject", "@brief Virtual method bool QMediaBindableInterface::setMediaObject(QMediaObject *object)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_setMediaObject_1782_0, &_call_cbs_setMediaObject_1782_0);
  methods += new qt_gsi::GenericMethod ("*setMediaObject", "@hide", false, &_init_cbs_setMediaObject_1782_0, &_call_cbs_setMediaObject_1782_0, &_set_callback_cbs_setMediaObject_1782_0);
  return methods;
}

gsi::Class<QMediaBindableInterface_Adaptor> decl_QMediaBindableInterface_Adaptor (qtdecl_QMediaBindableInterface (), "QtMultimedia", "QMediaBindableInterface",
  methods_QMediaBindableInterface_Adaptor (),
  "@qt\n@brief Binding of QMediaBindableInterface");

}

