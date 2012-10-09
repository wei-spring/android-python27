/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:15 2012
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

#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qwizard.sip"
#include <qwizard.h>
#line 39 "sipQtGuiQWizardWizardOptions.cpp"

#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qwizard.sip"
#include <qwizard.h>
#line 43 "sipQtGuiQWizardWizardOptions.cpp"


extern "C" {static int slot_QWizard_WizardOptions___bool__(PyObject *);}
static int slot_QWizard_WizardOptions___bool__(PyObject *sipSelf)
{
    QWizard::WizardOptions *sipCpp = reinterpret_cast<QWizard::WizardOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWizard_WizardOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 336 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtGuiQWizardWizardOptions.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QWizard_WizardOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QWizard_WizardOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QWizard::WizardOptions *sipCpp = reinterpret_cast<QWizard::WizardOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWizard_WizardOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QWizard::WizardOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWizard_WizardOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 331 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtGuiQWizardWizardOptions.cpp"
            sipReleaseType(const_cast<QWizard::WizardOptions *>(a0),sipType_QWizard_WizardOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QWizard_WizardOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QWizard_WizardOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QWizard_WizardOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QWizard::WizardOptions *sipCpp = reinterpret_cast<QWizard::WizardOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWizard_WizardOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QWizard::WizardOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWizard_WizardOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 326 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 125 "sipQtGuiQWizardWizardOptions.cpp"
            sipReleaseType(const_cast<QWizard::WizardOptions *>(a0),sipType_QWizard_WizardOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QWizard_WizardOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QWizard_WizardOptions___invert__(PyObject *);}
static PyObject *slot_QWizard_WizardOptions___invert__(PyObject *sipSelf)
{
    QWizard::WizardOptions *sipCpp = reinterpret_cast<QWizard::WizardOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWizard_WizardOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QWizard::WizardOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QWizard::WizardOptions(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWizard_WizardOptions,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QWizard_WizardOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QWizard_WizardOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QWizard::WizardOptions * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWizard_WizardOptions, &a0, &a0State, &a1))
        {
            QWizard::WizardOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QWizard::WizardOptions((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QWizard_WizardOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWizard_WizardOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QWizard_WizardOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QWizard_WizardOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QWizard::WizardOptions * a0;
        int a0State = 0;
        QWizard::WizardOptions * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QWizard_WizardOptions, &a0, &a0State, sipType_QWizard_WizardOptions, &a1, &a1State))
        {
            QWizard::WizardOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QWizard::WizardOptions((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QWizard_WizardOptions,a0State);
            sipReleaseType(a1,sipType_QWizard_WizardOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QWizard_WizardOptions,NULL);
        }
    }

    {
        QWizard::WizardOptions * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWizard_WizardOptions, &a0, &a0State, &a1))
        {
            QWizard::WizardOptions *sipRes = 0;

#line 320 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new QWizard::WizardOptions(*a0 ^ a1);
#line 232 "sipQtGuiQWizardWizardOptions.cpp"
            sipReleaseType(a0,sipType_QWizard_WizardOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWizard_WizardOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QWizard_WizardOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QWizard_WizardOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QWizard::WizardOptions * a0;
        int a0State = 0;
        QWizard::WizardOptions * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QWizard_WizardOptions, &a0, &a0State, sipType_QWizard_WizardOptions, &a1, &a1State))
        {
            QWizard::WizardOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QWizard::WizardOptions((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QWizard_WizardOptions,a0State);
            sipReleaseType(a1,sipType_QWizard_WizardOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QWizard_WizardOptions,NULL);
        }
    }

    {
        QWizard::WizardOptions * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWizard_WizardOptions, &a0, &a0State, &a1))
        {
            QWizard::WizardOptions *sipRes = 0;

#line 315 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
        sipRes = new QWizard::WizardOptions(*a0 | a1);
#line 284 "sipQtGuiQWizardWizardOptions.cpp"
            sipReleaseType(a0,sipType_QWizard_WizardOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWizard_WizardOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QWizard_WizardOptions___int__(PyObject *);}
static PyObject *slot_QWizard_WizardOptions___int__(PyObject *sipSelf)
{
    QWizard::WizardOptions *sipCpp = reinterpret_cast<QWizard::WizardOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWizard_WizardOptions));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }
}


