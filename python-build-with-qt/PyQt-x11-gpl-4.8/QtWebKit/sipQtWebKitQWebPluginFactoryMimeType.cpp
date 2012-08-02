/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:59 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtWebKit.h"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 45 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 62 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 83 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 90 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 47 "sipQtWebKitQWebPluginFactoryMimeType.cpp"

#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "sipQtWebKitQWebPluginFactoryMimeType.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 54 "sipQtWebKitQWebPluginFactoryMimeType.cpp"


extern "C" {static PyObject *slot_QWebPluginFactory_MimeType___ne__(PyObject *,PyObject *);}
static PyObject *slot_QWebPluginFactory_MimeType___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebPluginFactory_MimeType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QWebPluginFactory::MimeType * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QWebPluginFactory_MimeType, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QWebPluginFactory::MimeType::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebKit,ne_slot,sipType_QWebPluginFactory_MimeType,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QWebPluginFactory_MimeType___eq__(PyObject *,PyObject *);}
static PyObject *slot_QWebPluginFactory_MimeType___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWebPluginFactory_MimeType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QWebPluginFactory::MimeType * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QWebPluginFactory_MimeType, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QWebPluginFactory::MimeType::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWebKit,eq_slot,sipType_QWebPluginFactory_MimeType,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebPluginFactory_MimeType(void *, const sipTypeDef *);}
static void *cast_QWebPluginFactory_MimeType(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWebPluginFactory_MimeType)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebPluginFactory_MimeType(void *, int);}
static void release_QWebPluginFactory_MimeType(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QWebPluginFactory::MimeType *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QWebPluginFactory_MimeType(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebPluginFactory_MimeType(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebPluginFactory::MimeType *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebPluginFactory::MimeType *>(sipSrc);
}


extern "C" {static void *array_QWebPluginFactory_MimeType(SIP_SSIZE_T);}
static void *array_QWebPluginFactory_MimeType(SIP_SSIZE_T sipNrElem)
{
    return new QWebPluginFactory::MimeType[sipNrElem];
}


extern "C" {static void *copy_QWebPluginFactory_MimeType(const void *, SIP_SSIZE_T);}
static void *copy_QWebPluginFactory_MimeType(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebPluginFactory::MimeType(reinterpret_cast<const QWebPluginFactory::MimeType *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebPluginFactory_MimeType(sipSimpleWrapper *);}
static void dealloc_QWebPluginFactory_MimeType(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebPluginFactory_MimeType(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QWebPluginFactory_MimeType(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QWebPluginFactory_MimeType(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebPluginFactory::MimeType *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPluginFactory::MimeType();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QWebPluginFactory::MimeType * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebPluginFactory_MimeType, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebPluginFactory::MimeType(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QWebPluginFactory_MimeType[] = {
    {(void *)slot_QWebPluginFactory_MimeType___ne__, ne_slot},
    {(void *)slot_QWebPluginFactory_MimeType___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


extern "C" {static PyObject *varget_QWebPluginFactory_MimeType_description(void *, PyObject *);}
static PyObject *varget_QWebPluginFactory_MimeType_description(void *sipSelf, PyObject *)
{
    QString *sipVal;
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipSelf);

    sipVal = &sipCpp->description;

    return sipConvertFromType(sipVal,sipType_QString, NULL);
}


extern "C" {static int varset_QWebPluginFactory_MimeType_description(void *, PyObject *, PyObject *);}
static int varset_QWebPluginFactory_MimeType_description(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString *sipVal;
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->description = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QWebPluginFactory_MimeType_fileExtensions(void *, PyObject *);}
static PyObject *varget_QWebPluginFactory_MimeType_fileExtensions(void *sipSelf, PyObject *)
{
    QStringList *sipVal;
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipSelf);

    sipVal = &sipCpp->fileExtensions;

    return sipConvertFromType(sipVal,sipType_QStringList, NULL);
}


extern "C" {static int varset_QWebPluginFactory_MimeType_fileExtensions(void *, PyObject *, PyObject *);}
static int varset_QWebPluginFactory_MimeType_fileExtensions(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QStringList *sipVal;
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QStringList *>(sipForceConvertToType(sipPy,sipType_QStringList,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->fileExtensions = *sipVal;

    sipReleaseType(sipVal, sipType_QStringList, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QWebPluginFactory_MimeType_name(void *, PyObject *);}
static PyObject *varget_QWebPluginFactory_MimeType_name(void *sipSelf, PyObject *)
{
    QString *sipVal;
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipSelf);

    sipVal = &sipCpp->name;

    return sipConvertFromType(sipVal,sipType_QString, NULL);
}


extern "C" {static int varset_QWebPluginFactory_MimeType_name(void *, PyObject *, PyObject *);}
static int varset_QWebPluginFactory_MimeType_name(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString *sipVal;
    QWebPluginFactory::MimeType *sipCpp = reinterpret_cast<QWebPluginFactory::MimeType *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->name = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}

sipVariableDef variables_QWebPluginFactory_MimeType[] = {
    {sipName_description, varget_QWebPluginFactory_MimeType_description, varset_QWebPluginFactory_MimeType_description, 0},
    {sipName_fileExtensions, varget_QWebPluginFactory_MimeType_fileExtensions, varset_QWebPluginFactory_MimeType_fileExtensions, 0},
    {sipName_name, varget_QWebPluginFactory_MimeType_name, varset_QWebPluginFactory_MimeType_name, 0},
};


pyqt4ClassTypeDef sipTypeDef_QtWebKit_QWebPluginFactory_MimeType = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebPluginFactory__MimeType,
        {0}
    },
    {
        sipNameNr_MimeType,
        {35, 255, 0},
        0, 0,
        0, 0,
        3, variables_QWebPluginFactory_MimeType,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QWebPluginFactory_MimeType,
    init_QWebPluginFactory_MimeType,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QWebPluginFactory_MimeType,
    assign_QWebPluginFactory_MimeType,
    array_QWebPluginFactory_MimeType,
    copy_QWebPluginFactory_MimeType,
    release_QWebPluginFactory_MimeType,
    cast_QWebPluginFactory_MimeType,
    0,
    0,
    0
},
    0,
    0,
    0
};