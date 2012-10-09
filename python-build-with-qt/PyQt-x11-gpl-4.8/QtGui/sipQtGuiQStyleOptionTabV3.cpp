/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:16 2012
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

#include "sipAPIQtGui.h"

#line 1972 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 39 "sipQtGuiQStyleOptionTabV3.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qsize.sip"
#include <qsize.h>
#line 43 "sipQtGuiQStyleOptionTabV3.cpp"
#line 769 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 46 "sipQtGuiQStyleOptionTabV3.cpp"
#line 693 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 49 "sipQtGuiQStyleOptionTabV3.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 52 "sipQtGuiQStyleOptionTabV3.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionTabV3(void *, const sipTypeDef *);}
static void *cast_QStyleOptionTabV3(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionTabV3)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOptionTabV2)->ctd_cast((QStyleOptionTabV2 *)(QStyleOptionTabV3 *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionTabV3(void *, int);}
static void release_QStyleOptionTabV3(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionTabV3 *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionTabV3(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionTabV3(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionTabV3 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionTabV3 *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionTabV3(SIP_SSIZE_T);}
static void *array_QStyleOptionTabV3(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionTabV3[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionTabV3(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionTabV3(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionTabV3(reinterpret_cast<const QStyleOptionTabV3 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionTabV3(sipSimpleWrapper *);}
static void dealloc_QStyleOptionTabV3(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionTabV3(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QStyleOptionTabV3(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QStyleOptionTabV3(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionTabV3 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabV3();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionTabV3 * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionTabV3, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabV3(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionTabV2 * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionTabV2, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabV3(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionTab * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionTab, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionTabV3(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionTabV3[] = {{568, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionTabV3[] = {
    {sipName_Version, QStyleOptionTabV3::Version, 571},
};


extern "C" {static PyObject *varget_QStyleOptionTabV3_documentMode(void *, PyObject *);}
static PyObject *varget_QStyleOptionTabV3_documentMode(void *sipSelf, PyObject *)
{
    bool sipVal;
    QStyleOptionTabV3 *sipCpp = reinterpret_cast<QStyleOptionTabV3 *>(sipSelf);

    sipVal = sipCpp->documentMode;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionTabV3_documentMode(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabV3_documentMode(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionTabV3 *sipCpp = reinterpret_cast<QStyleOptionTabV3 *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->documentMode = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabV3_leftButtonSize(void *, PyObject *);}
static PyObject *varget_QStyleOptionTabV3_leftButtonSize(void *sipSelf, PyObject *)
{
    QSize *sipVal;
    QStyleOptionTabV3 *sipCpp = reinterpret_cast<QStyleOptionTabV3 *>(sipSelf);

    sipVal = &sipCpp->leftButtonSize;

    return sipConvertFromType(sipVal,sipType_QSize, NULL);
}


extern "C" {static int varset_QStyleOptionTabV3_leftButtonSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabV3_leftButtonSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize *sipVal;
    QStyleOptionTabV3 *sipCpp = reinterpret_cast<QStyleOptionTabV3 *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->leftButtonSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionTabV3_rightButtonSize(void *, PyObject *);}
static PyObject *varget_QStyleOptionTabV3_rightButtonSize(void *sipSelf, PyObject *)
{
    QSize *sipVal;
    QStyleOptionTabV3 *sipCpp = reinterpret_cast<QStyleOptionTabV3 *>(sipSelf);

    sipVal = &sipCpp->rightButtonSize;

    return sipConvertFromType(sipVal,sipType_QSize, NULL);
}


extern "C" {static int varset_QStyleOptionTabV3_rightButtonSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionTabV3_rightButtonSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize *sipVal;
    QStyleOptionTabV3 *sipCpp = reinterpret_cast<QStyleOptionTabV3 *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->rightButtonSize = *sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionTabV3[] = {
    {sipName_documentMode, varget_QStyleOptionTabV3_documentMode, varset_QStyleOptionTabV3_documentMode, 0},
    {sipName_leftButtonSize, varget_QStyleOptionTabV3_leftButtonSize, varset_QStyleOptionTabV3_leftButtonSize, 0},
    {sipName_rightButtonSize, varget_QStyleOptionTabV3_rightButtonSize, varset_QStyleOptionTabV3_rightButtonSize, 0},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionTabV3 = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionTabV3,
        {0}
    },
    {
        sipNameNr_QStyleOptionTabV3,
        {0, 0, 1},
        0, 0,
        1, enummembers_QStyleOptionTabV3,
        3, variables_QStyleOptionTabV3,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QStyleOptionTabV3,
    0,
    init_QStyleOptionTabV3,
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
    dealloc_QStyleOptionTabV3,
    assign_QStyleOptionTabV3,
    array_QStyleOptionTabV3,
    copy_QStyleOptionTabV3,
    release_QStyleOptionTabV3,
    cast_QStyleOptionTabV3,
    0,
    0,
    0
},
    0,
    0,
    0
};