extern "C" {static PyObject *slot_QWizard_WizardOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QWizard_WizardOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWizard_WizardOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QWizard::WizardOptions *sipCpp = reinterpret_cast<QWizard::WizardOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWizard_WizardOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QWizard::WizardOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWizard_WizardOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QWizard::WizardOptions::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QWizard_WizardOptions,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QWizard_WizardOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QWizard_WizardOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWizard_WizardOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QWizard::WizardOptions *sipCpp = reinterpret_cast<QWizard::WizardOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWizard_WizardOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QWizard::WizardOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWizard_WizardOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QWizard::WizardOptions::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QWizard_WizardOptions,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QWizard_WizardOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QWizard_WizardOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWizard_WizardOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QWizard::WizardOptions *sipCpp = reinterpret_cast<QWizard::WizardOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWizard_WizardOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QWizard::WizardOptions::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWizard_WizardOptions(void *, const sipTypeDef *);}
static void *cast_QWizard_WizardOptions(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWizard_WizardOptions)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWizard_WizardOptions(void *, int);}
static void release_QWizard_WizardOptions(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QWizard::WizardOptions *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QWizard_WizardOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QWizard_WizardOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWizard::WizardOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWizard::WizardOptions *>(sipSrc);
}


extern "C" {static void *array_QWizard_WizardOptions(SIP_SSIZE_T);}
static void *array_QWizard_WizardOptions(SIP_SSIZE_T sipNrElem)
{
    return new QWizard::WizardOptions[sipNrElem];
}


extern "C" {static void *copy_QWizard_WizardOptions(const void *, SIP_SSIZE_T);}
static void *copy_QWizard_WizardOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWizard::WizardOptions(reinterpret_cast<const QWizard::WizardOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWizard_WizardOptions(sipSimpleWrapper *);}
static void dealloc_QWizard_WizardOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWizard_WizardOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QWizard_WizardOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QWizard_WizardOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWizard::WizardOptions *sipCpp = 0;

    {
        const QWizard::WizardOptions * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QWizard_WizardOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWizard::WizardOptions(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QWizard::WizardOptions *>(a0),sipType_QWizard_WizardOptions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWizard::WizardOptions(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWizard::WizardOptions();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QWizard_WizardOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QWizard_WizardOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QWizard::WizardOptions **sipCppPtr = reinterpret_cast<QWizard::WizardOptions **>(sipCppPtrV);

#line 341 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QWizard::WizardOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QWizard_WizardOption)) ||
            sipCanConvertToType(sipPy, sipType_QWizard_WizardOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QWizard_WizardOption)))
{
    *sipCppPtr = new QWizard::WizardOptions(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QWizard::WizardOptions *>(sipConvertToType(sipPy, sipType_QWizard_WizardOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 577 "sipQtGuiQWizardWizardOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QWizard_WizardOptions[] = {
    {(void *)slot_QWizard_WizardOptions___bool__, bool_slot},
    {(void *)slot_QWizard_WizardOptions___ne__, ne_slot},
    {(void *)slot_QWizard_WizardOptions___eq__, eq_slot},
    {(void *)slot_QWizard_WizardOptions___invert__, invert_slot},
    {(void *)slot_QWizard_WizardOptions___and__, and_slot},
    {(void *)slot_QWizard_WizardOptions___xor__, xor_slot},
    {(void *)slot_QWizard_WizardOptions___or__, or_slot},
    {(void *)slot_QWizard_WizardOptions___int__, int_slot},
    {(void *)slot_QWizard_WizardOptions___ixor__, ixor_slot},
    {(void *)slot_QWizard_WizardOptions___ior__, ior_slot},
    {(void *)slot_QWizard_WizardOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QWizard_WizardOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWizard__WizardOptions,
        {0}
    },
    {
        sipNameNr_WizardOptions,
        {751, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QWizard_WizardOptions,
    init_QWizard_WizardOptions,
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
    dealloc_QWizard_WizardOptions,
    assign_QWizard_WizardOptions,
    array_QWizard_WizardOptions,
    copy_QWizard_WizardOptions,
    release_QWizard_WizardOptions,
    cast_QWizard_WizardOptions,
    convertTo_QWizard_WizardOptions,
    0,
    0
},
    0,
    1,
    0
};
